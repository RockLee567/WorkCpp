#include <iostream>
using namespace std;

class Teacher
{
private:
    int salary;
    string name;
    string gender;   

public:
    Teacher()
    {
        
    }
    Teacher(string name, string gender, int salary)
    {
        this->name = name;
        this->gender = gender;
        this->salary = salary;
    }
    void setSalary(int salary)
    {
        this->salary = salary;
    }
    int getSalary()
    {
        return salary;
    }
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Gender: " << gender << endl;
        cout << "Salary: " << salary << endl;
    }
};