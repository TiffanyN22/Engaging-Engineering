#include <iostream>
#include "Address.h"
using namespace std;

Address::Address(int _addressNum, string _street, string _city, string _state, string _country, int _zipCode){
  addressNum = _addressNum;
  street = _street;
  city = _city;
  state = _state;
  country = _country;
  zipCode = _zipCode;
}

string Address::getAddress(){
  return to_string(addressNum) + " " + street + " " + city + ", " + state + ", " + to_string(zipCode);
}

