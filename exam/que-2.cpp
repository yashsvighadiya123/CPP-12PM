#include <iostream>
using namespace std;
   class Employee {
    private:
		    string name;
		    double salary;
		    string designation;

public:
   void setName(const string& empName) {
        name = empName;
    }

    
    void setSalary(double empSalary) {
        if (empSalary >= 0)
            salary = empSalary;
        else
            cout << "Invalid salary! Salary must be non-negative." << endl;
    }

    // Setter for designation
    void setDesignation(const string& empDesignation) {
        designation = empDesignation;
    }

    // Getter for name
    string getName() const {
        return name;
    }

    // Getter for salary
    double getSalary() const {
        return salary;
    }

    // Getter for designation
    string getDesignation() const {
        return designation;
    }
};

// Main function to demonstrate encapsulation
int main() {
    Employee emp;

    emp.setName("Alice Smith");
    emp.setSalary(72000);
    emp.setDesignation("Project Manager");

    cout << "Employee Details:" << endl;
    cout << "Name: " << emp.getName() << endl;
    cout << "Salary: $" << emp.getSalary() << endl;
    cout << "Designation: " << emp.getDesignation() << endl;

    
}

