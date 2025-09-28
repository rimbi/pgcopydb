/*
 * Dispatch layer for catalog operations, allowing alternative backends
 * (such as in-memory simulators) to replace the default SQLite
 * implementation for testing or custom deployments.
 */

#include "catalog.h"

extern const CatalogOps catalog_sqlite_ops;

static const CatalogOps *active_catalog_ops = NULL;

static const CatalogOps *
catalog_resolve_ops(void)
{
	if (active_catalog_ops == NULL)
	{
		active_catalog_ops = &catalog_sqlite_ops;
	}

	return active_catalog_ops;
}


void
catalog_register_ops(const CatalogOps *ops)
{
	active_catalog_ops = (ops != NULL) ? ops : &catalog_sqlite_ops;
}


const CatalogOps *
catalog_get_ops(void)
{
	return catalog_resolve_ops();
}


#define CATALOG_WRAPPER_RET(ret, public_name, field, signature, call_args) \
	ret \
	public_name signature \
	{ \
		const CatalogOps *ops = catalog_resolve_ops(); \
		return ops->field call_args; \
	}

#define CATALOG_WRAPPER_VOID(ret, public_name, field, signature, call_args) \
	void \
	public_name signature \
	{ \
		const CatalogOps *ops = catalog_resolve_ops(); \
		ops->field call_args; \
	}

#include "catalog_ops_wrappers.inc"

#undef CATALOG_WRAPPER_RET
#undef CATALOG_WRAPPER_VOID
