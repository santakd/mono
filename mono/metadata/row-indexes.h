
#ifndef __MONO_METADATA_ROW_INDEXES_H__
#define __MONO_METADATA_ROW_INDEXES_H__

/*
 * The last entry in the enum is used to give the number
 * of columns in the row.
 */

enum {
	MONO_ASSEMBLY_HASH_ALG,
	MONO_ASSEMBLY_MAJOR_VERSION,
	MONO_ASSEMBLY_MINOR_VERSION,
	MONO_ASSEMBLY_BUILD_NUMBER,
	MONO_ASSEMBLY_REV_NUMBER,
	MONO_ASSEMBLY_FLAGS,
	MONO_ASSEMBLY_PUBLIC_KEY,
	MONO_ASSEMBLY_NAME,
	MONO_ASSEMBLY_CULTURE,
	MONO_ASSEMBLY_SIZE
};

enum {
	MONO_ASSEMBLYOS_PLATFORM,
	MONO_ASSEMBLYOS_MAJOR_VERSION,
	MONO_ASSEMBLYOS_MINOR_VERSION,
	MONO_ASSEMBLYOS_SIZE
};

enum {
	MONO_ASSEMBLY_PROCESSOR,
	MONO_ASSEMBLY_PROCESSOR_SIZE
};

enum {
	MONO_ASSEMBLYREF_MAJOR_VERSION,
	MONO_ASSEMBLYREF_MINOR_VERSION,
	MONO_ASSEMBLYREF_BUILD_NUMBER,
	MONO_ASSEMBLYREF_REV_NUMBER,
	MONO_ASSEMBLYREF_FLAGS,
	MONO_ASSEMBLYREF_PUBLIC_KEY,
	MONO_ASSEMBLYREF_NAME,
	MONO_ASSEMBLYREF_CULTURE,
	MONO_ASSEMBLYREF_HASH_VALUE,
	MONO_ASSEMBLYREF_SIZE
};

enum {
	MONO_ASSEMBLYREFOS_PLATFORM,
	MONO_ASSEMBLYREFOS_MAJOR_VERSION,
	MONO_ASSEMBLYREFOS_MINOR_VERSION,
	MONO_ASSEMBLYREFOS_ASSEMBLYREF,
	MONO_ASSEMBLYREFOS_SIZE
};

enum {
	MONO_ASSEMBLYREFPROC_PROCESSOR,
	MONO_ASSEMBLYREFPROC_ASSEMBLYREF,
	MONO_ASSEMBLYREFPROC_SIZE
};

enum {
	MONO_CLASS_LAYOUT_PACKING_SIZE,
	MONO_CLASS_LAYOUT_CLASS_SIZE,
	MONO_CLASS_LAYOUT_PARENT,
	MONO_CLASS_LAYOUT_SIZE
};

enum {
	MONO_CONSTANT_TYPE,
	MONO_CONSTANT_PADDING,
	MONO_CONSTANT_PARENT,
	MONO_CONSTANT_VALUE,
	MONO_CONSTANT_SIZE
};

enum {
	MONO_CUSTOM_ATTR_PARENT,
	MONO_CUSTOM_ATTR_TYPE,
	MONO_CUSTOM_ATTR_VALUE,
	MONO_CUSTOM_ATTR_SIZE
};

enum {
	MONO_DECL_SECURITY_ACTION,
	MONO_DECL_SECURITY_PARENT,
	MONO_DECL_SECURITY_PERMISSIONSET,
	MONO_DECL_SECURITY_SIZE
};

enum {
	MONO_EVENT_MAP_PARENT,
	MONO_EVENT_MAP_EVENTLIST,
	MONO_EVENT_MAP_SIZE
};

enum {
	MONO_EVENT_FLAGS,
	MONO_EVENT_NAME,
	MONO_EVENT_TYPE,
	MONO_EVENT_SIZE
};

enum {
	MONO_EXP_TYPE_FLAGS,
	MONO_EXP_TYPE_TYPEDEF,
	MONO_EXP_TYPE_NAME,
	MONO_EXP_TYPE_NAMESPACE,
	MONO_EXP_TYPE_IMPLEMENTATION,
	MONO_EXP_TYPE_SIZE
};

enum {
	MONO_FIELD_FLAGS,
	MONO_FIELD_NAME,
	MONO_FIELD_SIGNATURE,
	MONO_FIELD_SIZE
};

enum {
	MONO_FIELD_LAYOUT_OFFSET,
	MONO_FIELD_LAYOUT_FIELD,
	MONO_FIELD_LAYOUT_SIZE
};

enum {
	MONO_FIELD_MARSHAL_PARENT,
	MONO_FIELD_MARSHAL_NATIVE_TYPE,
	MONO_FIELD_MARSHAL_SIZE
};

enum {
	MONO_FIELD_RVA_RVA,
	MONO_FIELD_RVA_FIELD,
	MONO_FIELD_RVA_SIZE
};

enum {
	MONO_FILE_FLAGS,
	MONO_FILE_NAME,
	MONO_FILE_HASH_VALUE,
	MONO_FILE_SIZE
};

enum {
	MONO_IMPLMAP_FLAGS,
	MONO_IMPLMAP_MEMBER,
	MONO_IMPLMAP_NAME,
	MONO_IMPLMAP_SCOPE,
	MONO_IMPLMAP_SIZE
};

enum {
	MONO_INTERFACEIMPL_CLASS,
	MONO_INTERFACEIMPL_INTERFACE,
	MONO_INTERFACEIMPL_SIZE
};

enum {
	MONO_MANIFEST_OFFSET,
	MONO_MANIFEST_FLAGS,
	MONO_MANIFEST_NAME,
	MONO_MANIFEST_IMPLEMENTATION,
	MONO_MANIFEST_SIZE
};

enum {
	MONO_MEMBERREF_CLASS,
	MONO_MEMBERREF_NAME,
	MONO_MEMBERREF_SIGNATURE,
	MONO_MEMBERREF_SIZE
};

enum {
	MONO_METHOD_RVA,
	MONO_METHOD_IMPLFALGS,
	MONO_METHOD_FLAGS,
	MONO_METHOD_NAME,
	MONO_METHOD_SIGNATURE,
	MONO_METHOD_PARAMLIST,
	MONO_METHOD_SIZE
};

enum {
	MONO_MTHODIMPL_CLASS,
	MONO_MTHODIMPL_BODY,
	MONO_MTHODIMPL_DECLARATION,
	MONO_MTHODIMPL_SIZE
};

enum {
	MONO_METHOD_SEMA_SEMANTICS,
	MONO_METHOD_SEMA_METHOD,
	MONO_METHOD_SEMA_ASSOCIATION,
	MONO_METHOD_SEMA_SIZE
};

enum {
	MONO_MODULE_GENERATION,
	MONO_MODULE_NAME,
	MONO_MODULE_MVID,
	MONO_MODULE_ENC,
	MONO_MODULE_ENCBASE,
	MONO_MODULE_SIZE
};

enum {
	MONO_MODULEREF_NAME,
	MONO_MODULEREF_SIZE
};

enum {
	MONO_NESTED_CLASS_NESTED,
	MONO_NESTED_CLASS_ENCLOSING,
	MONO_NESTED_CLASS_SIZE
};

enum {
	MONO_PARAM_FLAGS,
	MONO_PARAM_SEQUENCE,
	MONO_PARAM_NAME,
	MONO_PARAM_SIZE
};

enum {
	MONO_PROPERTY_FLAGS,
	MONO_PROPERTY_NAME,
	MONO_PROPERTY_TYPE,
	MONO_PROPERTY_SIZE
};

enum {
	MONO_PROPERTY_MAP_PARENT,
	MONO_PROPERTY_MAP_PROPERTY_LIST,
	MONO_PROPERTY_MAP_SIZE
};

enum {
	MONO_STAND_ALONG_SIGNATURE,
	MONO_STAND_ALONG_SIGNATURE_SIZE
};

enum {
	MONO_TYPEDEF_FLAGS,
	MONO_TYPEDEF_NAME,
	MONO_TYPEDEF_NAMESPACE,
	MONO_TYPEDEF_EXTENDS,
	MONO_TYPEDEF_FIELD_LIST,
	MONO_TYPEDEF_METHOD_LIST,
	MONO_TYPEDEF_SIZE
};

enum {
	MONO_TYPEREF_SCOPE,
	MONO_TYPEREF_NAME,
	MONO_TYPEREF_NAMESPACE,
	MONO_TYPEREF_SIZE
};

enum {
	MONO_TYPESPEC_SIGNATURE,
	MONO_TYPESPEC_SIZE
};

/*
 * Coded Tokens
 * The _BITS entry is for the bits used in the token.
 * The _MASK entry is for mask the index out.
 */

enum {
	TYPEDEFORREF_TYPEDEF,
	TYPEDEFORREF_PARAMDEF,
	TYPEDEFORREF_TYPESPEC,
	TYPEDEFORREF_BITS = 2,
	TYPEDEFORREF_MASK = 3
};

enum {
	HASCOSTANT_FIEDDEF,
	HASCOSTANT_FIEDREF, /* typo in spec? LAMESPEC */
	HASCOSTANT_PROPERTY,
	HASCOSTANT_BITS = 2,
	HASCOSTANT_MASK = 3
};

enum {
	CUSTOM_ATTR_METHODDEF,
	CUSTOM_ATTR_FIELDDEF,
	CUSTOM_ATTR_TYPEREF,
	CUSTOM_ATTR_TYPEDEF,
	CUSTOM_ATTR_PARAMDEF,
	CUSTOM_ATTR_INTERFACE,
	CUSTOM_ATTR_MEMBERREF,
	CUSTOM_ATTR_MODULE,
	CUSTOM_ATTR_PERMISSION,
	CUSTOM_ATTR_PROPERTY,
	CUSTOM_ATTR_EVENT,
	CUSTOM_ATTR_SIGNATURE,
	CUSTOM_ATTR_MODULEREF,
	CUSTOM_ATTR_TYPESPEC,
	CUSTOM_ATTR_ASSEMBLY,
	CUSTOM_ATTR_ASSEMBLYREF,
	CUSTOM_ATTR_FILE,
	CUSTOM_ATTR_EXP_TYPE,
	CUSTOM_ATTR_MANIFEST,
	CUSTOM_ATTR_BITS = 5,
	CUSTOM_ATTR_MASK = 0x1F
};

enum {
	HAS_FIELD_MARSHAL_FIELDSREF,
	HAS_FIELD_MARSHAL_PARAMDEF,
	HAS_FIELD_MARSHAL_BITS = 1,
	HAS_FIELD_MARSHAL_MASK = 1
};

enum {
	HAS_DECL_SECURITY_TYPEDEF,
	HAS_DECL_SECURITY_METHODDEF,
	HAS_DECL_SECURITY_ASSEMBLY,
	HAS_DECL_SECURITY_BITS = 1,
	HAS_DECL_SECURITY_MASK = 1
};

enum {
	MEMBERREF_PARENT_TYPEDEF,
	MEMBERREF_PARENT_TYPEREF,
	MEMBERREF_PARENT_MODULEREF,
	MEMBERREF_PARENT_METHODDEF,
	MEMBERREF_PARENT_TYPESPEC,
	MEMBERREF_PARENT_BITS = 3,
	MEMBERREF_PARENT_MASK = 7
};

enum {
	HAS_SEMANTICS_EVENT,
	HAS_SEMANTICS_PROPERTY,
	HAS_SEMANTICS_BITS = 1,
	HAS_SEMANTICS_MASK = 1
};

enum {
	METHODDEFORREF_METHODDEF,
	METHODDEFORREF_METHODREF,
	METHODDEFORREF_BITS = 1,
	METHODDEFORREF_MASK = 1
};

enum {
	MEMBERFORWD_FIELDDEF,
	MEMBERFORWD_METHODDEF,
	MEMBERFORWD_BITS = 1,
	MEMBERFORWD_MASK = 1
};

enum {
	IMPLEMENTATION_FILE,
	IMPLEMENTATION_ASSEMBLYREF,
	IMPLEMENTATION_EXP_TYPE,
	IMPLEMENTATION_BITS = 2,
	IMPLEMENTATION_MASK = 3
};

enum {
	CUSTOM_ATTR_TYPE_TYPEREF,
	CUSTOM_ATTR_TYPE_TYPEDEF,
	CUSTOM_ATTR_TYPE_METHODDEF,
	CUSTOM_ATTR_TYPE_MEMBERREF,
	CUSTOM_ATTR_TYPE_STRING,
	CUSTOM_ATTR_TYPE_BITS = 3,
	CUSTOM_ATTR_TYPE_MASK = 7
};

enum {
	RESOLTION_SCOPE_MODULE,
	RESOLTION_SCOPE_MODULEREF,
	RESOLTION_SCOPE_ASSEMBLYREF, /* LAMESPEC claims 3 */
	RESOLTION_SCOPE_TYPEREF,     /* LAMESPEC claims 4 */
	RESOLTION_SCOPE_BITS = 2,    /* LAMESPEC claims 3 */
	RESOLTION_SCOPE_MASK = 3     /* LAMESPEC claims 7 */
};

#endif /* __MONO_METADATA_ROW_INDEXES_H__ */

