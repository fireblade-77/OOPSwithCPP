// Q2. Bank Account Audit using Friend Function
// Create a BankAccount class with private data members accountNumber, customerName, and balance. Initialize the values using a constructor. Write a friend function compareBalance() that accepts two BankAccount objects and displays the account holder with the higher balance. The function should not modify either object.
#include <iostream>
using namespace std;

class BankAccount {
    private:
    int accountNumber;
    string customerName;
    float balance;

    public:
    BankAccount(int accNo, string name, float bal){
        accountNumber = accNo;
        customerName = name;
        balance = bal;
    }

    friend void compareBalance(const BankAccount &a, const BankAccount &b);
};

void compareBalance(const BankAccount &a, const BankAccount &b){
    if(a.balance >= b.balance){
        cout<<a.customerName<<" has the higher balance."<<endl;
    }
    else{
        cout<<b.customerName<<" has the higher balance."<<endl;
    }
}

int main(){

    BankAccount acc1(101, "Amaan Ansari", 50000);
    BankAccount acc2(102, "Rohit Sharma", 75000);

    compareBalance(acc1, acc2);

    return 0;
}