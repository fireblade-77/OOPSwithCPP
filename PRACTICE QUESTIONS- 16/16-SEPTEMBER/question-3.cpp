// Q3. Hospital Active Patient Counter
// Create a Patient class with patientId and patientName. Use a static data member activePatients to store the number of currently active Patient objects. Increase the count in the constructor and decrease it in the destructor. Add a static member function showActivePatients() to display the current count. Use a local block in main() to show how the count changes when an object is destroyed
#include <iostream>
using namespace std;

class Patient {
    public:
    int patientId;
    string patientName;
    static int activePatients;

    Patient(int id, string name){
        patientId = id;
        patientName = name;
        activePatients++;
    }

    ~Patient(){
        activePatients--;
    }

    static void showActivePatients(){
        cout<<"Active Patients: "<<activePatients<<endl;
    }
};

int Patient::activePatients = 0;

int main(){

    Patient p1(1, "Amaan Ansari");
    Patient::showActivePatients();

    {
        Patient p2(2, "Rohit Sharma");
        cout<<"Inside local block:"<<endl;
        Patient::showActivePatients();
    }

    cout<<"After local block ends:"<<endl;
    Patient::showActivePatients();

    return 0;
}