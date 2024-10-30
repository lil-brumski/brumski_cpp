_This .md file contains guides and instructions on how to use the derivatives.hpp header file._

* This file contains one class: 'Differential' and one method: 'diff()' of return type std::string.

* This library cannot handle complex differentials, only stuff like y = 5x⁶ for example. Its constructor only supports three variables; one for the constant (e.g 5), one for the variable (e.g 'x') and one for the power (e.g '²') in that order.

* To get the derivative of a function, you first instantiate an object of data type `brumski::Differential` and give it parameters. E.g `brumski::Differential derivative(5, 'x', 2);`

* Next you call the diff() method e.g `std::string result = derivative.diff();`


