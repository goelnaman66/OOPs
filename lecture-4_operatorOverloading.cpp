
#include<bits/stdc++.h>

class Complex {
public:
    int real;
    int img;

    Complex() {}

    Complex(int r, int i) : real(r), img(i) {}

    void display() const {
        std::cout<<this->real<<" + i"<<this->img<<"\n";
    }

    // overloading prefix
    void operator ++() {
        ++this->real;
        ++this->img;
    }

    // overloading postfix
    Complex operator ++(int) {
        Complex temp(this->real, this->img);
        this->real++;
        this->img++;
        return temp;
    }


    // arithmetic operator
    Complex operator + (Complex const &c) {
        return Complex(this->real + c.real, this->img + c.img);
    }

    // comparison operator
    bool operator < (Complex const &c) {
        return this->real < c.real;
    } 

    // assignment operator
    void operator += (Complex const &c) {
        this->real += c.real;
        this->img += c.img;
    }
};




int main(int argc, char const *argv[]) {

    Complex c1(5, 3);
    c1.display();
  
    //prefix overloading
    ++c1;
  
    //postfix overloading
    Complex c2 = c1++;
    c2.display();
    c1.display();
    
    //arithmetic overloading
    Complex c3 = c1 + c2;
    c3.display();

    //comparison overloading
    std::cout<<(c1 < c2)<<"\n";

    //assignment overloading
    c1 += c2;
    c1.display();
    return 0;
}
