/**
 * @file Employee.h
 * @author Jesse Warren
 * @date 2023-11-16
 * @brief Holds the employee class.
 * 
 * Holds the definitons of functions and variables that are used wtihin the Employee.cpp file. 
 */

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

class Employee {
 private:
  int ID; //employee ID
  int years; //Number of years a employee has worked

 protected:
  double hourlyRate; //Pay rate for a employee
  float hoursWorked; //Number of hours worked within a given pay-period.

 public:
  virtual void print();
  /* Description
        A print function that shows the gathered data on employees
  */
  virtual double calculatePay();
  /* Description
        Returns the hourly-based pay of the employee.
  */
  void anniversary();
  /* Description
        Congratulates the work on working at the company for yet another year.
  */
  Employee();
  /* Description
        Constructor that sets all variables within public and protected equal to -1. 
  */
  Employee(int ID, int years, double hourlyRate, float hoursWorked);
  /* Description
        Copy constructor that will copy over the parameters to the coresponding class variables.
  */
};

#endif //EMPLOYEE_H
