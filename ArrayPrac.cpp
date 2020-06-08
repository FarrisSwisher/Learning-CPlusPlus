#include <iostream>
using namespace std;

double maxAmt(double[]);
double minAmt(double[]);

int main(){
  double rain[12];
  double sum = 0;

  cout << "Enter rainfall amounts for 12 months: ";
  for (int i = 0; i < 12; i++){
    cin >> rain[i];
    sum += rain[i];
  }

  double avg = sum / 12;

  int countAbove = 0;
  for (int i = 0; i < 10; i++){
    if (intArray[i] > avg)
      countAbove++;
  }

  printf("There are %d integers in the array above the average value\n",countAbove);

  return 0;
}

double maxAmt(double array[]){
  double key = array[0];
  for (int i = 0; i < array.size(); i++){
    if (key < array[i])
      key = array[i];
  }

  return key;
}

double minAmt(double array[]){
  double key = array[0];
  for (int i = 0; i < array.size(); i++){
    if (key > array[i])
      key = array[i];
  }

  return key;
}
