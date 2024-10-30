_This .md file contains guides and instructions on how to use the area2dshapes.hpp header file._

1. This header file contains a template that checks the data type that the user enters. If it's the wrong one, a loop will be initiated until the correct data type is entered. The function name is:

```cpp
 brumski_cpp::math::areainput<T>()
```
 were 'T' represents the data type that the user is using.


2. The 2D shapes included in the library are: square, rectangle, triangle, circle, ellipse, parallelogram, trapezoid, rhombus, kite.

3. How to use the functions; e.g 

```cpp
double area = brumski::math::area2dshapes::rectangle(x, Y);
```
 -were *x and Y* represent the parts used for getting the area.

4. This library might lack some features, so I will continue to push out updates for it.


5. Happy C++ coding. 💪
