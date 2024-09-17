#include <iostream>

#include <cmath>

#include <brumski_cpp/math/grade_calculator.hpp>

int main(){
    
    double score = brumski_cpp::math::input<double>("Enter a score from 0 - 100: ");
    
    score = std::round(score);

    while(score < 0 || score > 100){
        if(score < 0){
            std::cout<<"Score cannot be less than zero.\n";
            }
        else if(score > 100){
            std::cout<<"Score cannot be more than 100.\n";
            }
        score = brumski_cpp::math::input<double>("Enter a score from 0 - 100: ");
        score = std::round(score);
        }
    
    char grade = brumski_cpp::math::grade::calculator(score);
    
   std::cout<<"You got a/an "<<grade<<".\n";

   int course_unit = 3;
    
   int grade_point = brumski_cpp::math::grade::point(grade, course_unit);

     std::cout << "Course unit is "<< course_unit << ".\nGrade point is: " << grade_point << std::endl;


}