/* Course: CSCI 259, Section 2
 Student Name: Farris Fisher
 Student ID: 10548933
 Lab 2 in class
 Due Date: 2/26/19
 In keeping with the Honor Code of UM, I have neither
 given nor received assistance from anyone other than the instructor.

 Program Description: This program takes in the weight of a package and returns
 a shipping cost based on what price range that weight falls under, outputting
 both the rate and shipping cost
*/

#include <iostream>
using namespace std;

int main(){
  double weight, rate, charge;
  cout << "Enter the weight of your package in pounds: ";
  cin >> weight;

  //check for valid weight, give shipping rate based on valid weight
  //invalid weight yields rate of -1
  if (weight > 0 && weight <= 1){
    rate = 3.5;
  }
  else if (weight > 1 && weight <= 3){
    rate = 5.5;
  }
  else if (weight > 3 && weight <= 10){
    rate = 8.5;
  }
  else if (weight > 10 && weight <= 10){
    rate = 10.5;
  }
  else {
    rate = -1;
  }

  /*if invalid weight, package cannot be shipped. otherwise, calculate shipping
  cost then output rate and cost*/
  if (rate == -1){
    cout << "Package cannot be shipped!\n\n";
  }
  else {
    charge = rate * weight;
    printf("Shipping rate:\t$%.2f\nShipping Cost:\t$%.2f\n\n", rate, charge);
  }

  return 0;
}
