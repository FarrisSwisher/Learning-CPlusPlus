/*Course: CSCI 259, Section 2
Student Name: Farris Fisher
Student ID:10548933
Lab 6 in class
DueDate: 4/23/19

In keeping with the Honor Code of UM, I have neither
given nor received assistance from anyone other than the instructor.

Program Description: This program is designed to take in the answers to a 10
question exam, give the correct answers, tell the user how many answers they
got correct, and tell the user whether they passed the exam.
*/

#include <iostream>
using namespace std;

int main(){
  //declare/instantiate variables
  char usrAnswers [10];
  char crctAnswers [10] = { 'A', 'D', 'C', 'B', 'A', 'B', 'A', 'D', 'C', 'A' };
  int missed = 0;

  //prompt user to populate question answers
  for (int i = 0; i<10; i++){
    printf("Enter your answer to question %d: ", i+1);
    cin >> usrAnswers[i];
    usrAnswers[i] = (char) toupper(usrAnswers[i]);
    if (usrAnswers[i] != crctAnswers[i])
      missed++; //if the answers dont match, user missed the question
  }

  //output correct answers
  cout << "\nHere are the correct answers:\n";
  for (int i = 0; i<10; i++){
    printf("Question %d: %c\n",i+1,crctAnswers[i]);
  }

  //output number of correct answers
  printf("You answered %d questions correctly.\n",10-missed);

  //output if the user passed or failed
  if (missed < 3)
    cout << "\nCongrats! You passed the exam!\n";
  else
    cout << "\nSorry, you didn't pass. You must correctly answer at least 7 \
questions to pass!\n";

  return 0;
}
