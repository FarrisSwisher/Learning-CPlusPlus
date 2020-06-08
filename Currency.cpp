/*Course: CSCI 259, Section 2
  Student Name: Farris Fisher
  Program 3 (Homework)
  DueDate: 03/05/19
  In keeping with the Honor Code of UM, I have neither
  given nor received assistancefrom anyone other than the instructor.
  Program Description: this program is designed to take in a desired currency
  type and an amount of USD to convert into said currency type then does the
  conversion, outputting both the original USD value and the new currency value
*/

#include <iostream>
#include <string>
using namespace std;

int main(){
  //declare variables
  char choice;
  string currency;
  double amount, newAmount;

  //prompt user for country choice then initial USD amount
  cout << "Select a country:\nEnter B for Britain\nEnter C for China\n\
Enter F for France\nEnter I for Italy\nEnter J for Japan\nEnter S for\
 Switzerland" << endl;
  cin >> choice;
  cout << "Enter the amount of money to exchange: $";
  cin >> amount;

  //decide conversion based on country selection
  switch (choice) {
    case 'b':
    case 'B': newAmount = amount * .77;
              currency = "British Pounds";
              printf("USD to %s: $%.2f = %.2f %s\n", currency.c_str()\
              , amount, newAmount, currency.c_str());
      break;
    case 'c':
    case 'C': newAmount = amount * 6.74;
              currency = "Yuans";
              printf("USD to %s: $%.2f = %.2f %s\n", currency.c_str()\
              , amount, newAmount, currency.c_str());
      break;
    case 'f':
    case 'i':
    case 'F':
    case 'I': newAmount = amount * .88;
              currency = "Euros";
              printf("USD to %s: $%.2f = %.2f %s\n", currency.c_str()\
              , amount, newAmount, currency.c_str());
      break;
    case 'j':
    case 'J': newAmount = amount * 109.80;
              currency = "Yens";
              printf("USD to %s: $%.2f = %.2f %s\n", currency.c_str()\
              , amount, newAmount, currency.c_str());
      break;
    case 's':
    case 'S': newAmount = amount * 1.01;
              currency = "Francs";
              printf("USD to %s: $%.2f = %.2f %s\n", currency.c_str()\
              , amount, newAmount, currency.c_str());
      break;
    default:  cout << "Invalid country selection!" << endl;//error message
  }



  return 0;
}
