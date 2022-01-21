#include "c11_typetraits.h"
#include <assert.h>

int main(void) {

    #define test_cat_(a, b) a##b
    #define test_cat(a, b) test_cat_(a, b)
    #define TEST_STR0(type, kind) #type " was " #kind
    #define TEST_STR1(type, kind) #type " was not " #kind
    #define TEST_STR(expect, type, kind) test_cat(TEST_STR, expect)(type, kind)

    #define TEST(kind, expect, type)\
    _Static_assert(c11_is_##kind(type) == expect, TEST_STR(expect, type, kind))

    #define TEST_2(kind, expect, type_a, type_b)\
    _Static_assert(c11_is_##kind(type_a, type_b) == expect, TEST_STR(expect, type_a, type_b))


    TEST(integral, 1, _Bool             );
    TEST(integral, 1, char              );
MS_DISABLE(
    TEST(integral, 1, signed char       );
)
    TEST(integral, 1, signed short      );
    TEST(integral, 1, signed int        );
    TEST(integral, 1, signed long       );
    TEST(integral, 1, signed long long  );
    TEST(integral, 1, unsigned char     );
    TEST(integral, 1, unsigned short    );
    TEST(integral, 1, unsigned int      );
    TEST(integral, 1, unsigned long     );
    TEST(integral, 1, unsigned long long);
    TEST(integral, 1, char              );
    TEST(integral, 1, short             );
    TEST(integral, 1, int               );
    TEST(integral, 1, long              );
    TEST(integral, 1, long long         );
    TEST(integral, 1, const int         );
    TEST(integral, 0, float             );

    TEST(floating_point, 1, float      );
    TEST(floating_point, 1, double     );
    TEST(floating_point, 1, long double);
    TEST(floating_point, 0, int        );

    TEST_2(same, 0, int, float    );
    TEST_2(same, 0, int, const int);

}
