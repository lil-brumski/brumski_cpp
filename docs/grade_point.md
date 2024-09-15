
_This .md file contains guides and instructions on how to use the grade_point.hpp library._

1. Functions in this library:
   a. brumski::grade::point()- This function takes in two parameters of type *char* and *int* respectively. The *char* represents the grade (A-F), while the *int* represents the course unit of that course.

2. Code example:

*\include \<iostream>*
*\include "brumski_cpp/math/grade_point.hpp"*

*int main(){*

     char grade = 'A';
     int course_unit = 3;
    
     int grade_point = brumski_cpp::grade::point(grade, course_unit);

     std::cout << "Grade point is: " << grade_point << std::endl;

*}*
