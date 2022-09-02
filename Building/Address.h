#ifndef ADDRESS_H
#define ADDRESS_H

#include <iostream>
using namespace std;

class Address{
  public:
    Address(){};
    Address(int _addressNum, string _street, string _city, string _state, string _country, int _zipCode);
    ~Address(){}
    string getAddress();
  private:
    int addressNum;
    string street;
    string city;
    string state;
    string country;
    int zipCode;
};

#endif

