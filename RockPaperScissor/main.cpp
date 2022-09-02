/**
 * @author: Tiffany
 * Acknowledgement: This project adapted and simplified code taken from
 * https://github.com/coding-horror/basic-computer-games/blob/main/74_Rock_Scissors_Paper/java/src/RockScissors.java
 * 
 * This game of rock paper scissors was part of Engaging Engineering's 
 * Intermediate C++ Workshop.
 * 
 * 
 */

#include <iostream>
#include <stdlib.h>

#define ROCK 1
#define PAPER 2
#define SCISSOR 3

using namespace std;
int main() {
  int userSelection = 0;

  do{
    cout << "Options: " << endl;
    cout << " 1 - rock" << endl;
    cout << " 2 - paper" << endl;
    cout << " 3 - scissors" << endl;
    cout << "Enter selection: ";
    cin >> userSelection;
  } while(userSelection < 1 || userSelection > 3);

  srand (time(NULL));
  int computerSelection = rand() % 3 + 1;

  if (computerSelection == ROCK)
    cout << "Computer selected rock" << endl;
  else if (computerSelection == PAPER)
    cout << "Computer selected paper" << endl;
  else if (computerSelection == SCISSOR)
    cout << "Computer selected scissor" << endl;
  else  //shouldn't happen
    cout << "Computer selected " <<  computerSelection << endl;
  
  if(userSelection == computerSelection){
    cout << "It's a tie!" << endl;
  } else{
    switch (userSelection){
      case ROCK:
        if(computerSelection == PAPER){
          cout << "Computer wins!" << endl;
        } else{
          cout << "Congratulation - you win!" << endl;
        }
        break;
      case PAPER:
        if(computerSelection == SCISSOR){
          cout << "Computer wins!" << endl;
        } else{
          cout << "Congratulation - you win!" << endl;
        }
        break;
      case SCISSOR:
        if(computerSelection == ROCK){
          cout << "Computer wins!" << endl;
        } else{
          cout << "Congratulation - you win!" << endl;
        }
        break;
    }
  }
}


