/*
 * gcdfunc.hpp
 *
 * The module contains functions for calculating the greatest common divisor.
 *
 * 14-11-2018
 */
#pragma once


// Euclid's algorithm:
// Given two numbers a and b, it consists in subtracting
// the smaller from the larger. When the numbers are equal, 
// we obtain the GCD.
int gcdEuclide(int a, int b);


// recursive version
int gcdRec(int a, int b);
