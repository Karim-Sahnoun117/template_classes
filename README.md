# Employee Management System

This project is a simple implementation of an employee management system in C++. It leverages templates to allow flexible handling of data types for employee names, IDs, salaries, and working hours. The project is composed of multiple files that define a class hierarchy and a management class to store and display employee information.

## File Structure

### `base.h`
Defines an abstract base class `base` that contains attributes for an employee's name and ID. This class includes a pure virtual method `affiche()` that must be implemented by derived classes.

### `employe.h`
Defines a class `employe` that inherits from `base`. This class adds attributes for salary and working hours and implements the `affiche()` method to display the employee's details.

### `gestion.h`
Defines a class `gestion` that contains a vector of pointers to `employe` objects. This class facilitates storing and displaying information for multiple employees.

### `employe.cpp`
Implements the `affiche()` method for the `employe` class.

### `gestion.cpp`
Implements the `storage()` and `affiche()` methods for the `gestion` class.

### `main.cpp`
Contains the `main()` function demonstrating the usage of the `gestion` and `employe` classes. It creates employees, stores them in a `gestion` object, and displays their information.

