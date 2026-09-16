// Q6. Student Result Analysis using Friend Class
// Create a StudentResult class with private data members rollNo, name, and marks of three subjects. Use a parameterized constructor to initialize the object. Declare ResultAnalyzer as a friend class. The ResultAnalyzer class should calculate and display total marks, percentage, and pass/fail result. Also maintain a static data member totalStudents and a static function to display how many StudentResult objects have been created. Add a destructor that displays a message when an object is destroyed.
 #include <iostream>
using namespace std;

class ResultAnalyzer;

class StudentResult {
    private:
    int rollNo;
    string name;
    int marks1, marks2, marks3;
    static int totalStudents;

    public:
    StudentResult(int roll, string n, int m1, int m2, int m3){
        rollNo = roll;
        name = n;
        marks1 = m1;
        marks2 = m2;
        marks3 = m3;
        totalStudents++;
    }

    ~StudentResult(){
        cout<<name<<"'s record has been destroyed."<<endl;
    }

    static void showTotalStudents(){
        cout<<"Total Students Created: "<<totalStudents<<endl;
    }

    friend class ResultAnalyzer;
};

int StudentResult::totalStudents = 0;

class ResultAnalyzer {
    public:
    void analyze(StudentResult &s){
        int total = s.marks1 + s.marks2 + s.marks3;
        float percentage = total / 3.0;

        cout<<"Roll No: "<<s.rollNo<<endl;
        cout<<"Name: "<<s.name<<endl;
        cout<<"Total Marks: "<<total<<endl;
        cout<<"Percentage: "<<percentage<<endl;

        if(percentage >= 33){
            cout<<"Result: Pass"<<endl;
        }
        else{
            cout<<"Result: Fail"<<endl;
        }
    }
};

int main(){

    StudentResult s1(1, "Amaan Ansari", 85, 78, 90);

    ResultAnalyzer analyzer;
    analyzer.analyze(s1);

    cout<<endl;
    StudentResult::showTotalStudents();

    return 0;
}