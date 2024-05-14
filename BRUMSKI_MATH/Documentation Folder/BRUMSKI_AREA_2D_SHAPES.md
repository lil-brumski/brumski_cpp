_This .md file contains guides and instructions on how to use the BRUMSKI_AREA_2D_SHAPES.hpp library._

1. This header file contains a template that checks the data type that the user enters. If it's the wrong one, a loop will be initiated until the correct data type is entered. The function name is "BRUMSKI::AREA_2D_SHAPES::Input<T>()" were 'T' represents the data type that the user is using.


2. The 2D shapes included in the library are: SQUARE, RECTANGLE, TRIANGLE, CIRCLE, ELLIPSE, PARALLELOGRAM, TRAPEZOID, RHOMBUS, KITE.

3. How to use the functions; e.g *double area = BRUMSKI::AREA_2D_SHAPES::RECTANGLE(X, Y);*- were *X and Y* represent the parts used for getting the area.

4. Code example:


*\#include \<iostream>*

*\#include "BRUMSKI_AREA_2D_SHAPES.hpp"*

*int main(){*
    
    double length = BRUMSKI::AREA_2D_SHAPES::Input<double>("Enter the length of your rectangle: ");
    
    double width = BRUMSKI::AREA_2D_SHAPES::Input<double>("Enter the width of your rectangle: ");
    
    double area = BRUMSKI::AREA_2D_SHAPES::RECTANGLE(length, width);
    
    std::cout<<"The area of the circle is: "<<area<<std::endl;
    
*}*