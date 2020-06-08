/*Course: CSCI 259, Section 2
  Student Name: Farris Fisher
  Lab 3 in class
  DueDate: 03/05/19
  In keeping with the Honor Code of UM, I have neither
  given nor received assistancefrom anyone other than the instructor.
  Program Description: this program calculates a customer's total payment
  for their internet service based on package type and hours of internet
  access used.
*/

#include <iostream>
using namespace std;

int main(){
  //declare variables
  char package;
  int hours;
  double total;

  //prompt user for package and hours
  cout << "Enter the letter of the package (A,B, or C): ";
  cin >> package;
  cout << "Enter the number of hours that were used: ";
  cin >> hours;

  //switch statement to decide how to calculate the total + output
  switch (package) {
    case 'a'://lowercase to make fool-proof
    case 'A': total = 9.95 + 2.00 * (hours - 10);
            printf("The total charge is $%.2f\n\n",total);
      break;
    case 'b':
    case 'B': total = 13.95 + 1.00 * (hours - 20);
            printf("The total charge is $%.2f\n\n",total);
      break;
    case 'c':
    case 'C': total = 19.95;
            printf("The total charge is $%.2f\n\n",total);
      break;
    //if user didn't input a, b, or c then this error message outputs
    default: cout << "Invalid package choice!\n" << endl;
  }


  return 0;
}
