/*
ii. Which feature of Object Oriented Programming is demonstrated using
Function 1, Function 2, Function 3 and Function 4 together in the above class
Test?
ans - default constructor, parameterised constructor
*/

/*
 i. Write statements in C++ that would execute Function 1, Function 2,
 Function 3 and Function 4 of class Test.
*/

#include<iostream>
#include<string.h>
using namespace std;

class Test
{
    char paper[20];
    int marks;
    public:
    Test ()    // Function 1
    {
        strcpy (paper, "Computer");
        marks = 0;
        cout << "Default constructor" << endl;
    }

    Test (char p[])    // Function 2
    {
        strcpy(paper, p);
        marks = 0;
        cout << "parameterised constructor" << endl;
    }

    Test (int m)    // Function 3
    {
        strcpy(paper,"Computer");
        marks = m;
        cout << "parameterised constructor" << endl;
    }

    Test (char p[], int m)    // Function 4
    {
        strcpy (paper, p);
        marks = m;
        cout << "parameterised constructor" << endl;
    } 
};

int main()
{
    char arr[10] = "Hello";
    Test t;
    Test t1(arr);
    Test t2(10);
    Test t3(arr, 10);

}
