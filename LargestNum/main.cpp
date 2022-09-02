/**
 * @author: Tiffany
 * 
 * This project was part of Engaging Engineering's Intro to C++ Workshop.
 * 
 * The code creates an array of integers and finds the largest number
 * within the array, along with its position.
 */


#include <iostream>
using namespace std;

int main() {  
  const int SIZE = 7;
  int nums[SIZE] = {6, 23, 98, 14, 64, 96, 35};
  
  int largest = nums[0];
  int maxPosition = 0;
  for(int i = 0; i < SIZE; i++){
    if(nums[i] > largest){
      largest = nums[i];
      maxPosition  = i;
    }
  }
  cout << "The largest number is " << largest << endl;
  cout << "It is at position " << maxPosition << endl;
}
