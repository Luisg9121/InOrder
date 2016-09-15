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
#include "InOrder.h"

using namespace std;

/**************************************************************************
this function takes the user input that is > 9 and displays the integer
vertically.

input: user defined integer > 9
output: user input displayed vertically
return value: int
**************************************************************************/
int vertical(int choice) //no need to return a value
{
    if(choice / 10 > 0)
       vertical(choice/10);

    cout << choice % 10 << endl;

    return choice % 10;
}

/**************************************************************************
this function takes takes an int and displays the int in reverse order

input: integer from user > 9
output: integer in reverse order
return value: int
**************************************************************************/
int reverseOrder(int choice)
{
    if(choice < 10)
       cout << choice;

    else{
        cout << choice % 10;
        return reverseOrder(choice / 10);
        }
}

/**************************************************************************
this function takes an int and sums all the integers from the initial integer

input: integer > 9
output: none
return value: int
**************************************************************************/
int sum(int choice)
{
    if(choice == 0)
        return 0;
    else
        return choice % 10 + sum(choice / 10);
}

/**************************************************************************
this function takes an int and sums the squares from 0 to n(integer parameter)
and returns the sum of all the squares

input: integer > 9
output: none
return value: int
**************************************************************************/
long sumOfSquares(int choice)
{
   if(choice <= 1)
      return choice;
   else{
       return (sumOfSquares(choice -1) + (choice * choice));
       }
}

/**************************************************************************
this function takes an int and returns 1 if the integer is in order(i.e. 123),
or returns a 0 if the integer is not in order (i.e. 19123)

input: int greater than 9
output: none
return value: boolean
**************************************************************************/
bool order(int choice)
{
   if(choice == 0)
      return true;

   else if((choice / 10) % 10 > choice % 10)
      return false;

   return order(choice / 10);
}
