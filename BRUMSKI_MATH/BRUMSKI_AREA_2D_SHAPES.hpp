#ifndef AREA_OF_2D_SHAPES
#define AREA_OF_2D_SHAPES

#include <iostream>
#include <cmath>
#include <string>
#include <limits>

namespace BRUMSKI {
    
    template <class T>
        T Input(const std::string& prompt){
            T value;
            while(true){
                std::cout << prompt;
                if(std::cin >> value){
                    break;
                }
                else{
                    std::cin.clear();
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                    std::cerr << "Wrong data type, try again!\n";
                }
            }
            return value;
         }                
           
    namespace AREA_2D_SHAPES {     
    
        double SQUARE(double length) {
            return std::pow(length, 2);   
        }
        
        double RECTANGLE(double length, double width) {
            return length * width;
        }
        
        double TRIANGLE(double base, double height) {
            return 0.5 * base * height;
        }
        
        double CIRCLE(double radius) {
            return M_PI * std::pow(radius, 2);
        }
        
        double ELLIPSE(double major_axis, double minor_axis) {
            return M_PI * major_axis * minor_axis;
        }
      
        double PARALLELOGRAM(double base, double height){
            return base * height;
        }
     
       double TRAPEZOID(double base1, double base2, double height){
           return 0.5 * (base1 + base2) * height;
       }
      
      double RHOMBUS(double diagonal1, double diagonal2){
          return 0.5 * diagonal1 * diagonal2;
      }
     
     double KITE(double diagonal1, double diagonal2){
         return 0.5 * diagonal1 * diagonal2;
     }
           
    } // namespace AREA_2D
    
} // namespace BRUMSKI

#endif // AREA_OF_2D_SHAPES