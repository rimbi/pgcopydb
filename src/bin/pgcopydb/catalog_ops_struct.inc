bool (*open)(DatabaseCatalog *catalog);
bool (*init)(DatabaseCatalog *catalog);
bool (*create_semaphore)(DatabaseCatalog *catalog);
bool (*attach)(DatabaseCatalog *a, DatabaseCatalog *b, const char *name);
bool (*close)(DatabaseCatalog *catalog);
bool (*create_schema)(DatabaseCatalog *catalog);
bool (*drop_schema)(DatabaseCatalog *catalog);
bool (*set_wal_mode)(DatabaseCatalog *catalog);
bool (*begin)(DatabaseCatalog *catalog, bool immediate);
bool (*commit)(DatabaseCatalog *catalog);
bool (*register_setup)(DatabaseCatalog *catalog,
							const char *source_pg_uri,
							const char *target_pg_uri,
							const char *snapshot,
							uint64_t splitTablesLargerThanBytes,
							int splitMaxParts,
							const char *filters);
bool (*setup_replication)(DatabaseCatalog *catalog,
							   const char *snapshot,
							   const char *plugin,
							   const char *slotName);
bool (*setup)(DatabaseCatalog *catalog);
bool (*setup_fetch)(SQLiteQuery *query);
void (*start_timing)(TopLevelTiming *timing);
void (*stop_timing)(TopLevelTiming *timing);
bool (*register_section)(DatabaseCatalog *catalog, TopLevelTiming *timing);
bool (*section_state)(DatabaseCatalog *catalog, CatalogSection *section);
bool (*section_fetch)(SQLiteQuery *query);
bool (*total_duration)(DatabaseCatalog *catalog);
bool (*lookup_s_extension_by_extname)(DatabaseCatalog *catalog, const
										   char *extensionName,
										   SourceExtension *extension);
bool (*extension_fetch)(SQLiteQuery *query);
bool (*stats)(DatabaseCatalog *catalog, CatalogStats *stats);
bool (*s_table_stats)(DatabaseCatalog *catalog, CatalogTableStats *stats);
bool (*s_table_stats_fetch)(SQLiteQuery *query);
bool (*count_objects)(DatabaseCatalog *catalog, CatalogCounts *count);
bool (*count_fetch)(SQLiteQuery *query);
bool (*add_s_matview)(DatabaseCatalog *catalog, SourceTable *table);
bool (*lookup_s_matview_by_oid)(DatabaseCatalog *catalog,
									 CatalogMatView *result,
									 uint32_t oid);
bool (*s_matview_fetch)(SQLiteQuery *query);
bool (*add_s_table)(DatabaseCatalog *catalog, SourceTable *table);
bool (*add_attributes)(DatabaseCatalog *catalog, SourceTable *table);
bool (*add_s_table_part)(DatabaseCatalog *catalog, SourceTable *table);
bool (*add_s_table_chksum)(DatabaseCatalog *catalog,
								SourceTable *table,
								TableChecksum *srcChk,
								TableChecksum *dstChk);
bool (*add_s_table_size)(DatabaseCatalog *catalog,
							  SourceTableSize *tableSize);
bool (*delete_s_table_chksum_all)(DatabaseCatalog *catalog);
bool (*iter_s_table)(DatabaseCatalog *catalog,
						  void *context,
						  SourceTableIterFun *callback);
bool (*iter_s_table_nopk)(DatabaseCatalog *catalog,
							   void *context,
							   SourceTableIterFun *callback);
bool (*iter_s_table_generated_columns)(DatabaseCatalog *catalog,
											void *context,
											SourceTableIterFun *callback);
bool (*iter_s_table_init)(SourceTableIterator *iter);
bool (*iter_s_table_nopk_init)(SourceTableIterator *iter);
bool (*iter_s_table_generated_columns_init)(SourceTableIterator *iter);
bool (*iter_s_table_next)(SourceTableIterator *iter);
bool (*iter_s_table_finish)(SourceTableIterator *iter);
bool (*lookup_s_table)(DatabaseCatalog *catalog,
							uint32_t oid,
							int partNumber,
							SourceTable *table);
bool (*lookup_s_table_by_name)(DatabaseCatalog *catalog,
									const char *nspname,
									const char *relname,
									SourceTable *table);
bool (*s_table_fetch)(SQLiteQuery *query);
bool (*iter_s_table_parts)(DatabaseCatalog *catalog,
								uint32_t oid,
								void *context,
								SourceTablePartsIterFun *callback);
bool (*iter_s_table_part_init)(SourceTablePartsIterator *iter);
bool (*iter_s_table_part_next)(SourceTablePartsIterator *iter);
bool (*iter_s_table_part_finish)(SourceTablePartsIterator *iter);
bool (*s_table_attrlist)(DatabaseCatalog *catalog, SourceTable *table);
bool (*s_table_part_fetch)(SQLiteQuery *query);
bool (*s_table_fetch_attrlist)(SQLiteQuery *query);
bool (*s_table_fetch_attrs)(DatabaseCatalog *catalog,
								 SourceTable *table);
bool (*iter_s_table_attrs_init)(SourceTableAttrsIterator *iter);
bool (*iter_s_table_attrs_next)(SourceTableAttrsIterator *iter);
bool (*iter_s_table_attrs_finish)(SourceTableAttrsIterator *iter);
bool (*s_table_attrs_fetch)(SQLiteQuery *query);
bool (*lookup_s_attr_by_name)(DatabaseCatalog *catalog,
								   uint32_t reloid,
								   const char *attname,
								   SourceTableAttribute *attribute);
bool (*s_attr_fetch)(SQLiteQuery *query);
bool (*add_s_index)(DatabaseCatalog *catalog, SourceIndex *index);
bool (*add_s_constraint)(DatabaseCatalog *catalog, SourceIndex *index);
bool (*lookup_s_index)(DatabaseCatalog *catalog,
							uint32_t oid,
							SourceIndex *index);
bool (*lookup_s_index_by_name)(DatabaseCatalog *catalog,
									const char *nspname,
									const char *relname,
									SourceIndex *index);
bool (*delete_s_index_all)(DatabaseCatalog *catalog);
bool (*iter_s_index)(DatabaseCatalog *catalog,
						  void *context,
						  SourceIndexIterFun *callback);
bool (*iter_s_index_table)(DatabaseCatalog *catalog,
								const char *nspname,
								const char *relname,
								void *context,
								SourceIndexIterFun *callback);
bool (*s_table_count_indexes)(DatabaseCatalog *catalog,
								   SourceTable *table);
bool (*s_table_count_indexes_fetch)(SQLiteQuery *query);
bool (*iter_s_index_init)(SourceIndexIterator *iter);
bool (*iter_s_index_table_init)(SourceIndexIterator *iter);
bool (*iter_s_index_next)(SourceIndexIterator *iter);
bool (*iter_s_index_finish)(SourceIndexIterator *iter);
bool (*s_index_fetch)(SQLiteQuery *query);
bool (*add_s_seq)(DatabaseCatalog *catalog, SourceSequence *index);
bool (*update_sequence_values)(DatabaseCatalog *catalog, SourceSequence *seq);
bool (*update_s_table_relpages)(DatabaseCatalog *catalog, SourceTable *sourceTable);
bool (*iter_s_seq)(DatabaseCatalog *catalog,
						void *context,
						SourceSequenceIterFun *callback);
bool (*lookup_s_seq_by_name)(DatabaseCatalog *catalog,
								  const char *nspname,
								  const char *relname,
								  SourceSequence *seq);
bool (*iter_s_seq_init)(SourceSeqIterator *iter);
bool (*iter_s_seq_next)(SourceSeqIterator *iter);
bool (*iter_s_seq_finish)(SourceSeqIterator *iter);
bool (*s_seq_fetch)(SQLiteQuery *query);
bool (*prepare_filter)(DatabaseCatalog *catalog,
							bool skipExtensions,
							bool skipCollations);
bool (*lookup_filter_by_oid)(DatabaseCatalog *catalog,
								  CatalogFilter *result,
								  uint32_t oid);
bool (*lookup_filter_by_rlname)(DatabaseCatalog *catalog,
									 CatalogFilter *result,
									 const char *restoreListName);
bool (*filter_fetch)(SQLiteQuery *query);
bool (*add_s_database)(DatabaseCatalog *catalog, SourceDatabase *dat);
bool (*add_s_database_properties)(DatabaseCatalog *catalog,
									   SourceProperty *guc);
bool (*iter_s_database)(DatabaseCatalog *catalog,
							 void *context,
							 SourceDatabaseIterFun *callback);
bool (*iter_s_database_init)(SourceDatabaseIterator *iter);
bool (*iter_s_database_next)(SourceDatabaseIterator *iter);
bool (*iter_s_database_finish)(SourceDatabaseIterator *iter);
bool (*s_database_fetch)(SQLiteQuery *query);
bool (*iter_s_database_guc)(DatabaseCatalog *catalog,
								 const char *dbname,
								 void *context,
								 SourcePropertyIterFun *callback);
bool (*iter_s_database_guc_init)(SourcePropertyIterator *iter);
bool (*iter_s_database_guc_next)(SourcePropertyIterator *iter);
bool (*iter_s_database_guc_finish)(SourcePropertyIterator *iter);
bool (*s_database_guc_fetch)(SQLiteQuery *query);
bool (*add_s_namespace)(DatabaseCatalog * catalog, SourceSchema *namespace);
bool (*lookup_s_namespace_by_oid)(DatabaseCatalog *catalog,
									   uint32_t oid,
									   SourceSchema *result);
bool (*lookup_s_namespace_by_nspname)(DatabaseCatalog *catalog,
										   const char *nspname,
										   SourceSchema *result);
bool (*s_namespace_fetch)(SQLiteQuery *query);
bool (*add_s_role)(DatabaseCatalog *catalog, SourceRole *role);
bool (*lookup_s_role_by_name)(DatabaseCatalog *catalog,
								   const char *rolname,
								   SourceRole *role);
bool (*s_role_fetch)(SQLiteQuery *query);
bool (*add_s_extension)(DatabaseCatalog *catalog,
							 SourceExtension *extension);
bool (*add_s_extension_config)(DatabaseCatalog *catalog,
									SourceExtensionConfig *config);
bool (*iter_s_extension)(DatabaseCatalog *catalog,
							  void *context,
							  SourceExtensionIterFun *callback);
bool (*iter_s_extension_init)(SourceExtensionIterator *iter);
bool (*iter_s_extension_next)(SourceExtensionIterator *iter);
bool (*s_extension_fetch)(SQLiteQuery *query);
bool (*iter_s_extension_finish)(SourceExtensionIterator *iter);
bool (*s_ext_fetch_extconfig)(DatabaseCatalog *catalog, SourceExtension *ext);
bool (*iter_s_ext_extconfig_init)(SourceExtConfigIterator *iter);
bool (*iter_s_ext_extconfig_next)(SourceExtConfigIterator *iter);
bool (*iter_s_ext_extconfig_finish)(SourceExtConfigIterator *iter);
bool (*s_ext_extconfig_fetch)(SQLiteQuery *query);
bool (*add_s_coll)(DatabaseCatalog *catalog, SourceCollation *coll);
bool (*iter_s_coll)(DatabaseCatalog *catalog,
						 void *context,
						 SourceCollationIterFun *callback);
bool (*iter_s_coll_init)(SourceCollationIterator *iter);
bool (*iter_s_coll_next)(SourceCollationIterator *iter);
bool (*iter_s_coll_finish)(SourceCollationIterator *iter);
bool (*s_coll_fetch)(SQLiteQuery *query);
bool (*add_s_depend)(DatabaseCatalog *catalog, SourceDepend *depend);
bool (*iter_s_depend)(DatabaseCatalog *catalog,
						   void *context,
						   SourceDependIterFun *callback);
bool (*iter_s_depend_init)(SourceDependIterator *iter);
bool (*iter_s_depend_next)(SourceDependIterator *iter);
bool (*iter_s_depend_finish)(SourceDependIterator *iter);
bool (*s_depend_fetch)(SQLiteQuery *query);
bool (*upsert_process_info)(DatabaseCatalog *catalog, ProcessInfo *ps);
bool (*delete_process)(DatabaseCatalog *catalog, pid_t pid);
bool (*iter_s_table_in_copy)(DatabaseCatalog *catalog,
								  void *context,
								  SourceTableIterFun *callback);
bool (*iter_s_table_in_copy_init)(SourceTableIterator *iter);
bool (*iter_s_index_in_progress)(DatabaseCatalog *catalog,
									  void *context,
									  SourceIndexIterFun *callback);
bool (*iter_s_index_in_progress_init)(SourceIndexIterator *iter);
bool (*count_summary_done)(DatabaseCatalog *catalog,
								CatalogProgressCount *count);
bool (*count_summary_done_fetch)(SQLiteQuery *query);
bool (*add_timeline_history)(DatabaseCatalog *catalog,
								  TimelineHistoryEntry *entry);
bool (*lookup_timeline_history)(DatabaseCatalog *catalog,
									 int tli,
									 TimelineHistoryEntry *entry);
bool (*timeline_history_fetch)(SQLiteQuery *query);
bool (*execute)(DatabaseCatalog *catalog, char *sql);
bool (*sql_prepare)(sqlite3 *db, const char *sql, SQLiteQuery *query);
bool (*sql_bind)(SQLiteQuery *query, BindParam *params, int count);
bool (*sql_execute)(SQLiteQuery *query);
bool (*sql_execute_once)(SQLiteQuery *query);
bool (*sql_finalize)(SQLiteQuery *query);
int (*sql_step)(SQLiteQuery *query);
bool (*bind_parameters)(sqlite3 *db,
							 sqlite3_stmt *ppStmt,
							 BindParam *params,
							 int count);
