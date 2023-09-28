
# C_Library
A learning note about creating C library for C and PYTHON using.

---
1. Create source files
    - "lib.c" source file
    - "lib.h" header file
2. Compile it to a new library.
    - for C library
    ```
    $ gcc -c lib.c -o lib.o
    ```
    - for Python library
    ```
    $ gcc -shared lib.c -o lib.so
    ```
---
## Using the library in C code:
- Using in C code:
    ```
    ...
    #include "lib.h"
    ...
    float result=lib_add(1.0,2.5);
    ...
    ```
    Compile main.c and link with lib.o together
    ```
    $ gcc main.c lib.o -o main
    ```
    Run
    ```
    $ ./main
    ```
    Result
    ```
    ADD 1.000000 and 2.500000:
    3.500000
    SUB 1.000000 by 2.500000:
    -1.500000
    ```

---
- Using Python code with "ctypes":
    ```
    from ctypes import cdll,c_float

    lib=cdll.LoadLibrary("./lib.so")

    lib.lib_add.argtypes=[c_float,c_float]
    lib.lib_add.restype=c_float

    lib.lib_sub.argtypes=[c_float,c_float]
    lib.lib_sub.restype=c_float

    print(lib.lib_add(1.5,2.6))
    print(lib.lib_sub(1.5,2.6))
    ```
    Run
    ```
    $ python main.py
    ```
    Result
    ```
    ADD 1.500000 and 2.600000:
    4.099999904632568
    SUB 1.500000 by 2.600000:
    -1.0999999046325684
    ```
