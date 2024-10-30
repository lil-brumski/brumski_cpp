To test this example, do the following:

* Download this library onto your device in any folder you want; using ```git clone https://github.com/lil-brumski/brumski_cpp.git``` inside of a terminal or command line.

* Move the `example/` directory outside of the `brumski_cpp/` directory so that they can both be in the same directory.

* Move `brumski_cpp/` to inside `example/`

* Enter the `brumski_cpp/` directory and create a subdirectory `lib/`

* Enter `lib/' and run `cmake .. && make`

* Create a folder: `build/` inside the `example/` directory.

* Enter ```cmake .. && make```

* Run the executable using `./example.o`


This is what you should do basically:

```bash
   $ git clone https://github.com/lil-brumski/brumski_cpp.git
   $ cd brumski_cpp/
   $ mv example /brumski_cpp/location
   $ mv brumski_cpp ~/example
   $ cd example/brumski_cpp/
   $ mkdir lib && cd lib
   $ cmake .. && cmake --build .
   $ cd ../..
   $ mkdir build && cd build
   $ cmake .. && cmake --build .
   $ ./example.o
```