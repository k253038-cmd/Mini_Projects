#include <iostream>
#include <string>
using namespace std;

// Base class
class Employee {
protected:
    string name;
    double salary;

public:
    // Constructor
    Employee(string n, double s) {
        name = n;
        salary = s;
    }
};

// Derived class
class Manager : public Employee {
private:
    string department;

public:
    // Constructor
    Manager(string n, double s, string d) : Employee(n, s) {
        department = d;
    }

    // Function to display manager details
    void displayManager() {
        cout << "Manager Details:" << endl;
        cout << "Name: " << name << endl;
        cout << "Salary: $" << salary << endl;
        cout << "Department: " << department << endl;
    }
};

int main() {
    // Create Manager object
    Manager mgr("Alice Johnson", 90000, "IT");

    // Display manager details
    mgr.displayManager();

    return 0;
}

