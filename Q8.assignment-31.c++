/*8 - In a bank, different customers have savings account. Some customers may
have taken a loan from the bank. So bank always maintain information about
bank depositors and borrowers.
Design a Base class Customer (name, phone-number). Derive a class
Depositor(accno, balance) from Customer.
Again, derive a class Borrower (loan-no, loan-amt) from Depositor.
Write necessary member functions to read and display the details of ‘n’
customers.
*/
#include <iostream>
using namespace std;
class customer
{
protected:
    char name[20];
    long long phone_number;
};
class Depositor : public customer
{
protected:
    long long accno;
    int balance;
};
class Borrower : public Depositor
{
protected:
    long long loan_no;
    int loan_amount;

public:
    void customer_det()
    {
        cout << "-------------------------------------------------------" << endl;
        cout << "\nEnter Customer Name   : ";
        cin >> name;
        cout << "\nEnter Customer Phone no : ";
        cin >> phone_number;
        cout << "\nEnter Customer A/c No   : ";
        cin >> accno;
        cout << "\nEnter Balance           : ";
        cin >> balance;
        cout << "\nEnter Loan No           : ";
        cin >> loan_no;
        cout << "\nEnter Loan Amount       : ";
        cin >> loan_amount;
    }
    void Display()
    {
        cout << "------------------------------------------------------------------";
        cout << "\n details of customer ";
        cout << "\n----------------------------------------------------------------";
        cout << "\nCustomer Name       : " << name;
        cout << "\nCustomer Phnone No. : " << phone_number;
        cout << "\nCustomer A/C No     : " << accno;
        cout << "\nBalance             : " << balance;
        cout << "\n----------------------------------------------------------------";
        cout << "\nLoan Number : " << loan_no;
        cout << "\nLoan Amount : " << loan_amount << endl;
        cout << "\n-----------------------------------------------------------------" << endl;
    }
};
int main()
{
    int i, count;
    cout << "\nEnter No. of Customer Details You Want To Enter :";
    cin >> count;

    Borrower det[10];
    for (i = 0; i < count; i++)
    {
        det[i].customer_det();
    }
    for (i = 0; i < count; i++)
    {
        det[i].Display();
    }
    return 0;
}