#include<bits/stdc++.h>
using namespace std;

class Product {
private: // access modifier 1. public 2. private 3. protected
    string name;
    string desc;
    int price;
    float discount;

    
public:
    void set_name(string name) {
        this->name = name;
    }    
    void set_desc(string d) {
        desc = d;
    }  
    void set_price(int p) {
        if(p <= 0) {
            cout<<"Invalid price";
            return;
        }
        price = p;
    }  
    void set_discount(int d) {
        discount = d;
    }
    void display() {
        cout<<"Name: "<<name<<"\n"<<"Desc: "<<desc<<"\n"<<"Price "<<price<<"\n";
    }

    Product* get_address() {
        cout<<sizeof(this)<<"\n";
        return this;
    }
};

int main(int argc, char const *argv[]) {
    Product iphone;
    iphone.set_name("I Phone 12");
    iphone.set_desc("Lorem ipsum");
    iphone.set_price(100000);
    iphone.set_discount(10.0);
    iphone.display();

    cout<<&iphone<<"\n";
    cout<<iphone.get_address()<<"\n";
 
    return 0;
}
