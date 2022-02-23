#include <features.h>

#if defined(__GLIBC__) && defined(__x86_64__)
// memcpy has a versioned symbol from 2.14.
// we want to support 2.12, so forcing it to something older.
__asm__(".symver memcpy,memcpy@GLIBC_2.2.5");
#endif
