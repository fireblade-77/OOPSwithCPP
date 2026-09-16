// Q4. University and Department using Nested Class
// Create a University class with a private data member universityName. Inside it, create a nested class Department with departmentName and studentCount. Use a constructor to initialize Department objects. Add a function in Department that accepts a University object by reference and displays the university name, department name, and student count. Create the Department object in main() using University::Department.
#include <iostream>
using namespace std;

class University {
    private:
    string universityName;

    public:
    University(string name){
        universityName = name;
    }

    class Department {
        public:
        string departmentName;
        int studentCount;

        Department(string name, int count){
            departmentName = name;
            studentCount = count;
        }

        void display(University &u){
            cout<<"University Name: "<<u.universityName<<endl;
            cout<<"Department Name: "<<departmentName<<endl;
            cout<<"Student Count: "<<studentCount<<endl;
        }
    };
};

int main(){

    University uni("ABES Engineering College");
    University::Department dept("Computer Science", 120);

    dept.display(uni);

    return 0;
}