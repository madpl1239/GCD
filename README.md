# GCD - Greatest Common Divisor
![alt text](image.png)

I wanted to share with you a little code that may be useful to someone in math classes:))

The greatest common divisor (GCD) of two (or more) integers is the largest natural number
that divides each of them. The algorithm for determining GCD was described by Euclid in 
the 4th century BC. It is one of the oldest numerical algorithms still in use.

This code calculates the GCD for two given numbers. It is a small exercise in C++ on programming
numerical algorithms and compiling the code using cmake or manually, i.e.:

## Compilation and running
g++ -c -o gcdfunc.o gcdfunc.cpp -Os -march=native -std=c++23

g++ -o gcdtest main.cpp gcdfunc.o -Os -march=native -std=c++23

Of course you can use cmake to compilation this code.

To use cmake, after downloading this repo you still need to create a build directory. Then go into
it and from there launch the terminal and type the following commands:

cmake ../ -G "Unix Makefiles" -DCMAKE_BUILD_TYPE=Release

make

cd ..

and run:

myHome/>./gcdtest

And its all. See you next time :smiley:

## License
[MIT](https://choosealicense.com/licenses/mit/)

