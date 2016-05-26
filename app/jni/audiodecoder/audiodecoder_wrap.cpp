/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 3.0.1
 *
 * This file is not intended to be easily readable and contains a number of
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG
 * interface file instead.
 * ----------------------------------------------------------------------------- */

#define SWIGJAVA


#ifdef __cplusplus
/* SwigValueWrapper is described in swig.swg */
template<typename T> class SwigValueWrapper {
  struct SwigMovePointer {
    T *ptr;
    SwigMovePointer(T *p) : ptr(p) { }
    ~SwigMovePointer() { delete ptr; }
    SwigMovePointer& operator=(SwigMovePointer& rhs) { T* oldptr = ptr; ptr = 0; delete oldptr; ptr = rhs.ptr; rhs.ptr = 0; return *this; }
  } pointer;
  SwigValueWrapper& operator=(const SwigValueWrapper<T>& rhs);
  SwigValueWrapper(const SwigValueWrapper<T>& rhs);
public:
  SwigValueWrapper() : pointer(0) { }
  SwigValueWrapper& operator=(const T& t) { SwigMovePointer tmp(new T(t)); pointer = tmp; return *this; }
  operator T&() const { return *pointer.ptr; }
  T *operator&() { return pointer.ptr; }
};

template <typename T> T SwigValueInit() {
  return T();
}
#endif

/* -----------------------------------------------------------------------------
 *  This section contains generic SWIG labels for method/variable
 *  declarations/attributes, and other compiler dependent labels.
 * ----------------------------------------------------------------------------- */

/* template workaround for compilers that cannot correctly implement the C++ standard */
#ifndef SWIGTEMPLATEDISAMBIGUATOR
# if defined(__SUNPRO_CC) && (__SUNPRO_CC <= 0x560)
#  define SWIGTEMPLATEDISAMBIGUATOR template
# elif defined(__HP_aCC)
/* Needed even with `aCC -AA' when `aCC -V' reports HP ANSI C++ B3910B A.03.55 */
/* If we find a maximum version that requires this, the test would be __HP_aCC <= 35500 for A.03.55 */
#  define SWIGTEMPLATEDISAMBIGUATOR template
# else
#  define SWIGTEMPLATEDISAMBIGUATOR
# endif
#endif

/* inline attribute */
#ifndef SWIGINLINE
# if defined(__cplusplus) || (defined(__GNUC__) && !defined(__STRICT_ANSI__))
#   define SWIGINLINE inline
# else
#   define SWIGINLINE
# endif
#endif

/* attribute recognised by some compilers to avoid 'unused' warnings */
#ifndef SWIGUNUSED
# if defined(__GNUC__)
#   if !(defined(__cplusplus)) || (__GNUC__ > 3 || (__GNUC__ == 3 && __GNUC_MINOR__ >= 4))
#     define SWIGUNUSED __attribute__ ((__unused__))
#   else
#     define SWIGUNUSED
#   endif
# elif defined(__ICC)
#   define SWIGUNUSED __attribute__ ((__unused__))
# else
#   define SWIGUNUSED
# endif
#endif

#ifndef SWIG_MSC_UNSUPPRESS_4505
# if defined(_MSC_VER)
#   pragma warning(disable : 4505) /* unreferenced local function has been removed */
# endif
#endif

#ifndef SWIGUNUSEDPARM
# ifdef __cplusplus
#   define SWIGUNUSEDPARM(p)
# else
#   define SWIGUNUSEDPARM(p) p SWIGUNUSED
# endif
#endif

/* internal SWIG method */
#ifndef SWIGINTERN
# define SWIGINTERN static SWIGUNUSED
#endif

/* internal inline SWIG method */
#ifndef SWIGINTERNINLINE
# define SWIGINTERNINLINE SWIGINTERN SWIGINLINE
#endif

/* exporting methods */
#if (__GNUC__ >= 4) || (__GNUC__ == 3 && __GNUC_MINOR__ >= 4)
#  ifndef GCC_HASCLASSVISIBILITY
#    define GCC_HASCLASSVISIBILITY
#  endif
#endif

#ifndef SWIGEXPORT
# if defined(_WIN32) || defined(__WIN32__) || defined(__CYGWIN__)
#   if defined(STATIC_LINKED)
#     define SWIGEXPORT
#   else
#     define SWIGEXPORT __declspec(dllexport)
#   endif
# else
#   if defined(__GNUC__) && defined(GCC_HASCLASSVISIBILITY)
#     define SWIGEXPORT __attribute__ ((visibility("default")))
#   else
#     define SWIGEXPORT
#   endif
# endif
#endif

/* calling conventions for Windows */
#ifndef SWIGSTDCALL
# if defined(_WIN32) || defined(__WIN32__) || defined(__CYGWIN__)
#   define SWIGSTDCALL __stdcall
# else
#   define SWIGSTDCALL
# endif
#endif

/* Deal with Microsoft's attempt at deprecating C standard runtime functions */
#if !defined(SWIG_NO_CRT_SECURE_NO_DEPRECATE) && defined(_MSC_VER) && !defined(_CRT_SECURE_NO_DEPRECATE)
# define _CRT_SECURE_NO_DEPRECATE
#endif

/* Deal with Microsoft's attempt at deprecating methods in the standard C++ library */
#if !defined(SWIG_NO_SCL_SECURE_NO_DEPRECATE) && defined(_MSC_VER) && !defined(_SCL_SECURE_NO_DEPRECATE)
# define _SCL_SECURE_NO_DEPRECATE
#endif



/* Fix for jlong on some versions of gcc on Windows */
#if defined(__GNUC__) && !defined(__INTEL_COMPILER)
  typedef long long __int64;
#endif

/* Fix for jlong on 64-bit x86 Solaris */
#if defined(__x86_64)
# ifdef _LP64
#   undef _LP64
# endif
#endif

#include <jni.h>
#include <stdlib.h>
#include <string.h>


/* Support for throwing Java exceptions */
typedef enum {
  SWIG_JavaOutOfMemoryError = 1, 
  SWIG_JavaIOException, 
  SWIG_JavaRuntimeException, 
  SWIG_JavaIndexOutOfBoundsException,
  SWIG_JavaArithmeticException,
  SWIG_JavaIllegalArgumentException,
  SWIG_JavaNullPointerException,
  SWIG_JavaDirectorPureVirtual,
  SWIG_JavaUnknownError
} SWIG_JavaExceptionCodes;

typedef struct {
  SWIG_JavaExceptionCodes code;
  const char *java_exception;
} SWIG_JavaExceptions_t;


static void SWIGUNUSED SWIG_JavaThrowException(JNIEnv *jenv, SWIG_JavaExceptionCodes code, const char *msg) {
  jclass excep;
  static const SWIG_JavaExceptions_t java_exceptions[] = {
    { SWIG_JavaOutOfMemoryError, "java/lang/OutOfMemoryError" },
    { SWIG_JavaIOException, "java/io/IOException" },
    { SWIG_JavaRuntimeException, "java/lang/RuntimeException" },
    { SWIG_JavaIndexOutOfBoundsException, "java/lang/IndexOutOfBoundsException" },
    { SWIG_JavaArithmeticException, "java/lang/ArithmeticException" },
    { SWIG_JavaIllegalArgumentException, "java/lang/IllegalArgumentException" },
    { SWIG_JavaNullPointerException, "java/lang/NullPointerException" },
    { SWIG_JavaDirectorPureVirtual, "java/lang/RuntimeException" },
    { SWIG_JavaUnknownError,  "java/lang/UnknownError" },
    { (SWIG_JavaExceptionCodes)0,  "java/lang/UnknownError" }
  };
  const SWIG_JavaExceptions_t *except_ptr = java_exceptions;

  while (except_ptr->code != code && except_ptr->code)
    except_ptr++;

  jenv->ExceptionClear();
  excep = jenv->FindClass(except_ptr->java_exception);
  if (excep)
    jenv->ThrowNew(excep, msg);
}


/* Contract support */

#define SWIG_contract_assert(nullreturn, expr, msg) if (!(expr)) {SWIG_JavaThrowException(jenv, SWIG_JavaIllegalArgumentException, msg); return nullreturn; } else


#if defined(SWIG_NOINCLUDE) || defined(SWIG_NOARRAYS)


static int SWIG_JavaArrayInBool (JNIEnv *jenv, jboolean **jarr, bool **carr, jbooleanArray input);
static void SWIG_JavaArrayArgoutBool (JNIEnv *jenv, jboolean *jarr, bool *carr, jbooleanArray input);
static jbooleanArray SWIG_JavaArrayOutBool (JNIEnv *jenv, bool *result, jsize sz);


static int SWIG_JavaArrayInSchar (JNIEnv *jenv, jbyte **jarr, signed char **carr, jbyteArray input);
static void SWIG_JavaArrayArgoutSchar (JNIEnv *jenv, jbyte *jarr, signed char *carr, jbyteArray input);
static jbyteArray SWIG_JavaArrayOutSchar (JNIEnv *jenv, signed char *result, jsize sz);


static int SWIG_JavaArrayInUchar (JNIEnv *jenv, jshort **jarr, unsigned char **carr, jshortArray input);
static void SWIG_JavaArrayArgoutUchar (JNIEnv *jenv, jshort *jarr, unsigned char *carr, jshortArray input);
static jshortArray SWIG_JavaArrayOutUchar (JNIEnv *jenv, unsigned char *result, jsize sz);


static int SWIG_JavaArrayInShort (JNIEnv *jenv, jshort **jarr, short **carr, jshortArray input);
static void SWIG_JavaArrayArgoutShort (JNIEnv *jenv, jshort *jarr, short *carr, jshortArray input);
static jshortArray SWIG_JavaArrayOutShort (JNIEnv *jenv, short *result, jsize sz);


static int SWIG_JavaArrayInUshort (JNIEnv *jenv, jint **jarr, unsigned short **carr, jintArray input);
static void SWIG_JavaArrayArgoutUshort (JNIEnv *jenv, jint *jarr, unsigned short *carr, jintArray input);
static jintArray SWIG_JavaArrayOutUshort (JNIEnv *jenv, unsigned short *result, jsize sz);


static int SWIG_JavaArrayInInt (JNIEnv *jenv, jint **jarr, int **carr, jintArray input);
static void SWIG_JavaArrayArgoutInt (JNIEnv *jenv, jint *jarr, int *carr, jintArray input);
static jintArray SWIG_JavaArrayOutInt (JNIEnv *jenv, int *result, jsize sz);


static int SWIG_JavaArrayInUint (JNIEnv *jenv, jlong **jarr, unsigned int **carr, jlongArray input);
static void SWIG_JavaArrayArgoutUint (JNIEnv *jenv, jlong *jarr, unsigned int *carr, jlongArray input);
static jlongArray SWIG_JavaArrayOutUint (JNIEnv *jenv, unsigned int *result, jsize sz);


static int SWIG_JavaArrayInLong (JNIEnv *jenv, jint **jarr, long **carr, jintArray input);
static void SWIG_JavaArrayArgoutLong (JNIEnv *jenv, jint *jarr, long *carr, jintArray input);
static jintArray SWIG_JavaArrayOutLong (JNIEnv *jenv, long *result, jsize sz);


static int SWIG_JavaArrayInUlong (JNIEnv *jenv, jlong **jarr, unsigned long **carr, jlongArray input);
static void SWIG_JavaArrayArgoutUlong (JNIEnv *jenv, jlong *jarr, unsigned long *carr, jlongArray input);
static jlongArray SWIG_JavaArrayOutUlong (JNIEnv *jenv, unsigned long *result, jsize sz);


static int SWIG_JavaArrayInLonglong (JNIEnv *jenv, jlong **jarr, jlong **carr, jlongArray input);
static void SWIG_JavaArrayArgoutLonglong (JNIEnv *jenv, jlong *jarr, jlong *carr, jlongArray input);
static jlongArray SWIG_JavaArrayOutLonglong (JNIEnv *jenv, jlong *result, jsize sz);


static int SWIG_JavaArrayInFloat (JNIEnv *jenv, jfloat **jarr, float **carr, jfloatArray input);
static void SWIG_JavaArrayArgoutFloat (JNIEnv *jenv, jfloat *jarr, float *carr, jfloatArray input);
static jfloatArray SWIG_JavaArrayOutFloat (JNIEnv *jenv, float *result, jsize sz);


static int SWIG_JavaArrayInDouble (JNIEnv *jenv, jdouble **jarr, double **carr, jdoubleArray input);
static void SWIG_JavaArrayArgoutDouble (JNIEnv *jenv, jdouble *jarr, double *carr, jdoubleArray input);
static jdoubleArray SWIG_JavaArrayOutDouble (JNIEnv *jenv, double *result, jsize sz);


#else


/* bool[] support */
static int SWIG_JavaArrayInBool (JNIEnv *jenv, jboolean **jarr, bool **carr, jbooleanArray input) {
  int i;
  jsize sz;
  if (!input) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "null array");
    return 0;
  }
  sz = jenv->GetArrayLength(input);
  *jarr = jenv->GetBooleanArrayElements(input, 0);
  if (!*jarr)
    return 0; 
  *carr = new bool[sz]; 
  if (!*carr) {
    SWIG_JavaThrowException(jenv, SWIG_JavaOutOfMemoryError, "array memory allocation failed");
    return 0;
  }
  for (i=0; i<sz; i++)
    (*carr)[i] = ((*jarr)[i] != 0);
  return 1;
}

static void SWIG_JavaArrayArgoutBool (JNIEnv *jenv, jboolean *jarr, bool *carr, jbooleanArray input) {
  int i;
  jsize sz = jenv->GetArrayLength(input);
  for (i=0; i<sz; i++)
    jarr[i] = (jboolean)carr[i];
  jenv->ReleaseBooleanArrayElements(input, jarr, 0);
}

static jbooleanArray SWIG_JavaArrayOutBool (JNIEnv *jenv, bool *result, jsize sz) {
  jboolean *arr;
  int i;
  jbooleanArray jresult = jenv->NewBooleanArray(sz);
  if (!jresult)
    return NULL;
  arr = jenv->GetBooleanArrayElements(jresult, 0);
  if (!arr)
    return NULL;
  for (i=0; i<sz; i++)
    arr[i] = (jboolean)result[i];
  jenv->ReleaseBooleanArrayElements(jresult, arr, 0);
  return jresult;
}


/* signed char[] support */
static int SWIG_JavaArrayInSchar (JNIEnv *jenv, jbyte **jarr, signed char **carr, jbyteArray input) {
  int i;
  jsize sz;
  if (!input) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "null array");
    return 0;
  }
  sz = jenv->GetArrayLength(input);
  *jarr = jenv->GetByteArrayElements(input, 0);
  if (!*jarr)
    return 0; 
  *carr = new signed char[sz]; 
  if (!*carr) {
    SWIG_JavaThrowException(jenv, SWIG_JavaOutOfMemoryError, "array memory allocation failed");
    return 0;
  }
  for (i=0; i<sz; i++)
    (*carr)[i] = (signed char)(*jarr)[i];
  return 1;
}

static void SWIG_JavaArrayArgoutSchar (JNIEnv *jenv, jbyte *jarr, signed char *carr, jbyteArray input) {
  int i;
  jsize sz = jenv->GetArrayLength(input);
  for (i=0; i<sz; i++)
    jarr[i] = (jbyte)carr[i];
  jenv->ReleaseByteArrayElements(input, jarr, 0);
}

static jbyteArray SWIG_JavaArrayOutSchar (JNIEnv *jenv, signed char *result, jsize sz) {
  jbyte *arr;
  int i;
  jbyteArray jresult = jenv->NewByteArray(sz);
  if (!jresult)
    return NULL;
  arr = jenv->GetByteArrayElements(jresult, 0);
  if (!arr)
    return NULL;
  for (i=0; i<sz; i++)
    arr[i] = (jbyte)result[i];
  jenv->ReleaseByteArrayElements(jresult, arr, 0);
  return jresult;
}


/* unsigned char[] support */
static int SWIG_JavaArrayInUchar (JNIEnv *jenv, jshort **jarr, unsigned char **carr, jshortArray input) {
  int i;
  jsize sz;
  if (!input) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "null array");
    return 0;
  }
  sz = jenv->GetArrayLength(input);
  *jarr = jenv->GetShortArrayElements(input, 0);
  if (!*jarr)
    return 0; 
  *carr = new unsigned char[sz]; 
  if (!*carr) {
    SWIG_JavaThrowException(jenv, SWIG_JavaOutOfMemoryError, "array memory allocation failed");
    return 0;
  }
  for (i=0; i<sz; i++)
    (*carr)[i] = (unsigned char)(*jarr)[i];
  return 1;
}

static void SWIG_JavaArrayArgoutUchar (JNIEnv *jenv, jshort *jarr, unsigned char *carr, jshortArray input) {
  int i;
  jsize sz = jenv->GetArrayLength(input);
  for (i=0; i<sz; i++)
    jarr[i] = (jshort)carr[i];
  jenv->ReleaseShortArrayElements(input, jarr, 0);
}

static jshortArray SWIG_JavaArrayOutUchar (JNIEnv *jenv, unsigned char *result, jsize sz) {
  jshort *arr;
  int i;
  jshortArray jresult = jenv->NewShortArray(sz);
  if (!jresult)
    return NULL;
  arr = jenv->GetShortArrayElements(jresult, 0);
  if (!arr)
    return NULL;
  for (i=0; i<sz; i++)
    arr[i] = (jshort)result[i];
  jenv->ReleaseShortArrayElements(jresult, arr, 0);
  return jresult;
}


/* short[] support */
static int SWIG_JavaArrayInShort (JNIEnv *jenv, jshort **jarr, short **carr, jshortArray input) {
  int i;
  jsize sz;
  if (!input) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "null array");
    return 0;
  }
  sz = jenv->GetArrayLength(input);
  *jarr = jenv->GetShortArrayElements(input, 0);
  if (!*jarr)
    return 0; 
  *carr = new short[sz]; 
  if (!*carr) {
    SWIG_JavaThrowException(jenv, SWIG_JavaOutOfMemoryError, "array memory allocation failed");
    return 0;
  }
  for (i=0; i<sz; i++)
    (*carr)[i] = (short)(*jarr)[i];
  return 1;
}

static void SWIG_JavaArrayArgoutShort (JNIEnv *jenv, jshort *jarr, short *carr, jshortArray input) {
  int i;
  jsize sz = jenv->GetArrayLength(input);
  for (i=0; i<sz; i++)
    jarr[i] = (jshort)carr[i];
  jenv->ReleaseShortArrayElements(input, jarr, 0);
}

static jshortArray SWIG_JavaArrayOutShort (JNIEnv *jenv, short *result, jsize sz) {
  jshort *arr;
  int i;
  jshortArray jresult = jenv->NewShortArray(sz);
  if (!jresult)
    return NULL;
  arr = jenv->GetShortArrayElements(jresult, 0);
  if (!arr)
    return NULL;
  for (i=0; i<sz; i++)
    arr[i] = (jshort)result[i];
  jenv->ReleaseShortArrayElements(jresult, arr, 0);
  return jresult;
}


/* unsigned short[] support */
static int SWIG_JavaArrayInUshort (JNIEnv *jenv, jint **jarr, unsigned short **carr, jintArray input) {
  int i;
  jsize sz;
  if (!input) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "null array");
    return 0;
  }
  sz = jenv->GetArrayLength(input);
  *jarr = jenv->GetIntArrayElements(input, 0);
  if (!*jarr)
    return 0; 
  *carr = new unsigned short[sz]; 
  if (!*carr) {
    SWIG_JavaThrowException(jenv, SWIG_JavaOutOfMemoryError, "array memory allocation failed");
    return 0;
  }
  for (i=0; i<sz; i++)
    (*carr)[i] = (unsigned short)(*jarr)[i];
  return 1;
}

static void SWIG_JavaArrayArgoutUshort (JNIEnv *jenv, jint *jarr, unsigned short *carr, jintArray input) {
  int i;
  jsize sz = jenv->GetArrayLength(input);
  for (i=0; i<sz; i++)
    jarr[i] = (jint)carr[i];
  jenv->ReleaseIntArrayElements(input, jarr, 0);
}

static jintArray SWIG_JavaArrayOutUshort (JNIEnv *jenv, unsigned short *result, jsize sz) {
  jint *arr;
  int i;
  jintArray jresult = jenv->NewIntArray(sz);
  if (!jresult)
    return NULL;
  arr = jenv->GetIntArrayElements(jresult, 0);
  if (!arr)
    return NULL;
  for (i=0; i<sz; i++)
    arr[i] = (jint)result[i];
  jenv->ReleaseIntArrayElements(jresult, arr, 0);
  return jresult;
}


/* int[] support */
static int SWIG_JavaArrayInInt (JNIEnv *jenv, jint **jarr, int **carr, jintArray input) {
  int i;
  jsize sz;
  if (!input) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "null array");
    return 0;
  }
  sz = jenv->GetArrayLength(input);
  *jarr = jenv->GetIntArrayElements(input, 0);
  if (!*jarr)
    return 0; 
  *carr = new int[sz]; 
  if (!*carr) {
    SWIG_JavaThrowException(jenv, SWIG_JavaOutOfMemoryError, "array memory allocation failed");
    return 0;
  }
  for (i=0; i<sz; i++)
    (*carr)[i] = (int)(*jarr)[i];
  return 1;
}

static void SWIG_JavaArrayArgoutInt (JNIEnv *jenv, jint *jarr, int *carr, jintArray input) {
  int i;
  jsize sz = jenv->GetArrayLength(input);
  for (i=0; i<sz; i++)
    jarr[i] = (jint)carr[i];
  jenv->ReleaseIntArrayElements(input, jarr, 0);
}

static jintArray SWIG_JavaArrayOutInt (JNIEnv *jenv, int *result, jsize sz) {
  jint *arr;
  int i;
  jintArray jresult = jenv->NewIntArray(sz);
  if (!jresult)
    return NULL;
  arr = jenv->GetIntArrayElements(jresult, 0);
  if (!arr)
    return NULL;
  for (i=0; i<sz; i++)
    arr[i] = (jint)result[i];
  jenv->ReleaseIntArrayElements(jresult, arr, 0);
  return jresult;
}


/* unsigned int[] support */
static int SWIG_JavaArrayInUint (JNIEnv *jenv, jlong **jarr, unsigned int **carr, jlongArray input) {
  int i;
  jsize sz;
  if (!input) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "null array");
    return 0;
  }
  sz = jenv->GetArrayLength(input);
  *jarr = jenv->GetLongArrayElements(input, 0);
  if (!*jarr)
    return 0; 
  *carr = new unsigned int[sz]; 
  if (!*carr) {
    SWIG_JavaThrowException(jenv, SWIG_JavaOutOfMemoryError, "array memory allocation failed");
    return 0;
  }
  for (i=0; i<sz; i++)
    (*carr)[i] = (unsigned int)(*jarr)[i];
  return 1;
}

static void SWIG_JavaArrayArgoutUint (JNIEnv *jenv, jlong *jarr, unsigned int *carr, jlongArray input) {
  int i;
  jsize sz = jenv->GetArrayLength(input);
  for (i=0; i<sz; i++)
    jarr[i] = (jlong)carr[i];
  jenv->ReleaseLongArrayElements(input, jarr, 0);
}

static jlongArray SWIG_JavaArrayOutUint (JNIEnv *jenv, unsigned int *result, jsize sz) {
  jlong *arr;
  int i;
  jlongArray jresult = jenv->NewLongArray(sz);
  if (!jresult)
    return NULL;
  arr = jenv->GetLongArrayElements(jresult, 0);
  if (!arr)
    return NULL;
  for (i=0; i<sz; i++)
    arr[i] = (jlong)result[i];
  jenv->ReleaseLongArrayElements(jresult, arr, 0);
  return jresult;
}


/* long[] support */
static int SWIG_JavaArrayInLong (JNIEnv *jenv, jint **jarr, long **carr, jintArray input) {
  int i;
  jsize sz;
  if (!input) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "null array");
    return 0;
  }
  sz = jenv->GetArrayLength(input);
  *jarr = jenv->GetIntArrayElements(input, 0);
  if (!*jarr)
    return 0; 
  *carr = new long[sz]; 
  if (!*carr) {
    SWIG_JavaThrowException(jenv, SWIG_JavaOutOfMemoryError, "array memory allocation failed");
    return 0;
  }
  for (i=0; i<sz; i++)
    (*carr)[i] = (long)(*jarr)[i];
  return 1;
}

static void SWIG_JavaArrayArgoutLong (JNIEnv *jenv, jint *jarr, long *carr, jintArray input) {
  int i;
  jsize sz = jenv->GetArrayLength(input);
  for (i=0; i<sz; i++)
    jarr[i] = (jint)carr[i];
  jenv->ReleaseIntArrayElements(input, jarr, 0);
}

static jintArray SWIG_JavaArrayOutLong (JNIEnv *jenv, long *result, jsize sz) {
  jint *arr;
  int i;
  jintArray jresult = jenv->NewIntArray(sz);
  if (!jresult)
    return NULL;
  arr = jenv->GetIntArrayElements(jresult, 0);
  if (!arr)
    return NULL;
  for (i=0; i<sz; i++)
    arr[i] = (jint)result[i];
  jenv->ReleaseIntArrayElements(jresult, arr, 0);
  return jresult;
}


/* unsigned long[] support */
static int SWIG_JavaArrayInUlong (JNIEnv *jenv, jlong **jarr, unsigned long **carr, jlongArray input) {
  int i;
  jsize sz;
  if (!input) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "null array");
    return 0;
  }
  sz = jenv->GetArrayLength(input);
  *jarr = jenv->GetLongArrayElements(input, 0);
  if (!*jarr)
    return 0; 
  *carr = new unsigned long[sz]; 
  if (!*carr) {
    SWIG_JavaThrowException(jenv, SWIG_JavaOutOfMemoryError, "array memory allocation failed");
    return 0;
  }
  for (i=0; i<sz; i++)
    (*carr)[i] = (unsigned long)(*jarr)[i];
  return 1;
}

static void SWIG_JavaArrayArgoutUlong (JNIEnv *jenv, jlong *jarr, unsigned long *carr, jlongArray input) {
  int i;
  jsize sz = jenv->GetArrayLength(input);
  for (i=0; i<sz; i++)
    jarr[i] = (jlong)carr[i];
  jenv->ReleaseLongArrayElements(input, jarr, 0);
}

static jlongArray SWIG_JavaArrayOutUlong (JNIEnv *jenv, unsigned long *result, jsize sz) {
  jlong *arr;
  int i;
  jlongArray jresult = jenv->NewLongArray(sz);
  if (!jresult)
    return NULL;
  arr = jenv->GetLongArrayElements(jresult, 0);
  if (!arr)
    return NULL;
  for (i=0; i<sz; i++)
    arr[i] = (jlong)result[i];
  jenv->ReleaseLongArrayElements(jresult, arr, 0);
  return jresult;
}


/* jlong[] support */
static int SWIG_JavaArrayInLonglong (JNIEnv *jenv, jlong **jarr, jlong **carr, jlongArray input) {
  int i;
  jsize sz;
  if (!input) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "null array");
    return 0;
  }
  sz = jenv->GetArrayLength(input);
  *jarr = jenv->GetLongArrayElements(input, 0);
  if (!*jarr)
    return 0; 
  *carr = new jlong[sz]; 
  if (!*carr) {
    SWIG_JavaThrowException(jenv, SWIG_JavaOutOfMemoryError, "array memory allocation failed");
    return 0;
  }
  for (i=0; i<sz; i++)
    (*carr)[i] = (jlong)(*jarr)[i];
  return 1;
}

static void SWIG_JavaArrayArgoutLonglong (JNIEnv *jenv, jlong *jarr, jlong *carr, jlongArray input) {
  int i;
  jsize sz = jenv->GetArrayLength(input);
  for (i=0; i<sz; i++)
    jarr[i] = (jlong)carr[i];
  jenv->ReleaseLongArrayElements(input, jarr, 0);
}

static jlongArray SWIG_JavaArrayOutLonglong (JNIEnv *jenv, jlong *result, jsize sz) {
  jlong *arr;
  int i;
  jlongArray jresult = jenv->NewLongArray(sz);
  if (!jresult)
    return NULL;
  arr = jenv->GetLongArrayElements(jresult, 0);
  if (!arr)
    return NULL;
  for (i=0; i<sz; i++)
    arr[i] = (jlong)result[i];
  jenv->ReleaseLongArrayElements(jresult, arr, 0);
  return jresult;
}


/* float[] support */
static int SWIG_JavaArrayInFloat (JNIEnv *jenv, jfloat **jarr, float **carr, jfloatArray input) {
  int i;
  jsize sz;
  if (!input) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "null array");
    return 0;
  }
  sz = jenv->GetArrayLength(input);
  *jarr = jenv->GetFloatArrayElements(input, 0);
  if (!*jarr)
    return 0; 
  *carr = new float[sz]; 
  if (!*carr) {
    SWIG_JavaThrowException(jenv, SWIG_JavaOutOfMemoryError, "array memory allocation failed");
    return 0;
  }
  for (i=0; i<sz; i++)
    (*carr)[i] = (float)(*jarr)[i];
  return 1;
}

static void SWIG_JavaArrayArgoutFloat (JNIEnv *jenv, jfloat *jarr, float *carr, jfloatArray input) {
  int i;
  jsize sz = jenv->GetArrayLength(input);
  for (i=0; i<sz; i++)
    jarr[i] = (jfloat)carr[i];
  jenv->ReleaseFloatArrayElements(input, jarr, 0);
}

static jfloatArray SWIG_JavaArrayOutFloat (JNIEnv *jenv, float *result, jsize sz) {
  jfloat *arr;
  int i;
  jfloatArray jresult = jenv->NewFloatArray(sz);
  if (!jresult)
    return NULL;
  arr = jenv->GetFloatArrayElements(jresult, 0);
  if (!arr)
    return NULL;
  for (i=0; i<sz; i++)
    arr[i] = (jfloat)result[i];
  jenv->ReleaseFloatArrayElements(jresult, arr, 0);
  return jresult;
}


/* double[] support */
static int SWIG_JavaArrayInDouble (JNIEnv *jenv, jdouble **jarr, double **carr, jdoubleArray input) {
  int i;
  jsize sz;
  if (!input) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "null array");
    return 0;
  }
  sz = jenv->GetArrayLength(input);
  *jarr = jenv->GetDoubleArrayElements(input, 0);
  if (!*jarr)
    return 0; 
  *carr = new double[sz]; 
  if (!*carr) {
    SWIG_JavaThrowException(jenv, SWIG_JavaOutOfMemoryError, "array memory allocation failed");
    return 0;
  }
  for (i=0; i<sz; i++)
    (*carr)[i] = (double)(*jarr)[i];
  return 1;
}

static void SWIG_JavaArrayArgoutDouble (JNIEnv *jenv, jdouble *jarr, double *carr, jdoubleArray input) {
  int i;
  jsize sz = jenv->GetArrayLength(input);
  for (i=0; i<sz; i++)
    jarr[i] = (jdouble)carr[i];
  jenv->ReleaseDoubleArrayElements(input, jarr, 0);
}

static jdoubleArray SWIG_JavaArrayOutDouble (JNIEnv *jenv, double *result, jsize sz) {
  jdouble *arr;
  int i;
  jdoubleArray jresult = jenv->NewDoubleArray(sz);
  if (!jresult)
    return NULL;
  arr = jenv->GetDoubleArrayElements(jresult, 0);
  if (!arr)
    return NULL;
  for (i=0; i<sz; i++)
    arr[i] = (jdouble)result[i];
  jenv->ReleaseDoubleArrayElements(jresult, arr, 0);
  return jresult;
}


#endif


#include <stdint.h>		// Use the C99 official header


#include "ac3decoder.h"
#include "mpadecoder.h"


#ifdef __cplusplus
extern "C" {
#endif

SWIGEXPORT jint JNICALL Java_org_xvdr_audio_audiodecoderJNI_AC3Decoder_1LayoutStereo_1get(JNIEnv *jenv, jclass jcls) {
  jint jresult = 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  result = (int)AC3Decoder::LayoutStereo;
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_org_xvdr_audio_audiodecoderJNI_AC3Decoder_1LayoutDolby_1get(JNIEnv *jenv, jclass jcls) {
  jint jresult = 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  result = (int)AC3Decoder::LayoutDolby;
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_org_xvdr_audio_audiodecoderJNI_AC3Decoder_1Layout50_1get(JNIEnv *jenv, jclass jcls) {
  jint jresult = 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  result = (int)AC3Decoder::Layout50;
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_org_xvdr_audio_audiodecoderJNI_AC3Decoder_1Layout51_1get(JNIEnv *jenv, jclass jcls) {
  jint jresult = 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  result = (int)AC3Decoder::Layout51;
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_org_xvdr_audio_audiodecoderJNI_AC3Decoder_1ChannelLayout_1set(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2) {
  AC3Decoder *arg1 = (AC3Decoder *) 0 ;
  int arg2 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(AC3Decoder **)&jarg1; 
  arg2 = (int)jarg2; 
  if (arg1 && sizeof(int) == sizeof((arg1)->ChannelLayout)) *(int*)(void*)&((arg1)->ChannelLayout) = arg2;
}


SWIGEXPORT jint JNICALL Java_org_xvdr_audio_audiodecoderJNI_AC3Decoder_1ChannelLayout_1get(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jint jresult = 0 ;
  AC3Decoder *arg1 = (AC3Decoder *) 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(AC3Decoder **)&jarg1; 
  result = (int) ((arg1)->ChannelLayout);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_org_xvdr_audio_audiodecoderJNI_new_1AC3Decoder(JNIEnv *jenv, jclass jcls, jint jarg1) {
  jlong jresult = 0 ;
  int arg1 ;
  AC3Decoder *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = (int)jarg1; 
  result = (AC3Decoder *)new AC3Decoder(arg1);
  *(AC3Decoder **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_org_xvdr_audio_audiodecoderJNI_delete_1AC3Decoder(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  AC3Decoder *arg1 = (AC3Decoder *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(AC3Decoder **)&jarg1; 
  delete arg1;
}


SWIGEXPORT jint JNICALL Java_org_xvdr_audio_audiodecoderJNI_AC3Decoder_1decodeDirect(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jobject jarg2, jint jarg4) {
  jint jresult = 0 ;
  AC3Decoder *arg1 = (AC3Decoder *) 0 ;
  char *arg2 = (char *) 0 ;
  int arg3 ;
  int arg4 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(AC3Decoder **)&jarg1; 
  {
    arg2 = (char*)jenv->GetDirectBufferAddress(jarg2);
    arg3 = (int)(jenv->GetDirectBufferCapacity(jarg2));
  }
  arg4 = (int)jarg4; 
  result = (int)(arg1)->decodeDirect(arg2,arg3,arg4);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_org_xvdr_audio_audiodecoderJNI_AC3Decoder_1decode(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jbyteArray jarg2, jint jarg3, jint jarg4) {
  jint jresult = 0 ;
  AC3Decoder *arg1 = (AC3Decoder *) 0 ;
  char *arg2 = (char *) 0 ;
  int arg3 ;
  int arg4 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(AC3Decoder **)&jarg1; 
  {
    arg2 = (char *) jenv->GetByteArrayElements(jarg2, 0); 
  }
  arg3 = (int)jarg3; 
  arg4 = (int)jarg4; 
  result = (int)(arg1)->decode(arg2,arg3,arg4);
  jresult = (jint)result; 
  {
    jenv->ReleaseByteArrayElements(jarg2, (jbyte *) arg2, 0); 
  }
  
  return jresult;
}


SWIGEXPORT jboolean JNICALL Java_org_xvdr_audio_audiodecoderJNI_AC3Decoder_1readDirect(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jobject jarg2, jint jarg4) {
  jboolean jresult = 0 ;
  AC3Decoder *arg1 = (AC3Decoder *) 0 ;
  char *arg2 = (char *) 0 ;
  int arg3 ;
  int arg4 ;
  bool result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(AC3Decoder **)&jarg1; 
  {
    arg2 = (char*)jenv->GetDirectBufferAddress(jarg2);
    arg3 = (int)(jenv->GetDirectBufferCapacity(jarg2));
  }
  arg4 = (int)jarg4; 
  result = (bool)(arg1)->readDirect(arg2,arg3,arg4);
  jresult = (jboolean)result; 
  return jresult;
}


SWIGEXPORT jboolean JNICALL Java_org_xvdr_audio_audiodecoderJNI_AC3Decoder_1read(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jbyteArray jarg2, jint jarg3, jint jarg4) {
  jboolean jresult = 0 ;
  AC3Decoder *arg1 = (AC3Decoder *) 0 ;
  char *arg2 = (char *) 0 ;
  int arg3 ;
  int arg4 ;
  bool result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(AC3Decoder **)&jarg1; 
  {
    arg2 = (char *) jenv->GetByteArrayElements(jarg2, 0); 
  }
  arg3 = (int)jarg3; 
  arg4 = (int)jarg4; 
  result = (bool)(arg1)->read(arg2,arg3,arg4);
  jresult = (jboolean)result; 
  {
    jenv->ReleaseByteArrayElements(jarg2, (jbyte *) arg2, 0); 
  }
  
  return jresult;
}


SWIGEXPORT jint JNICALL Java_org_xvdr_audio_audiodecoderJNI_AC3Decoder_1getChannels(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jint jresult = 0 ;
  AC3Decoder *arg1 = (AC3Decoder *) 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(AC3Decoder **)&jarg1; 
  result = (int)(arg1)->getChannels();
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_org_xvdr_audio_audiodecoderJNI_AC3Decoder_1getSampleRate(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jint jresult = 0 ;
  AC3Decoder *arg1 = (AC3Decoder *) 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(AC3Decoder **)&jarg1; 
  result = (int)(arg1)->getSampleRate();
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_org_xvdr_audio_audiodecoderJNI_AC3Decoder_1getBitRate(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jint jresult = 0 ;
  AC3Decoder *arg1 = (AC3Decoder *) 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(AC3Decoder **)&jarg1; 
  result = (int)(arg1)->getBitRate();
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_org_xvdr_audio_audiodecoderJNI_new_1MpegAudioDecoder(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  MpegAudioDecoder *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (MpegAudioDecoder *)new MpegAudioDecoder();
  *(MpegAudioDecoder **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_org_xvdr_audio_audiodecoderJNI_delete_1MpegAudioDecoder(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  MpegAudioDecoder *arg1 = (MpegAudioDecoder *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(MpegAudioDecoder **)&jarg1; 
  delete arg1;
}


SWIGEXPORT jint JNICALL Java_org_xvdr_audio_audiodecoderJNI_MpegAudioDecoder_1decodeDirect(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jobject jarg2, jint jarg4) {
  jint jresult = 0 ;
  MpegAudioDecoder *arg1 = (MpegAudioDecoder *) 0 ;
  char *arg2 = (char *) 0 ;
  int arg3 ;
  int arg4 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(MpegAudioDecoder **)&jarg1; 
  {
    arg2 = (char*)jenv->GetDirectBufferAddress(jarg2);
    arg3 = (int)(jenv->GetDirectBufferCapacity(jarg2));
  }
  arg4 = (int)jarg4; 
  result = (int)(arg1)->decodeDirect(arg2,arg3,arg4);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_org_xvdr_audio_audiodecoderJNI_MpegAudioDecoder_1decode(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jbyteArray jarg2, jint jarg3, jint jarg4) {
  jint jresult = 0 ;
  MpegAudioDecoder *arg1 = (MpegAudioDecoder *) 0 ;
  char *arg2 = (char *) 0 ;
  int arg3 ;
  int arg4 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(MpegAudioDecoder **)&jarg1; 
  {
    arg2 = (char *) jenv->GetByteArrayElements(jarg2, 0); 
  }
  arg3 = (int)jarg3; 
  arg4 = (int)jarg4; 
  result = (int)(arg1)->decode(arg2,arg3,arg4);
  jresult = (jint)result; 
  {
    jenv->ReleaseByteArrayElements(jarg2, (jbyte *) arg2, 0); 
  }
  
  return jresult;
}


SWIGEXPORT jboolean JNICALL Java_org_xvdr_audio_audiodecoderJNI_MpegAudioDecoder_1readDirect(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jobject jarg2, jint jarg4) {
  jboolean jresult = 0 ;
  MpegAudioDecoder *arg1 = (MpegAudioDecoder *) 0 ;
  char *arg2 = (char *) 0 ;
  int arg3 ;
  int arg4 ;
  bool result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(MpegAudioDecoder **)&jarg1; 
  {
    arg2 = (char*)jenv->GetDirectBufferAddress(jarg2);
    arg3 = (int)(jenv->GetDirectBufferCapacity(jarg2));
  }
  arg4 = (int)jarg4; 
  result = (bool)(arg1)->readDirect(arg2,arg3,arg4);
  jresult = (jboolean)result; 
  return jresult;
}


SWIGEXPORT jboolean JNICALL Java_org_xvdr_audio_audiodecoderJNI_MpegAudioDecoder_1read(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jbyteArray jarg2, jint jarg3, jint jarg4) {
  jboolean jresult = 0 ;
  MpegAudioDecoder *arg1 = (MpegAudioDecoder *) 0 ;
  char *arg2 = (char *) 0 ;
  int arg3 ;
  int arg4 ;
  bool result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(MpegAudioDecoder **)&jarg1; 
  {
    arg2 = (char *) jenv->GetByteArrayElements(jarg2, 0); 
  }
  arg3 = (int)jarg3; 
  arg4 = (int)jarg4; 
  result = (bool)(arg1)->read(arg2,arg3,arg4);
  jresult = (jboolean)result; 
  {
    jenv->ReleaseByteArrayElements(jarg2, (jbyte *) arg2, 0); 
  }
  
  return jresult;
}


SWIGEXPORT jint JNICALL Java_org_xvdr_audio_audiodecoderJNI_MpegAudioDecoder_1getChannels(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jint jresult = 0 ;
  MpegAudioDecoder *arg1 = (MpegAudioDecoder *) 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(MpegAudioDecoder **)&jarg1; 
  result = (int)(arg1)->getChannels();
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_org_xvdr_audio_audiodecoderJNI_MpegAudioDecoder_1getSampleRate(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jint jresult = 0 ;
  MpegAudioDecoder *arg1 = (MpegAudioDecoder *) 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(MpegAudioDecoder **)&jarg1; 
  result = (int)(arg1)->getSampleRate();
  jresult = (jint)result; 
  return jresult;
}


#ifdef __cplusplus
}
#endif

