/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_github_jodersky_flow_internal_NativeSerial */

#ifndef _Included_com_github_jodersky_flow_internal_NativeSerial
#define _Included_com_github_jodersky_flow_internal_NativeSerial
#ifdef __cplusplus
extern "C" {
#endif
#undef com_github_jodersky_flow_internal_NativeSerial_E_IO
#define com_github_jodersky_flow_internal_NativeSerial_E_IO -1L
#undef com_github_jodersky_flow_internal_NativeSerial_E_ACCESS_DENIED
#define com_github_jodersky_flow_internal_NativeSerial_E_ACCESS_DENIED -2L
#undef com_github_jodersky_flow_internal_NativeSerial_E_BUSY
#define com_github_jodersky_flow_internal_NativeSerial_E_BUSY -3L
#undef com_github_jodersky_flow_internal_NativeSerial_E_INVALID_SETTINGS
#define com_github_jodersky_flow_internal_NativeSerial_E_INVALID_SETTINGS -4L
#undef com_github_jodersky_flow_internal_NativeSerial_E_INTERRUPT
#define com_github_jodersky_flow_internal_NativeSerial_E_INTERRUPT -5L
#undef com_github_jodersky_flow_internal_NativeSerial_E_NO_PORT
#define com_github_jodersky_flow_internal_NativeSerial_E_NO_PORT -6L
#undef com_github_jodersky_flow_internal_NativeSerial_PARITY_NONE
#define com_github_jodersky_flow_internal_NativeSerial_PARITY_NONE 0L
#undef com_github_jodersky_flow_internal_NativeSerial_PARITY_ODD
#define com_github_jodersky_flow_internal_NativeSerial_PARITY_ODD 1L
#undef com_github_jodersky_flow_internal_NativeSerial_PARITY_EVEN
#define com_github_jodersky_flow_internal_NativeSerial_PARITY_EVEN 2L
/*
 * Class:     com_github_jodersky_flow_internal_NativeSerial
 * Method:    open
 * Signature: (Ljava/lang/String;IIZI[J)I
 */
JNIEXPORT jint JNICALL Java_com_github_jodersky_flow_internal_NativeSerial_open
  (JNIEnv *, jclass, jstring, jint, jint, jboolean, jint, jlongArray);

/*
 * Class:     com_github_jodersky_flow_internal_NativeSerial
 * Method:    read
 * Signature: (J[B)I
 */
JNIEXPORT jint JNICALL Java_com_github_jodersky_flow_internal_NativeSerial_read
  (JNIEnv *, jclass, jlong, jbyteArray);

/*
 * Class:     com_github_jodersky_flow_internal_NativeSerial
 * Method:    write
 * Signature: (J[B)I
 */
JNIEXPORT jint JNICALL Java_com_github_jodersky_flow_internal_NativeSerial_write
  (JNIEnv *, jclass, jlong, jbyteArray);

/*
 * Class:     com_github_jodersky_flow_internal_NativeSerial
 * Method:    interrupt
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_github_jodersky_flow_internal_NativeSerial_interrupt
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_github_jodersky_flow_internal_NativeSerial
 * Method:    close
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_github_jodersky_flow_internal_NativeSerial_close
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_github_jodersky_flow_internal_NativeSerial
 * Method:    debug
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_com_github_jodersky_flow_internal_NativeSerial_debug
  (JNIEnv *, jclass, jboolean);

#ifdef __cplusplus
}
#endif
#endif
