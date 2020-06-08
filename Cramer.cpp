/* Course: CSCI 259, Section 2
 Student Name: Farris Fisher
 Lab 1 in class
 Due Date: 02/05/19

 In keeping with the Honor Code of UM, I have neither
 given nor received assistance from anyone other than the instructor.

 Program Description:
 This program is designed to use Cramer's rule to solve 2x2 system of linear
 equations.
*/

#include <iostream>
using namespace std;

int main(){
  //Create variables a-f, x & y (all double values)
  double a, b, c, d, e, f, x, y;

  //prompt user for each value a-f and input each value
  cout << "Welcome User!\nPlease enter value for a: ";
  cin >> a;
  cout << "For b: ";
  cin >> b;
  cout << "For c: ";
  cin >> c;
  cout << "For d: ";
  cin >> d;
  cout << "For e: ";
  cin >> e;
  cout << "For f: ";
  cin >> f;

  //calculate x & y
  x = (e*d - b*f)/(a*d - b*c);
  y = (a*f - e*c)/(a*d - b*c);

  //output original equations
  cout << "\n\nIn the following equations: \n";
  cout << a << "x + " << b << "y = " << e << endl;
  cout << c << "x + " << d << "y = " << f << endl;

  //output x and y
  cout << "x = " << x << endl;
  cout << "y = " << y << endl;


  return 0;
}
