#include "integration.hpp"
#include "iostream"

using namespace brumski_cpp;

int main(){
  Integration grate(3, 'p', 1);
  
  std::cout << "Answer is " << grate.intg() << std::endl;
}