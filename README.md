# GCD
Greatest Common Divisor

I wanted to share with you a little code that may be useful to someone in math classes:))

The greatest common divisor (GCD) of two (or more) integers is the largest natural number
that divides each of them. The algorithm for determining GCD was described by Euclid in 
the 4th century BC. It is one of the oldest numerical algorithms still in use.

This code calculates the GCD for two given numbers. It is a small exercise in C++ on programming
numerical algorithms and compiling the code using cmake or manually, i.e.:

g++ -c -o gcdfunc.o gcdfunc.cpp -Os -march=native -std=c++23

g++ -o gcdtest main.cpp gcdfunc.o -Os -march=native -std=c++23
