#include <iostream>
#include "Student.cpp"
#include "Teacher.cpp"  
using namespace std;

int main()
{
    Student *s = new Student("Tung", "Nam", 2000);
    s->display();


    Teacher *t = new Teacher("Hanh" , "Nu" , 2500) ; 
    t->display(); 
    return 0;
}   