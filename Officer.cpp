/**
 * @file Officer.cpp
 * @author Jesse Warren
 * @date 2023-11-16
 * @brief Function implementation for the officer class.
 * 
 * Holds the actual code and usage of the functions within the Officer class, that is in the Officer.h file.
 */

#include "Officer.h"
#include <iostream>

using namespace std;

Officer::Officer() {
  evilness = 500;
}

Officer::Officer(int ID, int years, double hourlyRate, float hoursWorked, double evilness) : Employee(ID, years, hourlyRate, hoursWorked) {
  //Copies over the parameter's evilness and sets it equal to the one in the Officer class.
  this->evilness = evilness;
}

void Officer::print() {
  //Prints the evilness for a officer.
  Employee::print();
  cout << " Evilness: " << evilness << endl;
}

double Officer::calculatePay() {
  return (hourlyRate + evilness) * hoursWorked;
}
