/* Course: CSCI 259, Section 2
 Student Name: Farris Fisher
 Student ID: 10548933
 Program 1 Homework
 Due Date: 02/12/19

 In keeping with the Honor Code of UM, I have neither
 given nor received assistance from anyone other than the instructor.

 Program Description:
 This program is designed to accept the lengths of each side of a triangle
 and compute the area of said triangle for output.
*/

#include <iostream>
#include <cmath>
using namespace std;

int main(){
  //declare all variables
  double x, y, z, s, area, areaMetric;

  //prompt user for sides x, y, & z
  cout << "Enter side x in feet: ";
  cin >> x;
  cout << "Enter side y in feet: ";
  cin >> y;
  cout << "Enter side z in feet: ";
  cin >> z;

  s = (x + y + z) / 2;
  area = sqrt( s * (s-x) * (s-y) * (s-z));
  areaMetric = area * pow(0.3048,2);

  cout << "\n\nArea is " << area << " square feet or " << areaMetric\
  << " square meters." << endl;
  return 0;
}
