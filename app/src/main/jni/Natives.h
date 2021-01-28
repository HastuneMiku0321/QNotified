/* QNotified - An Xposed module for QQ/TIM
 * Copyright (C) 2019-2020 xenonhydride@gmail.com
 * https://github.com/ferredoxin/QNotified
 *
 * This software is free software: you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either
 * version 3 of the License, or (at your option) any later version.
 *
 * This software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this software.  If not, see
 * <https://www.gnu.org/licenses/>.
 */

/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class nil_nadph_qnotified_util_Natives */

#ifndef _Included_nil_nadph_qnotified_util_Natives
#define _Included_nil_nadph_qnotified_util_Natives
#ifdef __cplusplus
extern "C" {
#endif
#undef nil_nadph_qnotified_util_Natives_RTLD_LAZY
#define nil_nadph_qnotified_util_Natives_RTLD_LAZY 1L
#undef nil_nadph_qnotified_util_Natives_RTLD_NOW
#define nil_nadph_qnotified_util_Natives_RTLD_NOW 2L
#undef nil_nadph_qnotified_util_Natives_RTLD_BINDING_MASK
#define nil_nadph_qnotified_util_Natives_RTLD_BINDING_MASK 3L
#undef nil_nadph_qnotified_util_Natives_RTLD_NOLOAD
#define nil_nadph_qnotified_util_Natives_RTLD_NOLOAD 4L
#undef nil_nadph_qnotified_util_Natives_RTLD_DEEPBIND
#define nil_nadph_qnotified_util_Natives_RTLD_DEEPBIND 8L
#undef nil_nadph_qnotified_util_Natives_RTLD_GLOBAL
#define nil_nadph_qnotified_util_Natives_RTLD_GLOBAL 256L
#undef nil_nadph_qnotified_util_Natives_RTLD_LOCAL
#define nil_nadph_qnotified_util_Natives_RTLD_LOCAL 0L
#undef nil_nadph_qnotified_util_Natives_RTLD_NODELETE
#define nil_nadph_qnotified_util_Natives_RTLD_NODELETE 4096L
#undef nil_nadph_qnotified_util_Natives_PROT_READ
#define nil_nadph_qnotified_util_Natives_PROT_READ 1L
#undef nil_nadph_qnotified_util_Natives_PROT_WRITE
#define nil_nadph_qnotified_util_Natives_PROT_WRITE 2L
#undef nil_nadph_qnotified_util_Natives_PROT_EXEC
#define nil_nadph_qnotified_util_Natives_PROT_EXEC 4L
#undef nil_nadph_qnotified_util_Natives_PROT_NONE
#define nil_nadph_qnotified_util_Natives_PROT_NONE 0L
#undef nil_nadph_qnotified_util_Natives_PROT_GROWSDOWN
#define nil_nadph_qnotified_util_Natives_PROT_GROWSDOWN 16777216L
#undef nil_nadph_qnotified_util_Natives_PROT_GROWSUP
#define nil_nadph_qnotified_util_Natives_PROT_GROWSUP 33554432L
/*
 * Class:     nil_nadph_qnotified_util_Natives
 * Method:    mwrite
 * Signature: (JI[BI)V
 */
JNIEXPORT void JNICALL
Java_nil_nadph_qnotified_util_Natives_mwrite
(JNIEnv
*, jclass, jlong, jint, jbyteArray, jint);

/*
 * Class:     nil_nadph_qnotified_util_Natives
 * Method:    mread
 * Signature: (JI[BI)V
 */
JNIEXPORT void JNICALL
Java_nil_nadph_qnotified_util_Natives_mread
(JNIEnv
*, jclass, jlong, jint, jbyteArray, jint);

/*
 * Class:     nil_nadph_qnotified_util_Natives
 * Method:    malloc
 * Signature: (I)J
 */
JNIEXPORT jlong
JNICALL Java_nil_nadph_qnotified_util_Natives_malloc
        (JNIEnv * , jclass, jint);

/*
 * Class:     nil_nadph_qnotified_util_Natives
 * Method:    free
 * Signature: (J)V
 */
JNIEXPORT void JNICALL
Java_nil_nadph_qnotified_util_Natives_free
(JNIEnv
*, jclass, jlong);

/*
 * Class:     nil_nadph_qnotified_util_Natives
 * Method:    memcpy
 * Signature: (JJI)V
 */
JNIEXPORT void JNICALL
Java_nil_nadph_qnotified_util_Natives_memcpy
(JNIEnv
*, jclass, jlong, jlong, jint);

/*
 * Class:     nil_nadph_qnotified_util_Natives
 * Method:    memset
 * Signature: (JII)V
 */
JNIEXPORT void JNICALL
Java_nil_nadph_qnotified_util_Natives_memset
(JNIEnv
*, jclass, jlong, jint, jint);

/*
 * Class:     nil_nadph_qnotified_util_Natives
 * Method:    mprotect
 * Signature: (JII)I
 */
JNIEXPORT jint
JNICALL Java_nil_nadph_qnotified_util_Natives_mprotect
        (JNIEnv * , jclass, jlong, jint, jint);

/*
 * Class:     nil_nadph_qnotified_util_Natives
 * Method:    dlsym
 * Signature: (JLjava/lang/String;)J
 */
JNIEXPORT jlong
JNICALL Java_nil_nadph_qnotified_util_Natives_dlsym
        (JNIEnv * , jclass, jlong, jstring);

/*
 * Class:     nil_nadph_qnotified_util_Natives
 * Method:    dlopen
 * Signature: (Ljava/lang/String;I)J
 */
JNIEXPORT jlong
JNICALL Java_nil_nadph_qnotified_util_Natives_dlopen
        (JNIEnv * , jclass, jstring, jint);

/*
 * Class:     nil_nadph_qnotified_util_Natives
 * Method:    dlclose
 * Signature: (J)I
 */
JNIEXPORT jint
JNICALL Java_nil_nadph_qnotified_util_Natives_dlclose
        (JNIEnv * , jclass, jlong);

/*
 * Class:     nil_nadph_qnotified_util_Natives
 * Method:    dlerror
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring
JNICALL Java_nil_nadph_qnotified_util_Natives_dlerror
        (JNIEnv * , jclass);

/*
 * Class:     nil_nadph_qnotified_util_Natives
 * Method:    sizeofptr
 * Signature: ()I
 */
JNIEXPORT jint
JNICALL Java_nil_nadph_qnotified_util_Natives_sizeofptr
        (JNIEnv * , jclass);

/*
 * Class:     nil_nadph_qnotified_util_Natives
 * Method:    getpagesize
 * Signature: ()I
 */
JNIEXPORT jint
JNICALL Java_nil_nadph_qnotified_util_Natives_getpagesize
        (JNIEnv * , jclass);

/*
 * Class:     nil_nadph_qnotified_util_Natives
 * Method:    call
 * Signature: (J)J
 */
JNIEXPORT jlong
JNICALL Java_nil_nadph_qnotified_util_Natives_call__J
        (JNIEnv * , jclass, jlong);

/*
 * Class:     nil_nadph_qnotified_util_Natives
 * Method:    call
 * Signature: (JJ)J
 */
JNIEXPORT jlong
JNICALL Java_nil_nadph_qnotified_util_Natives_call__JJ
        (JNIEnv * , jclass, jlong, jlong);

#ifdef __cplusplus
}
#endif
#endif
