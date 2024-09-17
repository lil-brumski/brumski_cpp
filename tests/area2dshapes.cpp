include <iostream>

#include "brumski_cpp/math/area2dshapes.hpp"

int main(){
    
    double length = brumski_cpp::input<double>("Enter the length of your rectangle: ");
    
    double width = brumski_cpp::input<double>("Enter the width of your rectangle: ");
    
    double area = brumski_cpp::math::area2dshapes::rectangle(length, width);
    
    std::cout<<"The area of the circle is: "<<area<<std::endl;
    
}