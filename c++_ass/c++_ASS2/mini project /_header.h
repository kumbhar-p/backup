#include<iostream>
#include<string.h>
using namespace std;

class student {

    char *FirstName;
    char *LastName;
    int Age;
    char *Address;
    char *City;
    int len;

    public :

    student() {
    }
   student(char *str, char *str1, int a , char *str2, char *str3);
   void SitInClass();
   
  ~student() {
//        cout << "In student destructor" << endl;
    }

};


class teacher : public student {

    char *FirstName;
    char *LastName;
    int Age;
    char *Address;
    char *City;
    int len;

    public :

    teacher() {
    
    }

    ~teacher() {
  //      cout << "In teacher destructor" << endl;
    }

    void GradeStudent();
    void SitInClass();
    teacher(char *str, char *str1, int a , char *str2, char *str3);
    
    

};


class course {

    char name[20];
    student s[3];
    teacher t1;

    public :
    course (char *str, student s1, student s2, student s3, teacher t);

    void name_of_course();


};

