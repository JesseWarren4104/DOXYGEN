/**
 * @file Supervisor.cpp
 * @author Jesse Warren
 * @date 2023-11-16
 * @brief File that holds the functions for the supervisor class.
 * 
 * This file holds the actual implementations and code for the function definitions that are held within the Supervisor.h class file.
 */

#include "Supervisor.h"
#include <iostream>

using namespace std;

Supervisor::Supervisor() {
  //Constructor that initializes the Supervisor variable 'numSupervised' equal to -1.
  numSupervised = -1;
}

Supervisor::Supervisor(int ID, int years, double hourlyRate, float hoursWorked, int numSupervised) : Employee(ID, years, hourlyRate, hoursWorked) {
  //Copies data from the parameter.
  this->numSupervised = numSupervised;
}

void Supervisor::print() {
  //Calls the number of employees and sets the number supervised below it.
  Employee::print();
  cout << " Number Supervised: " << numSupervised << endl;
}

double Supervisor::calculatePay() {
  //Calls the employee pay and calculates the pay for the supervisor based off it.
  double val = Employee::calculatePay();
  val = val + val * (.01 * numSupervised);
  return val;
}
