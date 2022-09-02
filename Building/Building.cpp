#include <iostream>
#include "Address.h"
#include "Building.h"

Building::Building(Address _address){
  address = _address;

  //default values
  numOfBedrooms = 0;
  numOfBathrooms = 0;
  numOfOffices = 0;
  numOfKitchens = 0;
  numOfLivingRooms = 0;
}

Building:: Building(int _numOfBedrooms, int _numOfBathrooms, int _numOfOffices, int _numOfKitchens, int _numOfLivingRooms, Address _address){
  numOfBedrooms = _numOfBedrooms;
  numOfBathrooms = _numOfBathrooms;
  numOfOffices = _numOfOffices;
  numOfKitchens = _numOfKitchens;
  numOfLivingRooms = _numOfLivingRooms;
  address = _address;
}

//ACCESSOR METHODS
int Building::getBedrooms(){
  return numOfBedrooms;
}

int Building::getBathrooms(){
  return numOfBathrooms;
}
int Building::getOffices(){
  return numOfOffices;
}
int Building::getKitchens(){
  return numOfKitchens;
}
int Building::getLivingRooms(){
  return numOfLivingRooms;
}

void Building::printBuildingInfo(){
  cout << " Bedrooms: " << numOfBedrooms << endl;
  cout << " Bathhrooms: " << numOfBathrooms << endl;
  cout << " Offices: " << numOfOffices << endl;
  cout << " Kitchens: " << numOfKitchens << endl;
  cout << " Living Room: " << numOfLivingRooms << endl;
  cout << " Address: " << address.getAddress() << endl;
}

//MUTATOR METHODS
void Building::setBedrooms(int bedroomNum){
  numOfBedrooms = bedroomNum;
}
void Building::setBathrooms(int bathroomNum){
  numOfBathrooms = bathroomNum;
}
void Building::setOffices(int officeNum){
  numOfOffices = officeNum;
}
void Building::setKitchens(int kitchenNum){
  numOfKitchens = kitchenNum;
}
void Building::setLivingRooms(int livingRoomNum){
  numOfLivingRooms = livingRoomNum;
}

