#include <iostream>
/*1. Define a class Person with instance members name and age. Also define member
functions setName(), setAge(), getName(), getAge(). Now define class Employee by
inheriting Person class. In the Employee class define empid and salary as instance
members. Also define setEmpid, setSalary, getEmpid, getSalary.
*/
#include <cstring>
using namespace std;
class person
{
protected:
    char name[20];
    int age;

public:
    void setName(const char *n)
    {
        strcpy(name, n);
    }
    void setAge(int a)
    {
        age = a;
    }
    char *getName()
    {
        return name;
    }
    int getAge()
    {
        return age;
    }
};

class Employee : public person
{
protected:
    int empid;
    int salary;

public:
    void setEmpid(int id)
    {
        empid = id;
    }
    void setSalary(int s)
    {
        salary = s;
    }
    int getEmpid()
    {
        return empid;
    }
    int getSalary()
    {
        return salary;
    }

    void display()
    {
        cout << " name  : " << name << "\n"
             << " age   : " << age << "\n"
             << " empid : " << empid << "\n"
             << " salary: " << salary << "\n";
    }
};

int main()
{
    Employee e; 
    e.setName("fayaz");
    e.setAge(21);
    e.setEmpid(14);
    e.setSalary(45000);
    e.getEmpid();
    e.getSalary();
    cout << "Employee details :\n\n";
    e.display();
    return 0;
}
