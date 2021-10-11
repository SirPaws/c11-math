# c11-math
math library for C11

for now it's only a port of c++ limits and numbers to C11.
(ported from: 
  https://github.com/microsoft/STL/blob/main/stl/inc/numbers ,
  https://github.com/microsoft/STL/blob/main/stl/inc/limits ,
  http://www.aoc.nrao.edu/php/tjuerges/ALMA/STL/html-3.4.6/limits-source.html
)

The biggest difference between **std::numeric_limits** and c11lim_limits is that there are no function.
For example to get the max value of it is just
```c
int max_value = c11lim_limits(int).max;
```

for **numbers** it should be equivalent, where instead of `<type>` it is `(type)`
```c
float e = c11_e(float);
```

