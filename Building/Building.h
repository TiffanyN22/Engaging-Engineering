#ifndef BUILDING_H
#define BUILDING_H

#include "Address.h"
class Building{
  public:
    Building(Address _address);
    Building(int _numOfBedrooms, int _numOfBathroom, int _numOfOffices, int _numOfKitchens, int _numOfLivingRooms, Address _address);
    ~Building(){}

    //accessor
    int getBedrooms();
    int getBathrooms();
    int getOffices();
    int getKitchens();
    int getLivingRooms();
    void printBuildingInfo();

    //mutator
    void setBedrooms(int bedroomNum);
    void setBathrooms(int bathroomNum);
    void setOffices(int officeNum);
    void setKitchens(int kitchenNum);
    void setLivingRooms(int livingRoomNum);      

  private:
    int numOfBedrooms;
    int numOfBathrooms;
    int numOfOffices;
    int numOfKitchens;
    int numOfLivingRooms;
    Address address;
};

#endif