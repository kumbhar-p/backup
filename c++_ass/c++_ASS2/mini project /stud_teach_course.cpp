#include"_header.h"
//student
student::student(char *str, char *str1, int a , char *str2, char *str3) : FirstName(str), LastName(str1), Age(a), Address(str2),City(str3) {
    }
void student::SitInClass() {
    cout << "Sitting at front of class" << endl;
}
//teacher
teacher::teacher(char *str, char *str1, int a , char *str2, char *str3) : FirstName(str), LastName(str1), Age(a), Address(str2),City(str3) {
    
    }
void teacher::GradeStudent() {
    cout << "student graded" << endl;
}

void teacher::SitInClass() {
    cout << "Sitting in main theater" << endl;
}

//course
course::course (char *str, student s1, student s2, student s3, teacher t) {
        strcpy(name, str);
        s[0] = s1;
        s[1] = s2;
        s[3] = s3;
        t1 = t;
 }

void course::name_of_course() {
        cout << name << endl;
}



