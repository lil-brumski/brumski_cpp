#pragma once

#include <string>
#include <sstream>
#include <iomanip>

namespace brumski_cpp{

 class Integration{
 private:
   float number = 0.0f;
   char variable;
   float power = 0.0f;

 public:
   Integration(const float& number, const char& variable, const float& power){
      this->number = number;
      this->variable = variable;
      this->power = power;
   }

   std::string intg(){
     std::string result;
     float var = number / (power + 1);
     std::stringstream ss;
     ss << std::fixed << std::setprecision(2) << var;
     std::string holder = ss.str();
      
     if (power + 1 == 1){
        result = holder + variable + " +C";
     }
     else{
        result = holder + variable + "^" + std::to_string(static_cast<int>(power + 1)) + " +C";    
     }  

      return result;
   } 
  
 };

}
