/*Course: CSCI 259, Section 2
Student Name: Farris Fisher
Program 6
DueDate: 4/23/19

In keeping with the Honor Code of UM, I have neither
given nor received assistance from anyone other than the instructor.

Program Description: This program is designed to take in a desired number of
test grades, and then each individual test grade. Then the program will output
the average letter grade of those test grades.
*/

#include <iostream>
using namespace std;

//average prototype
char average(int[], int);

int main(){
  //prompt user for number of grades
  int num;
  cout << "How many grades do you want to enter? ";
  cin >> num;

  //declare grades array; prompt user to populate array with grades
  int grades [num];
  for (int i = 0; i<num; i++){
    printf("Enter grade %d: ", i+1);
    cin >> grades[i];
  }
  //output class average
  printf("The class average for the test is %c\n", average(grades, num));
  return 0;
}

//average function
char average(int grades[], int num){
  double avg = 0.0;
  for (int i = 0; i<num ; i++){
    avg += grades[i];
  }
  avg /= num;
  if (avg >= 90)
    return 'A';
  else if (avg >= 80)
    return 'B';
  else if (avg >= 70)
    return 'C';
  else if (avg >= 60)
    return 'D';
  else
    return 'F';
}
