/**
 * @file Employee.cpp
 * @author Jesse Warren
 * @date 2023-11-16
 * @brief Holds the implementation of functions.
 * 
 * Holds the implementation of the functions defined within the Employee class.
 */

#include "Employee.h"
#include <iostream>

using namespace std;

Employee::Employee() {
  //Sets all class variables equal to -1.
  ID = years = hoursWorked = hourlyRate = -1;
}

Employee::Employee(int ID, int years, double hourlyRate, float hoursWorked) {
  //Copies the parameters to the class variables.
  this->ID = ID;
  this->years = years;
  this->hourlyRate = hourlyRate;
  this->hoursWorked = hoursWorked;
}

void Employee::print() {
  //Prints out the corresponding information for a given employee via usuage of class variables.
  cout << "Printing information for employee " << ID << ":\n Years Employed: " << years
       << "\n Hourly Rate: " << hourlyRate << "\n Hours Worked: " << hoursWorked
       << endl;
}

void Employee::anniversary() {
  //Prints out an anniversary message when called. It also increases the pay of the employee.
  years++;
  hourlyRate = hourlyRate + hourlyRate * .002;
  cout << "Congratulations to employee " << ID << " on " << years << " year(s) at company!"
       << endl;
}

double Employee::calculatePay() {
  return hourlyRate * hoursWorked;
}

