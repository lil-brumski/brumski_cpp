
_This .md file contains guides and instructions on how to use the grade_calculator.hpp library._

1. This header file contains a template that checks the data type that the user enters. If it's the wrong one, a loop will be initiated until the correct data type is entered. The function name is *"brumski::Input\<T>()"* were *'T'* represents the data type that the user is using.

2. Functions available in this library are: add(), sub(), mult(), div(), exp(), sine(), cos(), tan(), and log(). You must prefix them with the brumski library namespace: _brumski::_.

3. Code example:


*\#include \<iostream>*
*\#include "add_sub_etc.hpp"*

*int main(){*
    
    double a = brumski::Input<double>("Enter a num: ");
    
    double b = brumski::Input<double>("Enter a deno: ");
    
    auto results = brumski::div(a, b);
    
    if(results){
        std::cout << "Answer is " << results.value();
    }
    else{
        std::cout << "Error: " << results.error();
    }
*}*


4. To use this library, your compiler must support C++23 and you should add this command _-std=c++23_ while compiling.