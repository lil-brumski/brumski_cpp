/*
To use this library, your C++ compiler must support at least C++23 (ISO 2023).
Knowledge of the <expected> C++ library is also needed.
Made by David Tamaratare Oghenebrume on the 2nd of June, 2024.
*/

#ifndef ADD_SUB_ETC
#define ADD_SUB_ETC

#include <iostream>
#include <cmath>
#include <iomanip>
#include <sstream>
#include <expected>

namespace brumski{
    
    //Wrong Data Type Handler.
    template <class T>
        T Input(const std::string& prompt) {
          T value;
          std::string input;
         while (true) {
            std::cout << prompt;
            std::getline(std::cin, input);
            std::istringstream stream(input);
            if (stream >> value && stream.eof()) {
                 break;
            } else {
                 std::cerr << "Wrong data type, try again!\n";
              }
        }
        return value;
     }
     
     //Addition
    double ADD(double a, double b){
        return a + b;
    }
    
    //Subtraction 
    double SUB(double a, double b){
        return a - b;
    }
     
    //Multiplication  
    double MULTt(double a, double b){
        return a * b;
    } 
   
   //Division 
    std::expected<double, std::string> DIV(double a, double b){
        if(b == 0){
            return std::unexpected<std::string>{"Can\'t divide by zero!"};
            }
        else{
            return a / b;
            }
    } 
    
    //Exponents 
    double EXP(double a, double b){
        return std::pow(a, b);
    }  
    
    //Sine
    double SIN(double a){
        std::cout<<std::fixed<<std::setprecision(2);
        return (a * (M_PI / 180));
    }
    
    //Cosine    
    double COS(double a){
        std::cout<<std::fixed<<std::setprecision(2);
        return (a * (M_PI / 180));
    }
    
    //Tangent    
    double TAN(double a){
        std::cout<<std::fixed<<std::setprecision(2);
        return (a * (M_PI / 180));
    }
    
    //Logarithm 
    double LOG(double l, double b){
        std::cout<<std::fixed<<std::setprecision(4);
        return std::log(l) / std::log(b);
    }
        
}
#endif