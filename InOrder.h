//   Author / s: Luis Gomez
//   Due Date : 4/4/2016
//   Programming Assignment Number 6
//
//   Spring 2016 - CS 3358 - 252
//
//   This program takes a positive integer that is greater than 9 and displays
//   a message if the integer is in ascending order, prints out the integer
//   in reverse order, prints out the sum of the integers, displays the sum
//   of the squares from 0 to n, and displays the number vertically.

#include <iostream>
#include <limits>

//reverses order of integer parameter
int reverseOrder(int);

//sums all the integers from the integer parameter
int sum(int);

//sums all the squares from the integer from 0 to n
long sumOfSquares(int);

//returns 1 if the int is ascending order(123) and 0 if its not(19234)
bool order(int);

//displays the integer in vertical order
int vertical(int);

