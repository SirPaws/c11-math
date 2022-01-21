#include "../include/c11_numbers.h"
#include <assert.h>
#include <stdio.h>

int main(void) {
    #define TEST(kind, expect, type)\
    assert(c11_##kind(type) == expect)
        
    TEST(e         , 2.718281828459045F , float);
    TEST(log2e     , 1.4426950408889634F, float);
    TEST(log10e    , 0.4342944819032518F, float);
    TEST(pi        , 3.141592653589793F , float);
    TEST(inv_pi    , 0.3183098861837907F, float);
    TEST(inv_sqrtpi, 0.5641895835477563F, float);
    TEST(ln2       , 0.6931471805599453F, float);
    TEST(ln10      , 2.302585092994046F , float);
    TEST(sqrt2     , 1.4142135623730951F, float);
    TEST(sqrt3     , 1.7320508075688772F, float);
    TEST(inv_sqrt3 , 0.5773502691896257F, float);
    TEST(egamma    , 0.5772156649015329F, float);
    TEST(phi       , 1.618033988749895F , float);

    TEST(e         , 2.718281828459045F , double);
    TEST(log2e     , 1.4426950408889634F, double);
    TEST(log10e    , 0.4342944819032518F, double);
    TEST(pi        , 3.141592653589793F , double);
    TEST(inv_pi    , 0.3183098861837907F, double);
    TEST(inv_sqrtpi, 0.5641895835477563F, double);
    TEST(ln2       , 0.6931471805599453F, double);
    TEST(ln10      , 2.302585092994046F , double);
    TEST(sqrt2     , 1.4142135623730951F, double);
    TEST(sqrt3     , 1.7320508075688772F, double);
    TEST(inv_sqrt3 , 0.5773502691896257F, double);
    TEST(egamma    , 0.5772156649015329F, double);
    TEST(phi       , 1.618033988749895F , double);

    TEST(e         , 2.718281828459045F , long double);
    TEST(log2e     , 1.4426950408889634F, long double);
    TEST(log10e    , 0.4342944819032518F, long double);
    TEST(pi        , 3.141592653589793F , long double);
    TEST(inv_pi    , 0.3183098861837907F, long double);
    TEST(inv_sqrtpi, 0.5641895835477563F, long double);
    TEST(ln2       , 0.6931471805599453F, long double);
    TEST(ln10      , 2.302585092994046F , long double);
    TEST(sqrt2     , 1.4142135623730951F, long double);
    TEST(sqrt3     , 1.7320508075688772F, long double);
    TEST(inv_sqrt3 , 0.5773502691896257F, long double);
    TEST(egamma    , 0.5772156649015329F, long double);
    TEST(phi       , 1.618033988749895F , long double);

    {

        float radians    = c11_radians(45.0f);
        float degrees    = c11_degrees(0.78539816339744830962f);
        float inv_rad    = c11_degrees(radians);
        float inv_deg    = c11_radians(degrees);

        assert(radians - 0.785398F < 0.000001F);
        assert(degrees - 45.0F     < 0.000001F);
        assert(inv_rad - 45.0F     < 0.000001F);
        assert(inv_deg - 0.785398F < 0.000001F);
    }
    {
        double radians    = c11_radians(45.0);
        double degrees    = c11_degrees(0.78539816339744830962);
        double inv_rad    = c11_degrees(radians);
        double inv_deg    = c11_radians(degrees);

        assert(radians - 0.785398  < 0.000001);
        assert(degrees - 45.0      < 0.000001);
        assert(inv_rad - 45.0      < 0.000001);
        assert(inv_deg - 0.785398  < 0.000001);
    }
    {
        long double radians    = c11_radians(45.0L);
        long double degrees    = c11_degrees(0.78539816339744830962L);
        long double inv_rad    = c11_degrees(radians);
        long double inv_deg    = c11_radians(degrees);

        assert(radians - 0.785398L < 0.000001L);
        assert(degrees - 45.0L     < 0.000001L);
        assert(inv_rad - 45.0L     < 0.000001L);
        assert(inv_deg - 0.785398L < 0.000001L);
    }
}


