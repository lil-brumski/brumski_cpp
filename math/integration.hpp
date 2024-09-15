#pragma once

#include <string>

namespace brumski{

 class Integration{
 private:
   int number = 0;
   char variable;
   int power = 0;

 public:
   Integration(const int& number, const char& variable, const int& power){
      this->number = number;
      this->variable = variable;
      this->power = power;
   }

   std::string intg(){
     std::string result;

      if((number % (power + 1)) != 0 ){
        result = std::to_string(number/(power + 1)) + variable + "^" + std::to_string(power + 1) + " +C";
      }
      else{
        result = variable + std::string("^") + std::to_string(power + 1) + " +C";
      }

      return result;
   } 
  
 };

}
