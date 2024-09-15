//Free to use but you must give credit and link/tag this repository.
//Made by David Tamaratare Oghenebrume.

#pragma once

#include <iostream>
#include <cmath>
#include <string>
#include <sstream>
#include <limits>

namespace brumski_cpp {
    
    template <class T>
        T input(const std::string& prompt) {
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
           
    namespace area2dshapes {     
    
        double square(double length) {
            return std::pow(length, 2);   
        }
        
        double rectangle(double length, double width) {
            return length * width;
        }
        
        double triangle(double base, double height) {
            return 0.5 * base * height;
        }
        
        double circle(double radius) {
            return M_PI * std::pow(radius, 2);
        }
        
        double ellipse(double major_axis, double minor_axis) {
            return M_PI * major_axis * minor_axis;
        }
      
        double parallelogram(double base, double height){
            return base * height;
        }
     
       double trapezoid(double base1, double base2, double height){
           return 0.5 * (base1 + base2) * height;
       }
      
      double rhombus(double diagonal1, double diagonal2){
          return 0.5 * diagonal1 * diagonal2;
      }
     
     double kite(double diagonal1, double diagonal2){
         return 0.5 * diagonal1 * diagonal2;
     }
           
    } // namespace AREA_2D
    
} // namespace BRUMSKI

// AREA_OF_2D_SHAPES
