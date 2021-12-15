#ifndef C11_NUMBERS_HEADER
#define C11_NUMBERS_HEADER

#ifndef MS_DISABLE
#   if _MSC_VER && !defined(__clang__)
#       define MS_DISABLE(...)
#   else
#       define MS_DISABLE(...) __VA_ARGS__
#   endif
#endif


#define c11_e(Type)                     \
_Generic((Type){0},                     \
    float:       2.718281828459045F,    \
    double:      2.718281828459045 ,    \
    long double: 2.718281828459045L     \
)

#define c11_log2e(Type)                 \
_Generic((Type){0},                     \
    float:       1.4426950408889634F,   \
    double:      1.4426950408889634 ,   \
    long double: 1.4426950408889634L    \
)
#define c11_log10e(Type)                \
_Generic((Type){0},                     \
    float:       0.4342944819032518F,   \
    double:      0.4342944819032518 ,   \
    long double: 0.4342944819032518L    \
)
#define c11_pi(Type)                    \
_Generic((Type){0},                     \
    float:       3.141592653589793F,    \
    double:      3.141592653589793 ,    \
    long double: 3.141592653589793L     \
)
#define c11_inv_pi(Type)                \
_Generic((Type){0},                     \
    float:       0.3183098861837907F,   \
    double:      0.3183098861837907 ,   \
    long double: 0.3183098861837907L    \
)
#define c11_inv_sqrtpi(Type)            \
_Generic((Type){0},                     \
    float:       0.5641895835477563F,   \
    double:      0.5641895835477563 ,   \
    long double: 0.5641895835477563L    \
)
#define c11_ln2(Type)\
_Generic((Type){0},                     \
    float:       0.6931471805599453F,   \
    double:      0.6931471805599453 ,   \
    long double: 0.6931471805599453L    \
)
#define c11_ln10(Type)                  \
_Generic((Type){0},                     \
    float:       2.302585092994046F,    \
    double:      2.302585092994046 ,    \
    long double: 2.302585092994046L     \
)
#define c11_sqrt2(Type)                 \
_Generic((Type){0},                     \
    float:       1.4142135623730951F,   \
    double:      1.4142135623730951 ,   \
    long double: 1.4142135623730951L    \
)
#define c11_sqrt3(Type)                 \
_Generic((Type){0},                     \
    float:       1.7320508075688772F,   \
    double:      1.7320508075688772 ,   \
    long double: 1.7320508075688772L    \
)
#define c11_inv_sqrt3(Type)             \
_Generic((Type){0},                     \
    float:       0.5773502691896257F,   \
    double:      0.5773502691896257 ,   \
    long double: 0.5773502691896257L    \
)
#define c11_egamma(Type)                \
_Generic((Type){0},                     \
    float:       0.5772156649015329F,   \
    double:      0.5772156649015329 ,   \
    long double: 0.5772156649015329L    \
)
#define c11_phi(Type)                   \
_Generic((Type){0},                     \
    float:       1.618033988749895F,    \
    double:      1.618033988749895 ,    \
    long double: 1.618033988749895L     \
)

#define c11_radians(degrees)                                                        \
_Generic((degrees),                                                                 \
    _Bool               : (_Bool)1,                                                 \
    char                : (((double)(degrees)) * (c11_pi(double)      / 180.0 )),   \
    unsigned char       : (((double)(degrees)) * (c11_pi(double)      / 180.0 )),   \
    MS_DISABLE(                                                                     \
    signed char         : (((double)(degrees)) * (c11_pi(double)      / 180.0 )),   \
    )                                                                               \
    unsigned short      : (((double)(degrees)) * (c11_pi(double)      / 180.0 )),   \
    signed short        : (((double)(degrees)) * (c11_pi(double)      / 180.0 )),   \
    unsigned int        : (((double)(degrees)) * (c11_pi(double)      / 180.0 )),   \
    signed int          : (((double)(degrees)) * (c11_pi(double)      / 180.0 )),   \
    unsigned long       : (((double)(degrees)) * (c11_pi(double)      / 180.0 )),   \
    signed long         : (((double)(degrees)) * (c11_pi(double)      / 180.0 )),   \
    unsigned long long  : (((double)(degrees)) * (c11_pi(double)      / 180.0 )),   \
    signed long long    : (((double)(degrees)) * (c11_pi(double)      / 180.0 )),   \
    float               : ((degrees)           * (c11_pi(float)       / 180.0F)),   \
    double              : ((degrees)           * (c11_pi(double)      / 180.0F)),   \
    long double         : ((degrees)           * (c11_pi(long double) / 180.0L))    \
)

#define c11_degrees(radians)                                                    \
_Generic((radians),                                                             \
    _Bool               : (((double)(radians)) * (180.0  / c11_pi(double))),    \
    char                : (((double)(radians)) * (180.0  / c11_pi(double))),    \
    unsigned char       : (((double)(radians)) * (180.0  / c11_pi(double))),    \
    MS_DISABLE(                                                                 \
    signed char         : (((double)(radians)) * (180.0  / c11_pi(double))),    \
    )                                                                           \
    unsigned short      : (((double)(radians)) * (180.0  / c11_pi(double))),    \
    signed short        : (((double)(radians)) * (180.0  / c11_pi(double))),    \
    unsigned int        : (((double)(radians)) * (180.0  / c11_pi(double))),    \
    signed int          : (((double)(radians)) * (180.0  / c11_pi(double))),    \
    unsigned long       : (((double)(radians)) * (180.0  / c11_pi(double))),    \
    signed long         : (((double)(radians)) * (180.0  / c11_pi(double))),    \
    unsigned long long  : (((double)(radians)) * (180.0  / c11_pi(double))),    \
    signed long long    : (((double)(radians)) * (180.0  / c11_pi(double))),    \
    float               : ((radians)           * (180.0F / c11_pi(float) )),    \
    double              : ((radians)           * (180.0F / c11_pi(double))),    \
    long double         : ((radians)           * (180.0L / c11_pi(long double)))\
)


#endif // C11_NUMBERS_HEADER
