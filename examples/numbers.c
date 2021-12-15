#include "c11_numbers.h"
#include <assert.h>
#include <stdio.h>

int main(void) {
    {
        float e          = c11_e(float);
        float log2e      = c11_log2e(float);
        float log10e     = c11_log10e(float);
        float pi         = c11_pi(float);
        float inv_pi     = c11_inv_pi(float);
        float inv_sqrtpi = c11_inv_sqrtpi(float);
        float ln2        = c11_ln2(float);
        float ln10       = c11_ln10(float);
        float sqrt2      = c11_sqrt2(float);
        float sqrt3      = c11_sqrt3(float);
        float inv_sqrt3  = c11_inv_sqrt3(float);
        float egamma     = c11_egamma(float);
        float phi        = c11_phi(float);

        float radians    = c11_radians(45.0f);
        float degrees    = c11_degrees(0.78539816339744830962f);
        float inv_rad    = c11_degrees(radians);
        float inv_deg    = c11_radians(degrees);
        
        assert(e            == 2.718281828459045F);
        assert(log2e        == 1.4426950408889634F);
        assert(log10e       == 0.4342944819032518F);
        assert(pi           == 3.141592653589793F);
        assert(inv_pi       == 0.3183098861837907F);
        assert(inv_sqrtpi   == 0.5641895835477563F);
        assert(ln2          == 0.6931471805599453F);
        assert(ln10         == 2.302585092994046F);
        assert(sqrt2        == 1.4142135623730951F);
        assert(sqrt3        == 1.7320508075688772F);
        assert(inv_sqrt3    == 0.5773502691896257F);
        assert(egamma       == 0.5772156649015329F);
        assert(phi          == 1.618033988749895F);

        assert(radians - 0.785398F < 0.000001F);
        assert(degrees - 45.0F     < 0.000001F);
        assert(inv_rad - 45.0F     < 0.000001F);
        assert(inv_deg - 0.785398F < 0.000001F);
    }
    {
        double e          = c11_e(double);
        double log2e      = c11_log2e(double);
        double log10e     = c11_log10e(double);
        double pi         = c11_pi(double);
        double inv_pi     = c11_inv_pi(double);
        double inv_sqrtpi = c11_inv_sqrtpi(double);
        double ln2        = c11_ln2(double);
        double ln10       = c11_ln10(double);
        double sqrt2      = c11_sqrt2(double);
        double sqrt3      = c11_sqrt3(double);
        double inv_sqrt3  = c11_inv_sqrt3(double);
        double egamma     = c11_egamma(double);
        double phi        = c11_phi(double);
        
        double radians    = c11_radians(45.0);
        double degrees    = c11_degrees(0.78539816339744830962);
        double inv_rad    = c11_degrees(radians);
        double inv_deg    = c11_radians(degrees);
        
        assert(e            == 2.718281828459045);
        assert(log2e        == 1.4426950408889634);
        assert(log10e       == 0.4342944819032518);
        assert(pi           == 3.141592653589793);
        assert(inv_pi       == 0.3183098861837907);
        assert(inv_sqrtpi   == 0.5641895835477563);
        assert(ln2          == 0.6931471805599453);
        assert(ln10         == 2.302585092994046);
        assert(sqrt2        == 1.4142135623730951);
        assert(sqrt3        == 1.7320508075688772);
        assert(inv_sqrt3    == 0.5773502691896257);
        assert(egamma       == 0.5772156649015329);
        assert(phi          == 1.618033988749895);

        assert(radians - 0.785398  < 0.000001);
        assert(degrees - 45.0      < 0.000001);
        assert(inv_rad - 45.0      < 0.000001);
        assert(inv_deg - 0.785398  < 0.000001);
    }
    {
        long double e          = c11_e(long double);
        long double log2e      = c11_log2e(long double);
        long double log10e     = c11_log10e(long double);
        long double pi         = c11_pi(long double);
        long double inv_pi     = c11_inv_pi(long double);
        long double inv_sqrtpi = c11_inv_sqrtpi(long double);
        long double ln2        = c11_ln2(long double);
        long double ln10       = c11_ln10(long double);
        long double sqrt2      = c11_sqrt2(long double);
        long double sqrt3      = c11_sqrt3(long double);
        long double inv_sqrt3  = c11_inv_sqrt3(long double);
        long double egamma     = c11_egamma(long double);
        long double phi        = c11_phi(long double);
        
        long double radians    = c11_radians(45.0L);
        long double degrees    = c11_degrees(0.78539816339744830962L);
        long double inv_rad    = c11_degrees(radians);
        long double inv_deg    = c11_radians(degrees);

        assert(e            == 2.718281828459045L);
        assert(log2e        == 1.4426950408889634L);
        assert(log10e       == 0.4342944819032518L);
        assert(pi           == 3.141592653589793L);
        assert(inv_pi       == 0.3183098861837907L);
        assert(inv_sqrtpi   == 0.5641895835477563L);
        assert(ln2          == 0.6931471805599453L);
        assert(ln10         == 2.302585092994046L);
        assert(sqrt2        == 1.4142135623730951L);
        assert(sqrt3        == 1.7320508075688772L);
        assert(inv_sqrt3    == 0.5773502691896257L);
        assert(egamma       == 0.5772156649015329L);
        assert(phi          == 1.618033988749895L);
        
        assert(radians - 0.785398L < 0.000001L);
        assert(degrees - 45.0L     < 0.000001L);
        assert(inv_rad - 45.0L     < 0.000001L);
        assert(inv_deg - 0.785398L < 0.000001L);
    }
}


