---
--- pgcopydb test/cdc/dml.sql
---
--- This file implements DML changes in the pagila database.

\set customerid1 291
\set customerid2 292

\set staffid1 1
\set staffid2 2

\set inventoryid1 371
\set inventoryid2 1097

begin;

with r as
 (
   insert into rental(rental_date, inventory_id, customer_id, staff_id, last_update)
        select '2022-06-01', :inventoryid1, :customerid1, :staffid1, '2022-06-01'
     returning rental_id, customer_id, staff_id
 )
 insert into payment(customer_id, staff_id, rental_id, amount, payment_date)
      select customer_id, staff_id, rental_id, 5.99, '2022-06-01'
        from r;

commit;

-- update 10 rows in a single UPDATE command
update public.payment set amount = 11.95 where amount = 11.99;

begin;

delete from payment
      using rental
      where rental.rental_id = payment.rental_id
        and rental.last_update = '2022-06-01';

delete from rental where rental.last_update = '2022-06-01';

commit;

--
-- update the payments back to their original values
--
begin;

update public.payment set amount = 11.99 where amount = 11.95;

commit;

--
-- Test "is null" transformation in change data capture.
--
begin;

-- Disable triggers to prevent automatic refresh of 'last_updated' attribute
-- when modifying rows in the address table.
set session_replication_role = replica;

delete from address where city_id = 300 and address2 is null;

update address set postal_code = '751007' where phone = '6172235589' and address2 is null;

commit;

--
-- Test generated columns insert, update, and delete
--
begin;
insert into generated_column_test(id, name, email) values
(1, 'Tiger', 'tiger@wild.com'),
(2, 'Elephant', 'elephant@wild.com'),
(3, 'Cat', 'cat@home.net');
commit;

begin;
update generated_column_test set name = 'Lion'
where id = 1;
update generated_column_test set email='lion@wild.com'
where email = 'tiger@wild.com';
commit;

begin;
update generated_column_test set name = 'Kitten', email='kitten@home.com'
where id = 3;
commit;

begin;
delete from generated_column_test where id = 2;
commit;

--
-- Test update is not failing when value is not changed.
--
begin;
insert into single_column_table(id) values (1), (2);
insert into multi_column_table(id, name, email) values
(1, 'Alice', 'alice@hello.com'),
(2, 'Bob', 'bob@hello.com')
;
commit;

begin;
update single_column_table set id = id;
update multi_column_table set id = id, name = name, email = email;
commit;
