#ifndef C11_TYPE_TRAITS
#define C11_TYPE_TRAITS

#if _MSC_VER && !defined(__clang__)
#   ifndef MS_DISABLE
#       define MS_DISABLE(...)
#   endif 
#else
#   ifndef MS_DISABLE
#       define MS_DISABLE(...) __VA_ARGS__
#   endif
#endif



#define c11_is_integral(type)   \
_Generic((type){0},             \
    _Bool             : 1,      \
    char              : 1,      \
MS_DISABLE(                     \
    signed char       : 1,      \
)                               \
    signed short      : 1,      \
    signed int        : 1,      \
    signed long       : 1,      \
    signed long long  : 1,      \
    unsigned char     : 1,      \
    unsigned short    : 1,      \
    unsigned int      : 1,      \
    unsigned long     : 1,      \
    unsigned long long: 1,      \
    default: 0                  \
)

#define c11_is_floating_point(type) \
_Generic((type){0},                 \
    float      : 1,                 \
    double     : 1,                 \
    long double: 1,                 \
    default    : 0                  \
)

#define c11_is_same(Type0, Type1)   \
_Generic((Type0){0},                \
    Type1  : 1,                     \
    default: 0                      \
)

#endif
