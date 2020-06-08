#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
  int num1, num2, answer;
  int count = 0;
  int correctCount = 0;

  while (count < 5){
    srand(time(0));
    num1 = rand() % 10;
    num2 = rand() % 10;

    //swap numbers if num1<num2
    if (num1 < num2){
      int temp = num1;
      num1 = num2;
      num2 = temp;
    }


    printf("What is %d - %d? ", num1, num2);
    cin >> answer;

    if (answer == num1-num2)
      correctCount++;

    count++;
  }

  printf("You got %d questions correct out of 5!", correctCount);
  
  return 0;
}
