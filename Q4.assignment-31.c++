/*4. Write a C++ program to design a base class Person (name, address,
phone_no). Derive a class Employee (eno, ename) from Person. Derive a
class Manager (designation, department name, basic-salary) from
Employee. Write a menu driven program to:
a. Accept all details of 'n' managers.
b. Display manager having highest salary
*/
#include<iostream>
using namespace std;
class person
{ 
   protected:
        char name[20];
        char address[50];
       long long phno;

};
class employee:public person
{
   public:
        int eno;
        char ename[20];

};
class manager:public employee
{
   public:
   char designation[20];
   char dep_name[20];
   char name[20];
  long long basic_salary;

   void accept_details()
   {
      cout<<"Enter Details Of Manager  "<<endl;
      cout<<"--------------------------------- "<<endl;
      cout<<"Enter Employee no : ";
      cin>>eno;
      cout<<"\nEmployee Name : ";
      cin>>ename;
      cout<<"\nEnter Address : ";
      cin>>address;
      cout<<"\nEnter Phone Number : ";
      cin>>phno;
      cout<<"\nEnter Designation : ";
      cin>>designation;
      cout<<"\nEnter Department Name : ";
      cin>>dep_name;
      cout<<"\nEnter Basic Salary : ";
      cin>>basic_salary;
      cout<<endl;

   }
   
     

};
int main()
{ 
  int i,count_man,temp;
  manager man[100];
  cout<<"How Many Manager You Want To Enter ? ";
  cin>>count_man;
  for(i=1;i<=count_man;i++)
  {
    man[i].accept_details();
  }
   temp=0;
  for(i=1;i<=count_man;i++)
  {
    if(man[i].basic_salary>man[i+1].basic_salary)
    {
      temp=i;
    }
  }
  cout<<"\nManager With Highest salary is : "<<man[temp].basic_salary;
  cout<<"\nAnd Manager name is "<<man[temp].ename;



    return 0;
}