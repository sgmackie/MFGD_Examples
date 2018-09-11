//Redefining standard types to personal taste
#include <stdint.h>

//3 ways to use static
#define global static //Global access to variable
#define internal static //Variable local to source file only
#define local static //Variable persists after stepping out of scope (this should be avoided when possible)

//Standard integers
//Unsigned
typedef uint8_t uint8;
typedef uint16_t uint16;
typedef uint32_t uint32;
typedef uint64_t uint64;

//Signed
typedef int8_t int8;
typedef int16_t int16;
typedef int32_t int32;
typedef int64_t int64;

//Fast integers
//Unsigned
typedef uint_fast8_t uint8fast;
typedef uint_fast16_t uint16fast;
typedef uint_fast32_t uint32fast;
typedef uint_fast64_t uint64fast;

//Signed
typedef int_fast8_t int8fast;
typedef int_fast16_t int16fast;
typedef int_fast32_t int32fast;
typedef int_fast64_t int64fast;

//Least integers
//Unsigned
typedef uint_least8_t uint8least;
typedef uint_least16_t uint16least;
typedef uint_least32_t uint32least;
typedef uint_least64_t uint64least;

//Signed
typedef int_least8_t int8least;
typedef int_least16_t int16least;
typedef int_least32_t int32least;
typedef int_least64_t int64least;

//Floating points
typedef float float32;
typedef double float64;

typedef int32 bool32;