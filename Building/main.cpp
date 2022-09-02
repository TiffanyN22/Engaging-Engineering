/**
 * @author: Tiffany
 * 
 * This building + address class was part of Engaging Engineering's 
 * Intermediate C++ Workshop.
 */

#include <iostream>
#include "Address.h"
#include "Building.h"
using namespace std;

int main() {
  Address homeAddress(123, "Main Street", "San Francisco", "California", "USA", 98765);
  Address workAddress(456, "5th Avenue", "San Francisco", "California", "USA", 98760);

  Building home(3,2,1,1,1,homeAddress);
  
  Building work(workAddress);
  work.setBathrooms(4);
  work.setOffices(15);
  work.setLivingRooms(1);

  cout << "Home Info: " << endl;
  home.printBuildingInfo();
  cout << "Work Info: " << endl;
  work.printBuildingInfo();
}



