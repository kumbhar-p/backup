#include<iostream>
using namespace std;

class Rectangle {

    float length;
    float width;

    public:
        float a;
        void setlength(float);
        void setwidth(float);
        float perimeter();
        float area();
        void show();
        int sameArea(Rectangle,Rectangle); 
};

void Rectangle::setlength(float l) {
    length = l;
}

void Rectangle::setwidth(float w) {
    width = w;
}

float Rectangle::perimeter() {
    return 2*(length+width);
}

float Rectangle::area() {
    a = length * width;
    return a;
}

void Rectangle::show(){
    cout << "length - " << length;
    cout << "width - " << width;
}

int Rectangle::sameArea(Rectangle r, Rectangle r1) {
    if (r.a == r1.a)
        return 1;
    else
        return 0;
}

int main()
{
    Rectangle r;
    Rectangle r1;
    Rectangle r2;
    int l1, w1, l2, w2;
    char ch;
    do {
    cout << "enter len & width of 1st - " << endl;
    cin >> l1 >> w1 ;
    r.setlength(l1);
    r.setwidth(w1);
    cout << "---------First rect----------"<< endl;
    r.show();
    cout << "perimeter - " << r.perimeter() << endl;
    cout << "Area - " << r.area() << endl << endl; 
    
    r1.setlength(5);
    r1.setwidth(18.9);
    cout << "---------second rect----------"<< endl;
    r1.show();
    cout << "perimeter - " << r1.perimeter() << endl;
    cout << "Area - " << r1.area() << endl << endl; 
    if(r2.sameArea(r, r1)) {
        cout << "Area of both rect is same" << endl;
        cout << "area of 1st rect - " << r.a << endl << "area of 2nd rect is - " << r1.a << endl;
    }   
    else {
        cout << "Area of both rect Different" << endl;
        cout << "area of 1st rect - " << r.a << endl << "area of 2nd rect is - " << r1.a << endl;
    }

    cout << "do u want to continue-";
    cin >>  ch;
    }while( ch == 'y' || ch == 'Y' );
}    
    
