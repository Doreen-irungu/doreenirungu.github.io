/*ENCAPSULATION
Author: Doreen Irungu
Registration:BSE-05-0153/2024
Date:10/02/2025
*/

#include <iostream>
#include <string>

class Employee {
private:
    std::string name;
    double salary;

public:
    Employee(std::string name) : name(name), salary(0.0) {} // Constructor

    std::string getName() const { return name; } // Getter for name
    double getSalary() const { return salary; } // Getter for salary

    void setSalary(double salary) {  // Setter for salary (with validation)
        if (salary >= 0) {
            this->salary = salary;
        } else {
            std::cout << "Invalid salary." << std::endl;
        }
    }

    void displayInfo() const {
        std::cout << "Name: " << name << ", Salary: $" << salary << std::endl;
    }
};

int main() {
    Employee emp1("Alice");
    emp1.setSalary(50000); // Set a valid salary
    emp1.displayInfo();

    Employee emp2("Bob");
    emp2.setSalary(-1000); // Try to set an invalid salary
    emp2.displayInfo(); // Salary will remain 0.0

    std::cout << "Bob's name: " << emp2.getName() << std::endl; // Accessing name

    return 0;
}
