/*******************************************************************************
** Author:       Morgan Chapleau-Stein
** Date:         7/1/19
** Description:  Asks the user to input 4 numbers, calculates the average, and
**               prints the average.
*******************************************************************************/

#include <iostream>
using std::cout;
using std::cin;
using std::endl;


int main()
{
    double num1, num2, num3, num4, avg;

    cout << "Please enter four numbers." << endl; //prompts user
    cin >> num1; //inputs from user
    cin >> num2;
    cin >> num3;
    cin >> num4;

    avg = (num1 + num2 + num3 + num4) / 4 ; //calculates average of the 4 numbers

    cout << "The average of those numbers is: " << endl;
    cout << avg << endl; //prints answer

    return 0;
}
