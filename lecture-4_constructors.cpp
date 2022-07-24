// Problem Link - 
/* By Sanket Singh */
#include<bits/stdc++.h>

class Product {
public:
    int price;
    std::string name;

    // default constructor
    Product() {} // not mandatory to write

    // Parameterised constructor
    // Product(int price, std::string name) {
    //     this->price = price;
    //     this->name = name;
    // }

    Product(int p, std::string n) : price(p), name(n) {}   //better practice
 
    Product(std::string name) {
        this->name = name;
    }

    ~Product() {
        std::cout<<"Destructed";
    }
};

int main() {
   

    Product p1; // init in stack
    Product *p2 = new Product; // init in heap
    Product *p3 = new Product(); // init in heap
    Product p4; // init in stack

    Product p5(100000,"Iphone");
    Product *p6 = new Product(40000, "Pixel");

    Product p7("Redmi");

    return 0;
}
