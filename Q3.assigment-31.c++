/*3. Write a C++ program to calculate the percentage of a student using multi-level
inheritance. Accept the marks of three subjects in base class. A class will be derived
from the above mentioned class which includes a function to find the total marks
obtained and another class derived from this class which calculates and displays the
percentage of students.
*/
#include <iostream>
using namespace std;
class student
{
protected:
    int maths;
    int sci;
    int cpp;

public:
    void accept_marks()
    {
        cout << "Student marks details " << endl;
        cout << "-----------------------------------" << endl;
        cout << "Enter maths subject marks " << endl;
        cin >> maths;
        cout << "Enter science subject marks" << endl;
        cin >> sci;
        cout << "Enter c++ programming marks" << endl;
        cin >> cpp;
        cout << "--------------------------------------" << endl;
    }
};
class Total_marks : public student
{
public:
    int total;
    void stu_marks()
    {
        total = maths + sci + cpp;
    }
};
class percentage : public Total_marks
{
protected:
    float percent;

public:
    void stu_percentage()
    {
        percent = total / 3;
    }
    void display()
    {
        cout << "\ntotal marks of 3 subjects is = " << total << endl;
        cout << "\ntotal percentage of subject is = " << percent << "%";
    }
};

int main()
{
    percentage d2;
    d2.accept_marks();
    d2.stu_marks();
    d2.stu_percentage();
    d2.display();
    return 0;
}