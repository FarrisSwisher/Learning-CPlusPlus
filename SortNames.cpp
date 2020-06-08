/*Course: CSCI 259, Section 2
Student Name: Farris Fisher
Student ID: 10548933
Lab 4 in class
DueDate: 03/26/19
In keeping with the Honor Code of UM, I have neither
given nor received assistance from anyone other than the instructor.

Program Description: this program takes in three names from the user and
  sorts and prints them in alphabetical order, then prints the last alphabetical
  name 3 times
*/

#include <iostream>
#include <string>
using namespace std;

int main(){
  //declare variables, prompt user for names
  string name1, name2, name3, temp;
  cout << "Enter three names, separated by a space: ";
  cin >> name1 >> name2 >> name3;

  //decide if the names are in order, sort if they are not
  while (!(name1.at(0) < name2.at(0) && name2.at(0) < name3.at(0))){
    if (name1.at(0) > name2.at(0)){
      temp = name1;
      name1 = name2;
      name2 = temp;
    }
    if (name2.at(0) > name3.at(0)){
      temp = name2;
      name2 = name3;
      name3 = temp;
    }
  }

  //output
  printf("The three names in ascending order: %s %s %s\n", name1.c_str(), \
  name2.c_str(), name3.c_str());
  printf("Print the alphabetically last name three times: ");
  for (int i = 0; i<3; i++){
    printf("%s ", name3.c_str());
  }
  printf("\n");


  return 0;
}
