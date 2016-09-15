//   Roster Number / s:  20
//
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

   }while(selection == 1);//end of while loop, repeats if selection == 1.

    return 0;
}

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
