#include<iostream>
using namespace std;
class Vehicle
{
     public:
              virtual void ApplyBreaks()
                 {
                          cout<<"Vehicle Break"<<endl;
                            }
              void ApplyHorns()
                   {
                           cout<<"Vehicle Horns"<<endl;
                             }
};

class Truck: public Vehicle
{
     public:
            void ApplyBreaks()
                 {
                         cout<<"Truck Break"<<endl;
                           }
};

class Car:public Vehicle
{
     public:
           void ApplyHorns()
                 {
                         cout<<"Car Horns"<<endl;
                           }
};

int main(void)
{
    Vehicle v;
    cout << sizeof(v) << endl;
    Vehicle *v1 = new Vehicle;
    v1->ApplyBreaks(); //Calls vehicle ApplyBreak
    v1->ApplyHorns(); //Calls vehicle ApplyHorn

    return 0;
}
