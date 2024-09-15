#ifndef DERIVATIVES 
#define DERIVATIVES 

#include <string>

namespace brumski{

  class Differential{
  private:
    int number = 0;
    char variable;
    int power = 0;

  public:
    Differential(const int& number, const char& variable, const int& power){
      this->number = number;
      this->variable = variable;
      this->power = power;
    }

    std::string diff(){
      std::string result;
  
      if(power != 2){
        result = std::to_string(power * number) + "" + variable + "^" + std::to_string(power - 1);  
      }
      else{
        result = std::to_string(power * number) + "" + variable;
      }
    
      return result;
    }
  
};

}
#endif