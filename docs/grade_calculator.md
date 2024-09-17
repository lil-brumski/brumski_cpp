
_This .md file contains guides and instructions on how to use the grade_calculator.hpp library._

1. This header file contains a template that checks the data type that the user enters. If it's the wrong one, a loop will be initiated until the correct data type is entered. The function name is *"brumski_cpp::input\<t>()"* were *'T'* represents the data type that the user is using.

2. To check the grade of the student, we use the function: `"brumski_cpp::math::grade::calculator(variable_name)"` were *'variable_name'* represents the variable that stores the score that is to be graded.

3. `brumski::math::grade::point()` - This function takes in two parameters of type *char* and *int* respectively and returns an integer. The *char* represents the grade (A-F), while the *int* represents the course unit of that course.

4. Code example:

*\#include \<iostream>*

*\#include \<cmath>*

*\#include "brumski_cpp/math/grade_calculator.hpp"*

*int main(){*
    
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
    
   std::cout<<"You got a/an "<<grade<<".";

   int course_unit = 3;
    
   int grade_point = brumski_cpp::math::grade::point(grade, course_unit);

     std::cout << "Grade point is: " << grade_point << std::endl;


*}*

4. This library might lack some features, so I will continue to push out updates for it.

5. Happy C++ coding. 💪
