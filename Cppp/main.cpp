#include <iostream>
#include "Student.cpp"
using namespace std;

int main()
{
    Student *s = new Student("Tung", "Nam", 2000);
    s->display();
    return 0;
}