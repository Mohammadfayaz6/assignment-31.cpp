/*2. Write a C++ program to add two numbers using single inheritance. Accept these two
numbers from the user in base class and display the sum of these two numbers in
derived class.
*/
#include <iostream>
using namespace std;
class set_data
{
protected:
    int num1;
    int num2;

public:
    void set_num()
    {
        cout << "Enter two numbers" << endl;
        cin >> num1 >> num2;
    }
    
};
class add_data : public set_data
{
    int sum;
public:
    void add()
    {
        sum=num1+num2;
    }
    void display()
    {
      cout<<"sum of two number is : "<<sum;
    }
};
int main()
{
    add_data d1;
    d1.set_num();
    d1.add();
    d1.display();

    return 0;
}