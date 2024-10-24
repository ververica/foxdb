/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_forstdb_PlainTableConfig */

#ifndef _Included_org_forstdb_PlainTableConfig
#define _Included_org_forstdb_PlainTableConfig
#ifdef __cplusplus
extern "C" {
#endif
#undef org_forstdb_PlainTableConfig_VARIABLE_LENGTH
#define org_forstdb_PlainTableConfig_VARIABLE_LENGTH 0L
#undef org_forstdb_PlainTableConfig_DEFAULT_BLOOM_BITS_PER_KEY
#define org_forstdb_PlainTableConfig_DEFAULT_BLOOM_BITS_PER_KEY 10L
#undef org_forstdb_PlainTableConfig_DEFAULT_HASH_TABLE_RATIO
#define org_forstdb_PlainTableConfig_DEFAULT_HASH_TABLE_RATIO 0.75
#undef org_forstdb_PlainTableConfig_DEFAULT_INDEX_SPARSENESS
#define org_forstdb_PlainTableConfig_DEFAULT_INDEX_SPARSENESS 16L
#undef org_forstdb_PlainTableConfig_DEFAULT_HUGE_TLB_SIZE
#define org_forstdb_PlainTableConfig_DEFAULT_HUGE_TLB_SIZE 0L
#undef org_forstdb_PlainTableConfig_DEFAULT_FULL_SCAN_MODE
#define org_forstdb_PlainTableConfig_DEFAULT_FULL_SCAN_MODE 0L
#undef org_forstdb_PlainTableConfig_DEFAULT_STORE_INDEX_IN_FILE
#define org_forstdb_PlainTableConfig_DEFAULT_STORE_INDEX_IN_FILE 0L
/*
 * Class:     org_forstdb_PlainTableConfig
 * Method:    newTableFactoryHandle
 * Signature: (IIDIIBZZ)J
 */
JNIEXPORT jlong JNICALL Java_org_forstdb_PlainTableConfig_newTableFactoryHandle
  (JNIEnv *, jobject, jint, jint, jdouble, jint, jint, jbyte, jboolean, jboolean);

#ifdef __cplusplus
}
#endif
#endif
