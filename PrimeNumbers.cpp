/*Course: CSCI 259, Section 2
Student Name: Farris Fisher
Student ID:10548933
Program 5
DueDate: 4/16/19
In keeping with the Honor Code of UM, I have neither
given nor received assistance from anyone other than the instructor.
Program Description: This function programmatically decides if a number is prime
and outputs all the prime numbers from 1-100
*/

#include <iostream>
using namespace std;

//isPrime prototype
bool isPrime(int);

int main(){
  //initialize count (of prime numbers) and tell user what these numbers mean
  int count = 0;
  cout << "The prime numbers from 1 to 100:\n";

  /*iterate through numbers 1-100 and check if they are prime; print the prime
  numbers*/
  for (int i = 1; i <= 100; i++){
    if (isPrime(i)){
      printf("%d ", i);
      count++;
    }
  }
  printf("\nThere are %d prime numbers\n", count);
  return 0;
}

//isPrime function
bool isPrime(int n){
  if (n <= 1)
    return false;
  for (int i = 2; i*i <= n; i++){
    if (n % i == 0){
      return false;
    }
  }
  return true;
}
