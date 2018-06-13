#include<iostream>
using namespace  std;

class A
{
    int data;
public:
    A(int a) {
        data = a;
    }

    void display()
    {
        cout << data << endl;
    }
};

class SmartPtr 
{
    A *ptr;

public:
    SmartPtr(A *p = NULL) {
        ptr = p;
    }

    ~SmartPtr() {
        delete ptr;
    }

    A& operator *() {
        return *ptr;
    }
    
    A* operator->() {
        return ptr;
    }
};
int main()
{
    SmartPtr ptr1();
    *ptr1 = 20;
    cout << *ptr1;
    
    SmartPtr ptr(new A(4));
    ptr->display();
}
