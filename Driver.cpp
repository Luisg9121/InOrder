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

int main()
{
   int selection, // to continue or end the program-> user-defined
       choice; // user-defined choice

        //prints menu and purpose of the program
   cout << "*** Welcome to My Program Using Recursions ***" << endl << endl
        << "The function of this program is to " << endl
        << "accepts from the keyboard" << endl
        << "a positive integer that is > 9." << endl
        << "The program then does the following :" << endl << endl
        << "   1- Returns true if the digits of that integer n"
        << endl << "      are in increasing order; otherwise ," << endl
        << "      the function returns false." << endl
        << "   2- Returns the numbers with the digits reversed." << endl
        << "   3- Returns the sum of the digits of the integer" << endl
        << "   4- Returns the sum of the squares of the numbers from 0 to the "
        << "number n" << endl << "   5- Displays the number vertically. "
        << endl << endl;
   do{

        //options to continue or end program
    cout << "Select from the following menu" << endl
         << "1.   Enter a positive number > 9" << endl
         << "9.   Terminate the program.   ";

    cin >> selection;// user input

    if(selection == 9)//terminates program
       {
       cout << endl << endl << "Luis Gomez - Tweak Programming Director"
            << endl << "April 2016" << endl;
       return 0;
       }
     // while-loop to validate user input
    while(selection != 1 && selection != 9)
      {
      cin.clear();

      cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

             cout << endl << "Invalid Option" << endl << endl;

   choice1:  cout << "Select form the following menu" << endl
                   << "1.   Enter a positive integer > 9" << endl
                   << "9.   Terminate the program.   ";

      cin >> selection;

      if(selection == 9)//terminates program
         {
         cout << endl << endl << "Luis Gomez - Tweak Programming Director"
              << endl << "April 2016" << endl;

         return 0;
         }
      }
      do{
         cout << endl << "Enter a positive integer > 9.      ";
         cin >> choice;

            //input validation. choice > 9
         if(choice < 10)
           {
           cin.clear();

           cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

           cout << endl << endl << "Invalid Number - Number must be > 9"
                << endl << endl << endl;

           goto choice1;
           }
        }while(choice < 10);

        //prints out whether int is in ascending order
    if(order(choice) == true)
       cout << endl << "The digits of " << choice << " are in increasing order."
            << endl << endl;
    else
       cout << endl << "The digits of " << choice << " are not in increasing "
            << "order." << endl << endl;

    cout << "The Original Digits are " << choice << " ---   "
         << "Digits reversed = ";

    reverseOrder(choice);

    cout << endl << endl
         << "Sum of digits of the number " << choice << "  is  =  "
         << sum(choice) << endl << endl
         << "Sum of squares from 0 to " << choice << "  =  "
         << sumOfSquares(choice) << endl << endl
         << choice << "    Displayed Vertically" << endl;

    vertical(choice);

         cout << endl << endl;
   }while(selection == 1);

    return 0;
}
