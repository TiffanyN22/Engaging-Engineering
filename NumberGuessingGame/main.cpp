/**
 * @author: Tiffany
 * 
 * This number guessing game was part of Engaging Engineering's 
 * Intro to C++ Workshop.
 * 
 * When running the code, the program is meant to generate a random
 * number between 1 and 100.  From there, it will have the user guess numbers
 * until they land on the correct number, letting the user know if the number they
 * guessed was too high or low.  Once the user guesses the correct number,
 * the program will tell the user how many tries it.
 * Randomly generate a random number between 1-100.
 */


#include <iostream>
#include <stdlib.h>
#include <time.h> 

using namespace std;

int main(){
  srand (time(NULL));

  int randNumber = rand() % 101;
  int guess;
  int numOfGuess = 0;

  do{
    numOfGuess++;
    cout << "Guess a number: ";
    cin >> guess;
    if (guess > randNumber){
      cout << "the number is lower!" << endl;
    }
    else if (guess < randNumber){
      cout << "the number is higher!" << endl;
    }
  } while (guess != randNumber);

  cout << endl << "Congratulations!  " << endl;
  cout << "It took you " << numOfGuess << " tries." << endl;
}