#ifndef C11_NUMBERS_HEADER
#define C11_NUMBERS_HEADER

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
#define c11_pi(Type)                \
_Generic((Type){0},                 \
    float:       3.141592653589793F,\
    double:      3.141592653589793 ,\
    long double: 3.141592653589793L \
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
#define c11_ln10(Type)              \
_Generic((Type){0},                 \
    float:       2.302585092994046F,\
    double:      2.302585092994046 ,\
    long double: 2.302585092994046L \
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
#define c11_phi(Type)               \
_Generic((Type){0},                 \
    float:       1.618033988749895F,\
    double:      1.618033988749895 ,\
    long double: 1.618033988749895L \
)

#endif // C11_NUMBERS_HEADER
