// Q5. Employee Record using Constant Object
// Create an Employee class with employeeId, name, and salary. Implement a default constructor, parameterized constructor, and copy constructor. Make display() a const member function. In main(), create a const Employee object and display its details. Also create another Employee object using the copy constructor. Add a salary update function and show, as a commented statement, that it cannot be called using the const object.
#include <iostream>
using namespace std;

class Employee {
    public:
    int employeeId;
    string name;
    float salary;

    Employee(){
        employeeId = 0;
        name = "Unknown";
        salary = 0;
    }

    Employee(int id, string n, float s){
        employeeId = id;
        name = n;
        salary = s;
    }

    Employee(const Employee &e){
        employeeId = e.employeeId;
        name = e.name;
        salary = e.salary;
    }

    void display() const {
        cout<<"Employee ID: "<<employeeId<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Salary: "<<salary<<endl;
    }

    void updateSalary(float newSalary){
        salary = newSalary;
    }
};
int main(){

    const Employee e1(101, "Amaan Ansari", 50000);
    e1.display();

    cout<<endl<<"Copied Employee:"<<endl;
    Employee e2(e1);
    e2.display();

    // e1.updateSalary(60000);   // Error: cannot call a non-const function on a const object

    return 0;
}