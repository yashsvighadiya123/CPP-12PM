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

    
    void setDesignation(const string& empDesignation) {
        designation = empDesignation;
    }

    string getName() const {
        return name;
    }

    double getSalary() const {
        return salary;
    }

    string getDesignation() const {
        return designation;
    }
};

main() {
    Employee emp;

    emp.setName("Alice Smith");
    emp.setSalary(72000);
    emp.setDesignation("Project Manager");

    cout << "Employee Details:" << endl;
    cout << "Name: " << emp.getName() << endl;
    cout << "Salary: $" << emp.getSalary() << endl;
    cout << "Designation: " << emp.getDesignation() << endl;
       
}

