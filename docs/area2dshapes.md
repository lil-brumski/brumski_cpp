_This .md file contains guides and instructions on how to use the area2dshapes.hpp header file._

1. This header file contains a template that checks the data type that the user enters. If it's the wrong one, a loop will be initiated until the correct data type is entered. The function name is "brumski_cpp::math::input<T>()" were 'T' represents the data type that the user is using.


2. The 2D shapes included in the library are: square, rectangle, triangle, circle, ellipse, parallelogram, trapezoid, rhombus, kite.

3. How to use the functions; e.g *double area = brumski::math::area2dshapes::rectangle(x, Y);*- were *x and Y* represent the parts used for getting the area.

4. Code example:


*\#include \<iostream>*

*\#include "brumski_cpp/math/area2dshapes.hpp"*

*int main(){*
    
    double length = brumski_cpp::input<double>("Enter the length of your rectangle: ");
    
    double width = brumski_cpp::input<double>("Enter the width of your rectangle: ");
    
    double area = brumski_cpp::math::area2dshapes::rectangle(length, width);
    
    std::cout<<"The area of the circle is: "<<area<<std::endl;
    
*}*

5. This library might lack some features, so I will continue to push out updates for it.


6. Happy C++ coding. 💪
