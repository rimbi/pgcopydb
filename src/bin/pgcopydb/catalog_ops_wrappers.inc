CATALOG_WRAPPER_RET(bool, catalog_open, open, (DatabaseCatalog *catalog), (catalog))
CATALOG_WRAPPER_RET(bool, catalog_init, init, (DatabaseCatalog *catalog), (catalog))
CATALOG_WRAPPER_RET(bool, catalog_create_semaphore, create_semaphore, (DatabaseCatalog *catalog), (catalog))
CATALOG_WRAPPER_RET(bool, catalog_attach, attach, (DatabaseCatalog *a, DatabaseCatalog *b, const char *name), (a, b, name))
CATALOG_WRAPPER_RET(bool, catalog_close, close, (DatabaseCatalog *catalog), (catalog))
CATALOG_WRAPPER_RET(bool, catalog_create_schema, create_schema, (DatabaseCatalog *catalog), (catalog))
CATALOG_WRAPPER_RET(bool, catalog_drop_schema, drop_schema, (DatabaseCatalog *catalog), (catalog))
CATALOG_WRAPPER_RET(bool, catalog_set_wal_mode, set_wal_mode, (DatabaseCatalog *catalog), (catalog))
CATALOG_WRAPPER_RET(bool, catalog_begin, begin, (DatabaseCatalog *catalog, bool immediate), (catalog, immediate))
CATALOG_WRAPPER_RET(bool, catalog_commit, commit, (DatabaseCatalog *catalog), (catalog))
CATALOG_WRAPPER_RET(bool, catalog_register_setup, register_setup, (DatabaseCatalog *catalog,
							const char *source_pg_uri,
							const char *target_pg_uri,
							const char *snapshot,
							uint64_t splitTablesLargerThanBytes,
							int splitMaxParts,
							const char *filters), (catalog, source_pg_uri, target_pg_uri, snapshot, splitTablesLargerThanBytes, splitMaxParts, filters))
CATALOG_WRAPPER_RET(bool, catalog_setup_replication, setup_replication, (DatabaseCatalog *catalog,
							   const char *snapshot,
							   const char *plugin,
							   const char *slotName), (catalog, snapshot, plugin, slotName))
CATALOG_WRAPPER_RET(bool, catalog_setup, setup, (DatabaseCatalog *catalog), (catalog))
CATALOG_WRAPPER_RET(bool, catalog_setup_fetch, setup_fetch, (SQLiteQuery *query), (query))
CATALOG_WRAPPER_VOID(void, catalog_start_timing, start_timing, (TopLevelTiming *timing), (timing))
CATALOG_WRAPPER_VOID(void, catalog_stop_timing, stop_timing, (TopLevelTiming *timing), (timing))
CATALOG_WRAPPER_RET(bool, catalog_register_section, register_section, (DatabaseCatalog *catalog, TopLevelTiming *timing), (catalog, timing))
CATALOG_WRAPPER_RET(bool, catalog_section_state, section_state, (DatabaseCatalog *catalog, CatalogSection *section), (catalog, section))
CATALOG_WRAPPER_RET(bool, catalog_section_fetch, section_fetch, (SQLiteQuery *query), (query))
CATALOG_WRAPPER_RET(bool, catalog_total_duration, total_duration, (DatabaseCatalog *catalog), (catalog))
CATALOG_WRAPPER_RET(bool, catalog_lookup_s_extension_by_extname, lookup_s_extension_by_extname, (DatabaseCatalog *catalog, const
										   char *extensionName,
										   SourceExtension *extension), (catalog, extensionName, extension))
CATALOG_WRAPPER_RET(bool, catalog_extension_fetch, extension_fetch, (SQLiteQuery *query), (query))
CATALOG_WRAPPER_RET(bool, catalog_stats, stats, (DatabaseCatalog *catalog, CatalogStats *stats), (catalog, stats))
CATALOG_WRAPPER_RET(bool, catalog_s_table_stats, s_table_stats, (DatabaseCatalog *catalog, CatalogTableStats *stats), (catalog, stats))
CATALOG_WRAPPER_RET(bool, catalog_s_table_stats_fetch, s_table_stats_fetch, (SQLiteQuery *query), (query))
CATALOG_WRAPPER_RET(bool, catalog_count_objects, count_objects, (DatabaseCatalog *catalog, CatalogCounts *count), (catalog, count))
CATALOG_WRAPPER_RET(bool, catalog_count_fetch, count_fetch, (SQLiteQuery *query), (query))
CATALOG_WRAPPER_RET(bool, catalog_add_s_matview, add_s_matview, (DatabaseCatalog *catalog, SourceTable *table), (catalog, table))
CATALOG_WRAPPER_RET(bool, catalog_lookup_s_matview_by_oid, lookup_s_matview_by_oid, (DatabaseCatalog *catalog,
									 CatalogMatView *result,
									 uint32_t oid), (catalog, result, oid))
CATALOG_WRAPPER_RET(bool, catalog_s_matview_fetch, s_matview_fetch, (SQLiteQuery *query), (query))
CATALOG_WRAPPER_RET(bool, catalog_add_s_table, add_s_table, (DatabaseCatalog *catalog, SourceTable *table), (catalog, table))
CATALOG_WRAPPER_RET(bool, catalog_add_attributes, add_attributes, (DatabaseCatalog *catalog, SourceTable *table), (catalog, table))
CATALOG_WRAPPER_RET(bool, catalog_add_s_table_part, add_s_table_part, (DatabaseCatalog *catalog, SourceTable *table), (catalog, table))
CATALOG_WRAPPER_RET(bool, catalog_add_s_table_chksum, add_s_table_chksum, (DatabaseCatalog *catalog,
								SourceTable *table,
								TableChecksum *srcChk,
								TableChecksum *dstChk), (catalog, table, srcChk, dstChk))
CATALOG_WRAPPER_RET(bool, catalog_add_s_table_size, add_s_table_size, (DatabaseCatalog *catalog,
							  SourceTableSize *tableSize), (catalog, tableSize))
CATALOG_WRAPPER_RET(bool, catalog_delete_s_table_chksum_all, delete_s_table_chksum_all, (DatabaseCatalog *catalog), (catalog))
CATALOG_WRAPPER_RET(bool, catalog_iter_s_table, iter_s_table, (DatabaseCatalog *catalog,
						  void *context,
						  SourceTableIterFun *callback), (catalog, context, callback))
CATALOG_WRAPPER_RET(bool, catalog_iter_s_table_nopk, iter_s_table_nopk, (DatabaseCatalog *catalog,
							   void *context,
							   SourceTableIterFun *callback), (catalog, context, callback))
CATALOG_WRAPPER_RET(bool, catalog_iter_s_table_generated_columns, iter_s_table_generated_columns, (DatabaseCatalog *catalog,
											void *context,
											SourceTableIterFun *callback), (catalog, context, callback))
CATALOG_WRAPPER_RET(bool, catalog_iter_s_table_init, iter_s_table_init, (SourceTableIterator *iter), (iter))
CATALOG_WRAPPER_RET(bool, catalog_iter_s_table_nopk_init, iter_s_table_nopk_init, (SourceTableIterator *iter), (iter))
CATALOG_WRAPPER_RET(bool, catalog_iter_s_table_generated_columns_init, iter_s_table_generated_columns_init, (SourceTableIterator *iter), (iter))
CATALOG_WRAPPER_RET(bool, catalog_iter_s_table_next, iter_s_table_next, (SourceTableIterator *iter), (iter))
CATALOG_WRAPPER_RET(bool, catalog_iter_s_table_finish, iter_s_table_finish, (SourceTableIterator *iter), (iter))
CATALOG_WRAPPER_RET(bool, catalog_lookup_s_table, lookup_s_table, (DatabaseCatalog *catalog,
							uint32_t oid,
							int partNumber,
							SourceTable *table), (catalog, oid, partNumber, table))
CATALOG_WRAPPER_RET(bool, catalog_lookup_s_table_by_name, lookup_s_table_by_name, (DatabaseCatalog *catalog,
									const char *nspname,
									const char *relname,
									SourceTable *table), (catalog, nspname, relname, table))
CATALOG_WRAPPER_RET(bool, catalog_s_table_fetch, s_table_fetch, (SQLiteQuery *query), (query))
CATALOG_WRAPPER_RET(bool, catalog_iter_s_table_parts, iter_s_table_parts, (DatabaseCatalog *catalog,
								uint32_t oid,
								void *context,
								SourceTablePartsIterFun *callback), (catalog, oid, context, callback))
CATALOG_WRAPPER_RET(bool, catalog_iter_s_table_part_init, iter_s_table_part_init, (SourceTablePartsIterator *iter), (iter))
CATALOG_WRAPPER_RET(bool, catalog_iter_s_table_part_next, iter_s_table_part_next, (SourceTablePartsIterator *iter), (iter))
CATALOG_WRAPPER_RET(bool, catalog_iter_s_table_part_finish, iter_s_table_part_finish, (SourceTablePartsIterator *iter), (iter))
CATALOG_WRAPPER_RET(bool, catalog_s_table_attrlist, s_table_attrlist, (DatabaseCatalog *catalog, SourceTable *table), (catalog, table))
CATALOG_WRAPPER_RET(bool, catalog_s_table_part_fetch, s_table_part_fetch, (SQLiteQuery *query), (query))
CATALOG_WRAPPER_RET(bool, catalog_s_table_fetch_attrlist, s_table_fetch_attrlist, (SQLiteQuery *query), (query))
CATALOG_WRAPPER_RET(bool, catalog_s_table_fetch_attrs, s_table_fetch_attrs, (DatabaseCatalog *catalog,
								 SourceTable *table), (catalog, table))
CATALOG_WRAPPER_RET(bool, catalog_iter_s_table_attrs_init, iter_s_table_attrs_init, (SourceTableAttrsIterator *iter), (iter))
CATALOG_WRAPPER_RET(bool, catalog_iter_s_table_attrs_next, iter_s_table_attrs_next, (SourceTableAttrsIterator *iter), (iter))
CATALOG_WRAPPER_RET(bool, catalog_iter_s_table_attrs_finish, iter_s_table_attrs_finish, (SourceTableAttrsIterator *iter), (iter))
CATALOG_WRAPPER_RET(bool, catalog_s_table_attrs_fetch, s_table_attrs_fetch, (SQLiteQuery *query), (query))
CATALOG_WRAPPER_RET(bool, catalog_lookup_s_attr_by_name, lookup_s_attr_by_name, (DatabaseCatalog *catalog,
								   uint32_t reloid,
								   const char *attname,
								   SourceTableAttribute *attribute), (catalog, reloid, attname, attribute))
CATALOG_WRAPPER_RET(bool, catalog_s_attr_fetch, s_attr_fetch, (SQLiteQuery *query), (query))
CATALOG_WRAPPER_RET(bool, catalog_add_s_index, add_s_index, (DatabaseCatalog *catalog, SourceIndex *index), (catalog, index))
CATALOG_WRAPPER_RET(bool, catalog_add_s_constraint, add_s_constraint, (DatabaseCatalog *catalog, SourceIndex *index), (catalog, index))
CATALOG_WRAPPER_RET(bool, catalog_lookup_s_index, lookup_s_index, (DatabaseCatalog *catalog,
							uint32_t oid,
							SourceIndex *index), (catalog, oid, index))
CATALOG_WRAPPER_RET(bool, catalog_lookup_s_index_by_name, lookup_s_index_by_name, (DatabaseCatalog *catalog,
									const char *nspname,
									const char *relname,
									SourceIndex *index), (catalog, nspname, relname, index))
CATALOG_WRAPPER_RET(bool, catalog_delete_s_index_all, delete_s_index_all, (DatabaseCatalog *catalog), (catalog))
CATALOG_WRAPPER_RET(bool, catalog_iter_s_index, iter_s_index, (DatabaseCatalog *catalog,
						  void *context,
						  SourceIndexIterFun *callback), (catalog, context, callback))
CATALOG_WRAPPER_RET(bool, catalog_iter_s_index_table, iter_s_index_table, (DatabaseCatalog *catalog,
								const char *nspname,
								const char *relname,
								void *context,
								SourceIndexIterFun *callback), (catalog, nspname, relname, context, callback))
CATALOG_WRAPPER_RET(bool, catalog_s_table_count_indexes, s_table_count_indexes, (DatabaseCatalog *catalog,
								   SourceTable *table), (catalog, table))
CATALOG_WRAPPER_RET(bool, catalog_s_table_count_indexes_fetch, s_table_count_indexes_fetch, (SQLiteQuery *query), (query))
CATALOG_WRAPPER_RET(bool, catalog_iter_s_index_init, iter_s_index_init, (SourceIndexIterator *iter), (iter))
CATALOG_WRAPPER_RET(bool, catalog_iter_s_index_table_init, iter_s_index_table_init, (SourceIndexIterator *iter), (iter))
CATALOG_WRAPPER_RET(bool, catalog_iter_s_index_next, iter_s_index_next, (SourceIndexIterator *iter), (iter))
CATALOG_WRAPPER_RET(bool, catalog_iter_s_index_finish, iter_s_index_finish, (SourceIndexIterator *iter), (iter))
CATALOG_WRAPPER_RET(bool, catalog_s_index_fetch, s_index_fetch, (SQLiteQuery *query), (query))
CATALOG_WRAPPER_RET(bool, catalog_add_s_seq, add_s_seq, (DatabaseCatalog *catalog, SourceSequence *index), (catalog, index))
CATALOG_WRAPPER_RET(bool, catalog_update_sequence_values, update_sequence_values, (DatabaseCatalog *catalog, SourceSequence *seq), (catalog, seq))
CATALOG_WRAPPER_RET(bool, catalog_update_s_table_relpages, update_s_table_relpages, (DatabaseCatalog *catalog, SourceTable *sourceTable), (catalog, sourceTable))
CATALOG_WRAPPER_RET(bool, catalog_iter_s_seq, iter_s_seq, (DatabaseCatalog *catalog,
						void *context,
						SourceSequenceIterFun *callback), (catalog, context, callback))
CATALOG_WRAPPER_RET(bool, catalog_lookup_s_seq_by_name, lookup_s_seq_by_name, (DatabaseCatalog *catalog,
								  const char *nspname,
								  const char *relname,
								  SourceSequence *seq), (catalog, nspname, relname, seq))
CATALOG_WRAPPER_RET(bool, catalog_iter_s_seq_init, iter_s_seq_init, (SourceSeqIterator *iter), (iter))
CATALOG_WRAPPER_RET(bool, catalog_iter_s_seq_next, iter_s_seq_next, (SourceSeqIterator *iter), (iter))
CATALOG_WRAPPER_RET(bool, catalog_iter_s_seq_finish, iter_s_seq_finish, (SourceSeqIterator *iter), (iter))
CATALOG_WRAPPER_RET(bool, catalog_s_seq_fetch, s_seq_fetch, (SQLiteQuery *query), (query))
CATALOG_WRAPPER_RET(bool, catalog_prepare_filter, prepare_filter, (DatabaseCatalog *catalog,
							bool skipExtensions,
							bool skipCollations), (catalog, skipExtensions, skipCollations))
CATALOG_WRAPPER_RET(bool, catalog_lookup_filter_by_oid, lookup_filter_by_oid, (DatabaseCatalog *catalog,
								  CatalogFilter *result,
								  uint32_t oid), (catalog, result, oid))
CATALOG_WRAPPER_RET(bool, catalog_lookup_filter_by_rlname, lookup_filter_by_rlname, (DatabaseCatalog *catalog,
									 CatalogFilter *result,
									 const char *restoreListName), (catalog, result, restoreListName))
CATALOG_WRAPPER_RET(bool, catalog_filter_fetch, filter_fetch, (SQLiteQuery *query), (query))
CATALOG_WRAPPER_RET(bool, catalog_add_s_database, add_s_database, (DatabaseCatalog *catalog, SourceDatabase *dat), (catalog, dat))
CATALOG_WRAPPER_RET(bool, catalog_add_s_database_properties, add_s_database_properties, (DatabaseCatalog *catalog,
									   SourceProperty *guc), (catalog, guc))
CATALOG_WRAPPER_RET(bool, catalog_iter_s_database, iter_s_database, (DatabaseCatalog *catalog,
							 void *context,
							 SourceDatabaseIterFun *callback), (catalog, context, callback))
CATALOG_WRAPPER_RET(bool, catalog_iter_s_database_init, iter_s_database_init, (SourceDatabaseIterator *iter), (iter))
CATALOG_WRAPPER_RET(bool, catalog_iter_s_database_next, iter_s_database_next, (SourceDatabaseIterator *iter), (iter))
CATALOG_WRAPPER_RET(bool, catalog_iter_s_database_finish, iter_s_database_finish, (SourceDatabaseIterator *iter), (iter))
CATALOG_WRAPPER_RET(bool, catalog_s_database_fetch, s_database_fetch, (SQLiteQuery *query), (query))
CATALOG_WRAPPER_RET(bool, catalog_iter_s_database_guc, iter_s_database_guc, (DatabaseCatalog *catalog,
								 const char *dbname,
								 void *context,
								 SourcePropertyIterFun *callback), (catalog, dbname, context, callback))
CATALOG_WRAPPER_RET(bool, catalog_iter_s_database_guc_init, iter_s_database_guc_init, (SourcePropertyIterator *iter), (iter))
CATALOG_WRAPPER_RET(bool, catalog_iter_s_database_guc_next, iter_s_database_guc_next, (SourcePropertyIterator *iter), (iter))
CATALOG_WRAPPER_RET(bool, catalog_iter_s_database_guc_finish, iter_s_database_guc_finish, (SourcePropertyIterator *iter), (iter))
CATALOG_WRAPPER_RET(bool, catalog_s_database_guc_fetch, s_database_guc_fetch, (SQLiteQuery *query), (query))
CATALOG_WRAPPER_RET(bool, catalog_add_s_namespace, add_s_namespace, (DatabaseCatalog * catalog, SourceSchema *namespace), (catalog, namespace))
CATALOG_WRAPPER_RET(bool, catalog_lookup_s_namespace_by_oid, lookup_s_namespace_by_oid, (DatabaseCatalog *catalog,
									   uint32_t oid,
									   SourceSchema *result), (catalog, oid, result))
CATALOG_WRAPPER_RET(bool, catalog_lookup_s_namespace_by_nspname, lookup_s_namespace_by_nspname, (DatabaseCatalog *catalog,
										   const char *nspname,
										   SourceSchema *result), (catalog, nspname, result))
CATALOG_WRAPPER_RET(bool, catalog_s_namespace_fetch, s_namespace_fetch, (SQLiteQuery *query), (query))
CATALOG_WRAPPER_RET(bool, catalog_add_s_role, add_s_role, (DatabaseCatalog *catalog, SourceRole *role), (catalog, role))
CATALOG_WRAPPER_RET(bool, catalog_lookup_s_role_by_name, lookup_s_role_by_name, (DatabaseCatalog *catalog,
								   const char *rolname,
								   SourceRole *role), (catalog, rolname, role))
CATALOG_WRAPPER_RET(bool, catalog_s_role_fetch, s_role_fetch, (SQLiteQuery *query), (query))
CATALOG_WRAPPER_RET(bool, catalog_add_s_extension, add_s_extension, (DatabaseCatalog *catalog,
							 SourceExtension *extension), (catalog, extension))
CATALOG_WRAPPER_RET(bool, catalog_add_s_extension_config, add_s_extension_config, (DatabaseCatalog *catalog,
									SourceExtensionConfig *config), (catalog, config))
CATALOG_WRAPPER_RET(bool, catalog_iter_s_extension, iter_s_extension, (DatabaseCatalog *catalog,
							  void *context,
							  SourceExtensionIterFun *callback), (catalog, context, callback))
CATALOG_WRAPPER_RET(bool, catalog_iter_s_extension_init, iter_s_extension_init, (SourceExtensionIterator *iter), (iter))
CATALOG_WRAPPER_RET(bool, catalog_iter_s_extension_next, iter_s_extension_next, (SourceExtensionIterator *iter), (iter))
CATALOG_WRAPPER_RET(bool, catalog_s_extension_fetch, s_extension_fetch, (SQLiteQuery *query), (query))
CATALOG_WRAPPER_RET(bool, catalog_iter_s_extension_finish, iter_s_extension_finish, (SourceExtensionIterator *iter), (iter))
CATALOG_WRAPPER_RET(bool, catalog_s_ext_fetch_extconfig, s_ext_fetch_extconfig, (DatabaseCatalog *catalog, SourceExtension *ext), (catalog, ext))
CATALOG_WRAPPER_RET(bool, catalog_iter_s_ext_extconfig_init, iter_s_ext_extconfig_init, (SourceExtConfigIterator *iter), (iter))
CATALOG_WRAPPER_RET(bool, catalog_iter_s_ext_extconfig_next, iter_s_ext_extconfig_next, (SourceExtConfigIterator *iter), (iter))
CATALOG_WRAPPER_RET(bool, catalog_iter_s_ext_extconfig_finish, iter_s_ext_extconfig_finish, (SourceExtConfigIterator *iter), (iter))
CATALOG_WRAPPER_RET(bool, catalog_s_ext_extconfig_fetch, s_ext_extconfig_fetch, (SQLiteQuery *query), (query))
CATALOG_WRAPPER_RET(bool, catalog_add_s_coll, add_s_coll, (DatabaseCatalog *catalog, SourceCollation *coll), (catalog, coll))
CATALOG_WRAPPER_RET(bool, catalog_iter_s_coll, iter_s_coll, (DatabaseCatalog *catalog,
						 void *context,
						 SourceCollationIterFun *callback), (catalog, context, callback))
CATALOG_WRAPPER_RET(bool, catalog_iter_s_coll_init, iter_s_coll_init, (SourceCollationIterator *iter), (iter))
CATALOG_WRAPPER_RET(bool, catalog_iter_s_coll_next, iter_s_coll_next, (SourceCollationIterator *iter), (iter))
CATALOG_WRAPPER_RET(bool, catalog_iter_s_coll_finish, iter_s_coll_finish, (SourceCollationIterator *iter), (iter))
CATALOG_WRAPPER_RET(bool, catalog_s_coll_fetch, s_coll_fetch, (SQLiteQuery *query), (query))
CATALOG_WRAPPER_RET(bool, catalog_add_s_depend, add_s_depend, (DatabaseCatalog *catalog, SourceDepend *depend), (catalog, depend))
CATALOG_WRAPPER_RET(bool, catalog_iter_s_depend, iter_s_depend, (DatabaseCatalog *catalog,
						   void *context,
						   SourceDependIterFun *callback), (catalog, context, callback))
CATALOG_WRAPPER_RET(bool, catalog_iter_s_depend_init, iter_s_depend_init, (SourceDependIterator *iter), (iter))
CATALOG_WRAPPER_RET(bool, catalog_iter_s_depend_next, iter_s_depend_next, (SourceDependIterator *iter), (iter))
CATALOG_WRAPPER_RET(bool, catalog_iter_s_depend_finish, iter_s_depend_finish, (SourceDependIterator *iter), (iter))
CATALOG_WRAPPER_RET(bool, catalog_s_depend_fetch, s_depend_fetch, (SQLiteQuery *query), (query))
CATALOG_WRAPPER_RET(bool, catalog_upsert_process_info, upsert_process_info, (DatabaseCatalog *catalog, ProcessInfo *ps), (catalog, ps))
CATALOG_WRAPPER_RET(bool, catalog_delete_process, delete_process, (DatabaseCatalog *catalog, pid_t pid), (catalog, pid))
CATALOG_WRAPPER_RET(bool, catalog_iter_s_table_in_copy, iter_s_table_in_copy, (DatabaseCatalog *catalog,
								  void *context,
								  SourceTableIterFun *callback), (catalog, context, callback))
CATALOG_WRAPPER_RET(bool, catalog_iter_s_table_in_copy_init, iter_s_table_in_copy_init, (SourceTableIterator *iter), (iter))
CATALOG_WRAPPER_RET(bool, catalog_iter_s_index_in_progress, iter_s_index_in_progress, (DatabaseCatalog *catalog,
									  void *context,
									  SourceIndexIterFun *callback), (catalog, context, callback))
CATALOG_WRAPPER_RET(bool, catalog_iter_s_index_in_progress_init, iter_s_index_in_progress_init, (SourceIndexIterator *iter), (iter))
CATALOG_WRAPPER_RET(bool, catalog_count_summary_done, count_summary_done, (DatabaseCatalog *catalog,
								CatalogProgressCount *count), (catalog, count))
CATALOG_WRAPPER_RET(bool, catalog_count_summary_done_fetch, count_summary_done_fetch, (SQLiteQuery *query), (query))
CATALOG_WRAPPER_RET(bool, catalog_add_timeline_history, add_timeline_history, (DatabaseCatalog *catalog,
								  TimelineHistoryEntry *entry), (catalog, entry))
CATALOG_WRAPPER_RET(bool, catalog_lookup_timeline_history, lookup_timeline_history, (DatabaseCatalog *catalog,
									 int tli,
									 TimelineHistoryEntry *entry), (catalog, tli, entry))
CATALOG_WRAPPER_RET(bool, catalog_timeline_history_fetch, timeline_history_fetch, (SQLiteQuery *query), (query))
CATALOG_WRAPPER_RET(bool, catalog_execute, execute, (DatabaseCatalog *catalog, char *sql), (catalog, sql))
CATALOG_WRAPPER_RET(bool, catalog_sql_prepare, sql_prepare, (sqlite3 *db, const char *sql, SQLiteQuery *query), (db, sql, query))
CATALOG_WRAPPER_RET(bool, catalog_sql_bind, sql_bind, (SQLiteQuery *query, BindParam *params, int count), (query, params, count))
CATALOG_WRAPPER_RET(bool, catalog_sql_execute, sql_execute, (SQLiteQuery *query), (query))
CATALOG_WRAPPER_RET(bool, catalog_sql_execute_once, sql_execute_once, (SQLiteQuery *query), (query))
CATALOG_WRAPPER_RET(bool, catalog_sql_finalize, sql_finalize, (SQLiteQuery *query), (query))
CATALOG_WRAPPER_RET(int, catalog_sql_step, sql_step, (SQLiteQuery *query), (query))
CATALOG_WRAPPER_RET(bool, catalog_bind_parameters, bind_parameters, (sqlite3 *db,
							 sqlite3_stmt *ppStmt,
							 BindParam *params,
							 int count), (db, ppStmt, params, count))
