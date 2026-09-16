// Q1. E-Commerce Product Comparison System
// Create a Product class with productId, name, and price as data members. Use a parameterized constructor to initialize the object. Write a function comparePrice() that takes another Product object as a const reference parameter and returns the Product object with the higher price. Display the details of the returned object.
#include <iostream>
using namespace std;

class Product {
    public:
    int productId;
    string name;
    float price;

    Product(int id, string n, float p){
        productId = id;
        name = n;
        price = p;
    }

    Product comparePrice(const Product &p){
        if(price >= p.price){
            return *this;
        }
        else{
            return p;
        }
    }

    void display(){
        cout<<"Product ID: "<<productId<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Price: "<<price<<endl;
    }
};
int main(){

    Product p1(101, "Laptop", 55000);
    Product p2(102, "Mouse", 500);

    Product result = p1.comparePrice(p2);

    cout<<"Product with Higher Price:"<<endl;
    result.display();

    return 0;
}