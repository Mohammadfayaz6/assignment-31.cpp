/*7. Write class declarations and member function definitions for a C++ base
class to represent an Employee (emp-code, name).
Derive two classes as Fulltime (daily rate, number of days, salary) and
Parttime (number of working hours, hourly rate, salary).
Write a menu driven program to:
1. Accept the details of ‘n’ employees.
2. Display the details of ‘n’ employees.

3. Search a given Employee by emp-code.
*/
#include <iostream>
using namespace std;
class Employee
{
public:
    int emp_code;
    char name[20];
};
class Fulltime : public Employee
{
public:
    int daily_rate;
    int no_days;
    int salary;

    void Fulltime_accept()
    {
        cout << "\nEmployee Number   : ";
        cin >> emp_code;
        cout << "\nEnmployee Name    : ";
        cin >> name;
        cout << "\nDaily Rate        : ";
        cin >> daily_rate;
        cout << "\nEnter No of Days  : ";
        cin >> no_days;

        salary = daily_rate * no_days;
    }

    void Fulltime_Display()
    {   
        cout<<"********************FullTime******************";
        cout << "\n-------------------------------------------" << endl;
        cout << "\nEmployee Number : " << emp_code;
        cout << "\nEnmployee Name  : " << name;
        cout << "\nSalary          : " << salary;
        cout << "\nStatus          : " << "FullTime";
        cout << "\n-------------------------------------------" << endl;
    }
};
class Parttime : public Fulltime
{
public:
    int no_workinghourly, hourly_rate,salary;
    void parttime_accept()
    {
        cout << "\nEmployee Number   :";
        cin >> emp_code;
        cout << "\nEnmployee Name    :";
        cin >> name;
        cout << "\nhourly Rate       :";
        cin >> hourly_rate;
        cout << "No Of Working hours :";
        cin >> no_workinghourly;
        salary = hourly_rate  * no_workinghourly;
    }

    void parttime_Display()
    {   cout<<"*******************Part Time*****************";
        cout << "\n-------------------------------------------" << endl;
        cout << "\nEmployee Number : " << emp_code;
        cout << "\nEnmployee Name  : " << name;
        cout << "\nSalary          : " << salary;
        cout << "\nStatus          : "<< "PartTime"<<endl;
        cout << "--------------------------------------------" << endl;
    }
};
int main()
{
    int choice, i;
    int var1 = 0;
    int var2 = 0;
    Fulltime f1[10];
    Parttime p1[10];

    do
    {
        cout << "\n 1.Enter Record ";
        cout << "\n 2.Display Record ";
        cout << "\n 3.Search Record ";
        cout << "\n 4.Quit";
        cout << "\n Enter your choice ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            int x;
            cout << "\n1.Enter FullTime Employee Record ";
            cout << "\n2.Enter PartTime Employee Record ";
            cout << "\nEnter Your Choice : ";
            cin >> x;

            switch (x)
            {
            case 1:
                f1[var1].Fulltime_accept();
                var1++;
                break;

            case 2:
                p1[var2].parttime_accept();
                var2++;
                break;
            }
       break;
        case 2:
            for (i = 0; i <var1; i++)
            {
                f1[i].Fulltime_Display();
            }
            for (i = 0; i <var2; i++)
            {
                p1[i].parttime_Display();
            }
               break;
        case 3:
        {
            int e;
            cout << "\nEnter Employee No :";
            cin >> e;
            if (f1[i].emp_code == e)
            {
                f1[i].Fulltime_Display();
            }
            else
            if (p1[i].emp_code == e)
            {
                p1[i].parttime_Display();
            }
            break;
        }
        }

    } while (choice != 4);
    return 0;
}