
_This .md file contains guides and instructions on how to use the BRUMSKI_GRADE_CALCULATOR.hpp library._

1. This header file contains a template that checks the data type that the user enters. If it's the wrong one, a loop will be initiated until the correct data type is entered. The function name is *"BRUMSKI::GRADE::Input\<T>()"* were *'T'* represents the data type that the user is using.

2. To check the grade of the student, we use the function: *"BRUMSKI::GRADE::CALCULATOR(variable_name)"* were *'variable_name'* represents the variable that stores the score that is to be graded.

3. Code example:

*\#include \<iostream>*

*\#include \<cmath>*

*\#include "BRUMSKI_GRADE_CALCULATOR.hpp"*

*int main(){*
    
    double score = BRUMSKI::GRADE::Input<double>("Enter a score from 0 - 100: ");
    
    score = std::round(score);

    while(score < 0 || score > 100){
        if(score < 0){
            std::cout<<"Score cannot be less than zero.\n";
            }
        else if(score > 100){
            std::cout<<"Score cannot be more than 100.\n";
            }
        score = BRUMSKI::GRADE::Input<double>("Enter a score from 0 - 100: ");
        score = std::round(score);
        }
    
    char grade = BRUMSKI::GRADE::CALCULATOR(score);
    
     std::cout<<"You got a/an "<<grade<<".";
*}*

4. This library might lack some features, so I will continue to push out updates for it.

5. Happy C++ coding. 💪
