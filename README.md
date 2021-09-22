# c11-math
math library for C11

for now it's only a port of c++ limits to C11.
(ported from: https://github.com/microsoft/STL/blob/62137922ab168f8e23ec1a95c946821e24bde230/stl/inc/limits)

The biggest difference between **std::numeric_limits** and c11lim_limits is that there are no function.
For example to get the max value of it is just
```c
int max_value = c11lim_limits(int).max;
```
