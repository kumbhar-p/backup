#include<iostream>
using namespace std;

class complex_num {
    float real;
    float imag;

    public:
        void getvalue();
        void display();   
        complex_num operator+(complex_num const &obj1) {
            complex_num temp;
            temp.real = real + obj1.real;
            temp.imag = imag + obj1.imag;
            return temp;
        } 
        complex_num operator-(complex_num const &obj) {
            complex_num temp;
            temp.real = real - obj.real;
            temp.imag = imag - obj.imag;
            return temp;
        }

};      

void complex_num::getvalue() {
    cout << "Enter 2 numbers" << endl;
    cin >> real >> imag;
}

void complex_num::display() { 
    cout << real << "+i" << imag << endl;
}

int main()
{
    complex_num obj1;
    complex_num obj2;
    complex_num res;

    obj1.getvalue();
    obj1.display();
    obj2.getvalue();
    obj2.display();
    res = obj1 + obj2;
    cout << "Addition is ";
    res.display();
    res = obj1 - obj2;
    cout << "Substraction is ";
    res.display();
}


