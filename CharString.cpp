/*Course: CSCI 259, Section 2
Student Name: Farris Fisher
Student ID:10548933
Lab 5 in class
DueDate: 4/16/19
In keeping with the Honor Code of UM, I have neither
given nor received assistance from anyone other than the instructor.
Program Description: This program is designed to take in a string and an index
from the user and then, if that index is valid to the string, return the
character at that index. To do this it uses the function showChar which takes
in the string and the index and returns the character. The function itself does
not check for a valid index so check for validity in the main function.
*/

#include <iostream>
#include <string>
using namespace std;

//showChar prototype
char showChar(string, int);

//main func
int main(){
  string str;
  int index;

  //prompt user for string and index
  cout << "Enter a string: ";
  getline(cin,str);
  cout << "Enter an index: ";
  cin >> index;

  //check if index is valid
  if (index < str.size())
    //if index is valid, call showChar
    printf("The character at index %d in %s is %c\n", index, str.c_str(),\
    showChar(str,index));
  else
    //if index not valid, say so
    cout << "Invalid index!\n";

  return 0;
}

//showChar function.
char showChar(string str, int i){
  return str[i];
}
