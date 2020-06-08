/* Course: CSCI 259, Section 2
 Student Name: Farris Fisher
 Program 2 Homework
 Due Date: 2/26/19
 In keeping with the Honor Code of UM, I have neither
 given nor received assistance from anyone other than the instructor.

 Program Description: This program simulates a game of rock, paper, scissors
 played between the user and the computer. 0 is for scissors, 1 is for rock,
 and 2 is for paper.
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

int main(){
  //initialize random seed
  srand(time(0));

  //declare user input int and computer generated int; generate computer int
  //also declare the results int 'fin'
  int user, computer, fin;
  computer = rand() % 3;

  //prompt user for input
  cout << "Enter 0 for scissors, 1 for rock, or 2 for paper: \n";
  cin >> user;

  //determine if the user followed the rules
  if (user > -1 && user < 3){
    //subtract computer int from user int to determine who won
    fin = user - computer;

    //declare user string and computer string (for rock, paper, or scissors)
    string ustring, cstring;

    //determine if user has rock, paper, or scissors (then do same for computer)
    if (user == 0){
      ustring = "Scissors";
    }
    else if (user == 1){
      ustring = "Rock";
    }
    else {
      ustring = "Paper";
    }
    if (computer == 0){
      cstring = "Scissors";
    }
    else if (computer == 1){
      cstring = "Rock";
    }
    else {
      cstring = "Paper";
    }

    if (fin == 0){
      printf("The computer is %s, you are %s, it is a tie!\n", cstring.c_str(), ustring.c_str());
    }
    else if (fin == -1 || fin == 2){
      printf("The computer is %s, you are %s, you lose!\n", cstring.c_str(), ustring.c_str());
    }
    else if (fin == 1 || fin == -2){
      printf("The computer is %s, you are %s, you won!\n", cstring.c_str(), ustring.c_str());
    }
  }
  else {
    cout << "Invalid number!\n";
  }
  return 0;
}
