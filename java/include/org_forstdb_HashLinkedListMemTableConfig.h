/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_forstdb_HashLinkedListMemTableConfig */

#ifndef _Included_org_forstdb_HashLinkedListMemTableConfig
#define _Included_org_forstdb_HashLinkedListMemTableConfig
#ifdef __cplusplus
extern "C" {
#endif
#undef org_forstdb_HashLinkedListMemTableConfig_DEFAULT_BUCKET_COUNT
#define org_forstdb_HashLinkedListMemTableConfig_DEFAULT_BUCKET_COUNT 50000LL
#undef org_forstdb_HashLinkedListMemTableConfig_DEFAULT_HUGE_PAGE_TLB_SIZE
#define org_forstdb_HashLinkedListMemTableConfig_DEFAULT_HUGE_PAGE_TLB_SIZE 0LL
#undef org_forstdb_HashLinkedListMemTableConfig_DEFAULT_BUCKET_ENTRIES_LOG_THRES
#define org_forstdb_HashLinkedListMemTableConfig_DEFAULT_BUCKET_ENTRIES_LOG_THRES 4096L
#undef org_forstdb_HashLinkedListMemTableConfig_DEFAULT_IF_LOG_BUCKET_DIST_WHEN_FLUSH
#define org_forstdb_HashLinkedListMemTableConfig_DEFAULT_IF_LOG_BUCKET_DIST_WHEN_FLUSH 1L
#undef org_forstdb_HashLinkedListMemTableConfig_DEFAUL_THRESHOLD_USE_SKIPLIST
#define org_forstdb_HashLinkedListMemTableConfig_DEFAUL_THRESHOLD_USE_SKIPLIST 256L
/*
 * Class:     org_forstdb_HashLinkedListMemTableConfig
 * Method:    newMemTableFactoryHandle
 * Signature: (JJIZI)J
 */
JNIEXPORT jlong JNICALL Java_org_forstdb_HashLinkedListMemTableConfig_newMemTableFactoryHandle
  (JNIEnv *, jobject, jlong, jlong, jint, jboolean, jint);

#ifdef __cplusplus
}
#endif
#endif
