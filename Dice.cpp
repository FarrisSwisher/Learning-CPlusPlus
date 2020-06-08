/*Course: CSCI 259, Section 2
Student Name: Farris Fisher
Program 4
DueDate: 03/26/19
In keeping with the Honor Code of UM, I have neither
given nor received assistance from anyone other than the instructor.

Program Description: This program simulates a simple game of dice between the
  cpu and the user in which a die will be rolled for each player over the course
  of 10 rounds. The player with the highest rolled number wins the round and if
  the dice roll the same number, the round is a draw.
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
  //declare variables, start random generator
  int cpu, user, cwins, uwins;
  cwins = 0;
  uwins = 0;
  srand(time(0));

  //play 10 rounds of dice
  for (int i=0; i<10; i++){
    cpu = rand() % 7;
    user = rand() % 7;

    //decision tree to decide who wins each round
    if (cpu > user){
      cwins++;
      printf("Round %d: Computer Wins!\n", i+1);
    } else if (user > cpu){
      uwins++;
      printf("Round %d: You Win!\n", i+1);
    } else{
      printf("Round %d: It's a tie!\n", i+1);
    }
  }

  //decide and output overall winner
  if (uwins > cwins){
    printf("\nYou won %d times, the CPU won %d times, you are the GRAND Winner!\n\
", uwins, cwins);
  } else if (uwins < cwins){
    printf("\nYou won %d times, the CPU won %d times, the CPU wins!\n\
", uwins, cwins);
  } else {
    printf("\nYou won %d times, the CPU won %d times, it's a tie!\n", uwins, cwins);
  }


  return 0;
}
