/**
 * @file Supervisor.h
 * @author Jesse Warren
 * @date 2023-11-16
 * @brief Holds the Supervisor class.
 * 
 * Holds the class, as well as the definitions for the functions and variables that are used within Supervisor.cpp.
 */

#ifndef SUPERVISOR_H
#define SUPERVISOR_H

#Include "Employee.h"

class Supervisor : public Employee {
 private:
  int numSupervised;
  /* Description:
        Holds the number of people that were supervised.
  */
 public:
  void print();
  /* Description:
        Prints the given data that can be used in the main function.
  */
  double calculatePay();
  /* Description:
        Returns the pay, which is based off the number of those supervised. 
  */
  Supervisor();
  /* Description:
        Constructor sets numSupervised equal to -1.
  */
  Supervisor(int ID, int years, double hourlyRate, float hoursWorked, int numSupervised);
  /* Description:
        Copy constructor that takes data and sets the parameter of numSupervised equal to the one within private.
  */
};

#endif //SUPERVISOR_H
