#include <iostream>
#include <cmath>

#include <brumski_cpp/math/area2dshapes.hpp> //Header 1
#include <brumski_cpp/math/grade_calculator.hpp> //Header 2

#ifdef USE_DERIV_INT
  #include <brumski_cpp/math/derivatives.hpp> //Header 3
#endif

#include <brumski_cpp/school/cgpa.hpp> //Header 4
#include <brumski_cpp/ascii/name.hpp> //Header 5


void AREA2d(){//This uses Header 1  
    double length = brumski_cpp::math::areainput<double>("Enter the length of your rectangle: ");
    
    double width = brumski_cpp::math::areainput<double>("Enter the width of your rectangle: ");
    
    double area = brumski_cpp::math::area2dshapes::rectangle(length, width);
    
    std::cout<<"The area of the circle is: "<<area<<std::endl;   
}

void GRADE_C(){//This uses header 2.
    double score = brumski_cpp::math::gradeinput<double>("Enter a score from 0 - 100: ");
    
    score = std::round(score);

    while(score < 0 || score > 100){
        if(score < 0){
            std::cout<<"Score cannot be less than zero.\n";
            }
        else if(score > 100){
            std::cout<<"Score cannot be more than 100.\n";
            }
        score = brumski_cpp::math::gradeinput<double>("Enter a score from 0 - 100: ");
        score = std::round(score);
        }
    
    char grade = brumski_cpp::math::grade::calculator(score);
    
   std::cout<<"You got a/an "<<grade<<".\n";

   int course_unit = 3;
    
   int grade_point = brumski_cpp::math::grade::point(grade, course_unit);

     std::cout << "Course unit is "<< course_unit << ".\nGrade point is: " << grade_point << std::endl;
}

void DERIV(){//This is for Header 3
#ifdef USE_DERIV_INT
   brumski_cpp::Differential derivative(5, 'x', 2);

   std::string result = derivative.diff();

   std::cout << "The derivative of 5*x^2 is: " << result << std::endl;
#else
   std::cout << "Sorry, the library you're trying to use hasn't been defined!\n";
#endif
}

void CG_PA(){//This is for Header 4.  
    float cumulative_units = 0.0f;
    int total_course_units = 9;
    
    //Variables for storing the courses'' grades.
    char MTH101 = brumski_cpp::school::course_grade("MTH101");
    char PHY101 = brumski_cpp::school::course_grade("PHY101");
    char CHM101 = brumski_cpp::school::course_grade("CHM101");
    
    //Variables for storing the courses' grade point.'
    int mth101 = brumski_cpp::school::course_grade_point(MTH101, 3);
    int phy101 = brumski_cpp::school::course_grade_point(PHY101, 3);
    int chm101 = brumski_cpp::school::course_grade_point(CHM101, 3);
    
    //Cumulative units for 1st semester.
    cumulative_units += mth101 + phy101 + chm101;
    
    //Stores user's first semester GPA.
    float fstGPA = brumski_cpp::school::semester_GPA(cumulative_units, total_course_units);
    
    std::cout << "First Semester:" 
    << "\nMTH101: " << MTH101 
    << "\nPHY101: " << PHY101
    << "\nCHM101: " << CHM101 << std::endl;
    std::cout << "First Semester GPA is: " << fstGPA << std::endl;
    std::cout << "CGPA is: " << fstGPA << std::endl;
    
    std::cout << std::endl;
    
    float cumulative_units_sec = 0.0f;
    int total_course_units_sec = 8;
    
    //Variables for storing the courses'' grades.
    char MTH102 = brumski_cpp::school::course_grade("MTH102");
    char PHY102 = brumski_cpp::school::course_grade("PHY102");
    char CHM102 = brumski_cpp::school::course_grade("CHM102");
    
    //Variables for storing the courses' grade point.'
    int mth102 = brumski_cpp::school::course_grade_point(MTH102, 3);
    int phy102 = brumski_cpp::school::course_grade_point(PHY102, 3);
    int chm102 = brumski_cpp::school::course_grade_point(CHM102, 2);
    
    //Cumulative units for 2nd semester.
    cumulative_units_sec += mth102 + phy102 + chm102;
    
    //Stores user's second semester GPA.
    float secGPA = brumski_cpp::school::semester_GPA(cumulative_units_sec, total_course_units_sec);
    
    //Cumulative units for 1st and 2nd semester.
     cumulative_units += mth102 + phy102 + chm102;
     
     //Cumulative grade point.
      int total_cu = total_course_units + total_course_units_sec;
      
      //Stores user's CGPA.
      float cgpa = brumski_cpp::school::semester_GPA(cumulative_units, total_cu);
    
    std::cout << "\nSecond Semester:" 
    << "\nMTH102: " << MTH102
    << "\nPHY102: " << PHY102
    << "\nCHM102: " << CHM102 << std::endl;
    std::cout << "Second Semester GPA is: " << secGPA << std::endl;
     std::cout << "CGPA is: " << cgpa << std::endl;    
}

int main(){
  int answer = brumski_cpp::math::areainput<int>("Choose what function you want to call; enter the number attached to it: 1. AREA 2. GRADE 3. DERIVATIVES 4. CGPA 5. ASCII-ART: ");
  
  switch(answer){
    case 1:
      AREA2d();
      break;
    case 2:
      GRADE_C();
      break;
    case 3:
      DERIV();
      break;
    case 4:
      CG_PA();
      break;
    case 5:
      brumski_cpp::ascii::name();
      break;
    default:
      std::cout << "Invalid option.\n";
  }
  
}