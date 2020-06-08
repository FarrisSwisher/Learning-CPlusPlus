#include <iostream>
using namespace std;

int main(){

  int num;
  int total = 0, count = 0;
  cout << "Enter a positive integer: ";
  cin >> num;

  while (num > -1){
    total += num;
    count ++;
    cout << "Enter a positive integer: ";
    cin >> num;
  }

  double average = (double)total / count;
  printf("The average of %d values is %.2f", count, average);

  return 0;
}
