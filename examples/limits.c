#include "../include/c11_limits.h"
#include <assert.h>

int main(void) {
#if !(_MSC_VER && !defined(__clang__))
    // these are the expected values on 64 bit windows
    assert(c11lim_limits(char).digits            == 7);
    assert(c11lim_limits(char).digits10          == 2);
    assert(c11lim_limits(signed char).digits     == 7);
    assert(c11lim_limits(signed char).digits10   == 2);
    assert(c11lim_limits(unsigned char).digits   == 8);
    assert(c11lim_limits(unsigned char).digits10 == 2);
    
    assert(c11lim_limits(unsigned short).digits   == 16);
    assert(c11lim_limits(unsigned short).digits10 == 4);
    assert(c11lim_limits(signed short).digits     == 15);
    assert(c11lim_limits(signed short).digits10   == 4);
    
    assert(c11lim_limits(unsigned int).digits   == 32);
    assert(c11lim_limits(unsigned int).digits10 == 9);
    assert(c11lim_limits(signed int).digits     == 31);
    assert(c11lim_limits(signed int).digits10   == 9);
    
#ifdef _WIN32
    assert(c11lim_limits(unsigned long).digits   == 32);
    assert(c11lim_limits(unsigned long).digits10 == 9);
    assert(c11lim_limits(signed long).digits     == 31);
    assert(c11lim_limits(signed long).digits10   == 9);
#else
    assert(c11lim_limits(unsigned long).digits   == 64);
    assert(c11lim_limits(unsigned long).digits10 == 19);
    assert(c11lim_limits(signed long).digits     == 63);
    assert(c11lim_limits(signed long).digits10   == 18);
#endif
    
    assert(c11lim_limits(unsigned long long).digits   == 64);
    assert(c11lim_limits(unsigned long long).digits10 == 19);
    assert(c11lim_limits(signed long long).digits     == 63);
    assert(c11lim_limits(signed long long).digits10   == 18);
#else
    // because MSVC doesn't work as expected this macro breaks somehow
    _Bool result = 0;
	result = c11lim_limits(char).digits == 7;					assert(result);
	result = c11lim_limits(char).digits10 == 2;					assert(result);
	result = c11lim_limits(signed char).digits == 7;			assert(result);
	result = c11lim_limits(signed char).digits10 == 2;			assert(result);
	result = c11lim_limits(unsigned char).digits == 8;			assert(result);
	result = c11lim_limits(unsigned char).digits10 == 2;		assert(result);

	result = c11lim_limits(unsigned short).digits == 16;		assert(result);
	result = c11lim_limits(unsigned short).digits10 == 4;		assert(result);
	result = c11lim_limits(signed short).digits == 15;			assert(result);
	result = c11lim_limits(signed short).digits10 == 4;			assert(result);

	result = c11lim_limits(unsigned int).digits == 32;			assert(result);
	result = c11lim_limits(unsigned int).digits10 == 9;			assert(result);
	result = c11lim_limits(signed int).digits == 31;			assert(result);
	result = c11lim_limits(signed int).digits10 == 9;			assert(result);

	result = c11lim_limits(unsigned long).digits == 32;			assert(result);
	result = c11lim_limits(unsigned long).digits10 == 9;		assert(result);
	result = c11lim_limits(signed long).digits == 31;			assert(result);
	result = c11lim_limits(signed long).digits10 == 9;			assert(result);

	result = c11lim_limits(unsigned long long).digits == 64;	assert(result);
	result = c11lim_limits(unsigned long long).digits10 == 19;	assert(result);
	result = c11lim_limits(signed long long).digits == 63;		assert(result);
	result = c11lim_limits(signed long long).digits10 == 18;	assert(result);

#endif
}


