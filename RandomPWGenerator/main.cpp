/**
 * @author: Tiffany
 * 
 * This random password generator was part of Engaging 
 * Engineering's Intro to C++ Workshop.
 * 
 */

#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

int main() {  
  const int NUM_OF_LETTERS = 26;
  char letters[NUM_OF_LETTERS] = {'a', 'b', 'c', 'd', 'e',  'f', 'g', 'h', 'i', 'j', 
                                  'k', 'l','m', 'n', 'o', 'p', 'q', 'r', 's', 't', 
                                  'u', 'v', 'w', 'x', 'y', 'x'};

  const int PASSWORD_LENGTH = 15;
  string password = "";
  srand (time(NULL));
  for(int i = 0; i < PASSWORD_LENGTH; i++){
    password+=letters[rand() % NUM_OF_LETTERS];
  }
  cout << password << endl;
}