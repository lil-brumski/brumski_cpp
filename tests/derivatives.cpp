#include "brumski_cpp/math/derivatives.hpp"

#include <iostream>

int main(){

   brumski_cpp::Differential derivative(5, 'x', 2);

   std::string result = derivative.diff();

   std::cout << "The derivative of 5*x^2 is: " << result << std::endl;

   return 0;

}