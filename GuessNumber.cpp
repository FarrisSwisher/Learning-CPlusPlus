#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
  int randNum, guessNum;

  srand(time(0));
  randNum = rand() % 100;
  cout << "Guess the random number 1:100: ";
  cin >> guessNum;

  while(guessNum != randNum){
    if (guessNum > randNum)
      cout << "Too high, try again: ";
    else
      cout << "Too low, try again: ";
    cin >> guessNum;
  }

  cout << "Congrats! That's correct!\n"

  return 0;
}
