/*10. Consider two base classes
worker(int code, char name, float salary),
officer(float DA, HRA)
class manger(float TA(is 10% of salary), gross salary) is derived from both base
classes.
Write necessary member functions.
*/
#include <iostream>
using namespace std;
class worker
{

protected:
    int code;
    char name[20];
    float salary;

public:
    void accept_worker()
    {
        cout << "\n----------------------------------------------------";
        cout << "\nEnter Code   : ";
        cin >> code;
        cout << "\nEnter Name   : ";
        cin >> name;
        cout << "\nEnter Salary : ";
        cin >> salary;
    }
};
class officer : public worker
{
protected:
    float DA, HRA;

public:
    void accept_officer()
    {
        cout << "\nEnter DA  : ";
        cin >> DA;
        cout << "\nEnter HRA : ";
        cin >> HRA;
    }
};
class Manager : public officer
{
private:
    float TA;
    float total;

public:
    void Display_information()
    {
        TA = 0.10 * salary;
        total = HRA + TA + DA + salary;
        cout << "\n-------------------------------------------------";
        cout << "\n**************Manager Infrmation*******************";
        cout << "\n--------------------------------------------------";
        cout << "\nCode       : " << code;
        cout << "\nName       : " << name;
        cout << "\nSalary     : " << salary;
        cout << "\nHRA        : " << HRA;
        cout << "\nTA         : " << TA;
        cout << endl;
        cout << "\nGross Salary : " << total;
    }
};
int main()
{
    int i, count;
    Manager info[10];
    cout << "\nEnter Manager count : ";
    cin >> count;
    for (i = 0; i < count; i++)
    {
        info[i].accept_worker();
        info[i].accept_officer();
    }
    for (i = 0; i < count; i++)
    {
        info[i].Display_information();
    }

    return 0;
}