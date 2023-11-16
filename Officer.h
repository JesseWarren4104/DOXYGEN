/**
 * @file Officer.h
 * @author Jesse Warren
 * @date 2023-11-16
 * @brief Holds the Officer class.
 * 
 * Holds the functions and variables that are used in Officer.cpp, as well as the class itself.
 */

#ifndef OFFICER_H
#define OFFICER_H

#include "Employee.h"

class Officer : public Employee {
 private:
  double evilness; //Holds the 'evilness' data on a given officer.
 public:
  void print();
  /* Description
        Prints the evilness for a corresponding officer.
  */
  double calculatePay();
  /* Description
        Returns the pay for a given officer.
  */
  Officer();
  /* Description
        Constructor that sets the officer's evilness to 500 on default.
  */
  Officer(int ID, int years, double hourlyRate, float hoursWorked, double evilness);
  /* Description
        Copy constructor that copies over the officer's evilness from the parameters.
  */
};

#endif //OFFICER_H
