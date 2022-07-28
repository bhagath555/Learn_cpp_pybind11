# Successful run of Pybind11. Linking C++ with Python.

This repository containing a simple C++ code that convderted into importable python module via pybind11 and CMake. In order to mimic standard CPP project workflow setup, divided the entire code into one header, code, and binding file.

* header.hpp
    * Function definations and library includions.
* code.cpp
    * Implenentation of function definations added in cpp_headers.hpp
* binder.cpp
    * Actual code the binds the cpp code with python.
* use_pybind.py
    * Import and usage of pybind-exported cpp code.

### SYSTEM setup:
* Firstly, I have installed pybind11 package from MSYS/MinGW by executing below command.
* Command:- `pacman -S mingw-w64-x86_64-pybind11`


### Project building:
Then download/clone the repository, and remove `build` folder.

**NOTE: .vscode/c_cpp_properties.json is a VS Code setup file.**

Try to build the project. If it works fine, try running `example.py` to test the developed module. Unlike proper building, if the build was not successful and return error something related like below. 

* ` C:/mingw64/lib/gcc/x86_64-w64-mingw32/6.3.0/include/c++/cmath:1157:11: error: '::hypot' has not been declared\r`.

* In changed `1157:11` line in `C:/mingw64/lib/gcc/x86_64-w64-mingw32/6.3.0/include/c++/cmath`. 
    * `using ::hypot;` to `using ::_hypot;`.
* This solution was suggested in link - https://stackoverflow.com/questions/42276984/hypot-has-not-been-declared.

Above solution fixes last error you could encounter if you have followed all the steps I mentioned correctly.

Now, try to build again. after successful building, RUN examply.py from VSCode.