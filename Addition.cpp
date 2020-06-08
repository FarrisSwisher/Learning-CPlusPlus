#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
  int num1, num2, answer;

  srand(time(0));
  num1 = rand() % 10;
  num2 = rand() % 10;

  printf("What is %d + %d? ", num1, num2);
  cin >> answer;

  while(answer != num1+num2){
    cout << "Incorrect, try again!\n"
    printf("What is %d + %d? ", num1, num2);
    cin >> answer;
  }

  cout << "Congrats! That's correct!\n"

  return 0;
}
