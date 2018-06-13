#include"_header.h"

int main()
{
    char name[20] = "raj";
    char surname[20] = "jaju";
    int age = 22;
    char address[30] = "om shakti layout";
    char city[10] = "bangalore";
    char ans[20];

    student s1(name, surname, age, address, city);
    student s2(name, surname, age, address, city);
    student s3(name, surname, age, address, city);
    teacher t(name, surname, age, address, city);
    
    char c_name[20] = "Intermediate C++";
    course c(c_name, s1, s2, s3, t);
    c.name_of_course();
    t.GradeStudent();

    cout << "Questions\n\n1)What line of code was necessary for you to instantiate a Student object in main()?? (Class Files)\nA)#import \"Student.h\"\nB) #import \"Student.h\"\nC) #include \"Student.h\"\nD) #include \"Student.cpp\"\n\nAns: ";
    cin >> ans;        
    cout << "2) What is output to the console when the SitInClass() method is called on a Teacher object?(Class Scope)\n\nAns: ";
    cin >> ans;
    cout << "3) What would be the value of the member variables of a Student object if you instantation stud1 with the above code? ( Class Instantiation)\nA) All values will be null\nB) Values will be initialized to default values for the data types\nC) All values will be initialized to blank spaces\nD) All values will be initialized to zero\n\nAns: ";
    cin >> ans;
}
