
_This .md file contains guides and instructions on how to use the grade_calculator.hpp library._

1. This header file contains a template that checks the data type that the user enters. If it's the wrong one, a loop will be initiated until the correct data type is entered. The function name is:

```cpp
brumski_cpp::math::gradeinput<T>()
``` 
were *'T'* represents the data type that the user is using.

2. To check the grade of the student, we use the function:

```cpp brumski_cpp::math::grade::calculator(variable_name)
```
 were *'variable_name'* represents the variable that stores the score that is to be graded.

3. ```cpp
brumski::math::grade::point()
```
- This function takes in two parameters of type *char* and *int* respectively and returns an integer. The *char* represents the grade (A-F), while the *int* represents the course unit of that course.

4. This library might lack some features, so I will continue to push out updates for it.

5. Happy C++ coding. 💪
