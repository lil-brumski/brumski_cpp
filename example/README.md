To test this example, do the following:

* Download this library onto your device in any folder you want; using ```git clone https://github.com/lil-brumski/brumski_cpp.git``` inside of a terminal or command line.

* Create a new project or use existing project and move the brumski_cpp/ folder to inside of your project.

* Create the CMakeLists.txt for your project.

* Create a folder: `build/` inside the project directory.

* Enter ```cmake .. -DUSE_DERIV_INT=ON``` to include the derivative and integration library or just ```cmake ..``` to exclude it.

* Run ```make```

* Run the executable

This is what you should do basically:

```bash
   $ git clone https://github.com/lil-brumski/brumski_cpp.git
   $ mkdir project_name/
   $ mv brumski_cpp/ project_name/
   $ cd project_name/
   $ micro CMakeLists.txt
   $ micro {soucre_files}.cpp
   $ mkdir build && cd build
   $ cmake .. && cmake --build .
   $ ./executable 
```