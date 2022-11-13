/*9. Write a C++ program to implement the following class hierarchy:
Student: id, name
StudentExam (derived from Student): Marks of 6 subjects
StudentResult (derived from StudentExam) : percentage
Define appropriate functions to accept and display details.
Create 'n' objects of the StudentResult class and display the marklist.
*/
#include <iostream>
using namespace std;
class Student
{
public:
    int id;
    char name[20];

public:
    void getdata()
    {
        cout << "\n-------------------------------------------------------";
        cout << "\nEnter Roll No.         : ";
        cin >> id;
        cout << "\nEnter Student Name     : ";
        cin >> name;
    }
    void put_stu_data()
    {
        cout << "-----------------------------------------------------\n";
        cout << "****************Student MarkList*********************\n";
        cout << "-----------------------------------------------------\n";
        cout << "\nRoll No            : " << id;
        cout << "\nStudent Name       : " << name << endl;
    }
};
class Student_Exam : public Student
{

public:
    int Eng, maths, bio, phy, chem, cpp;

public:
    void accept_stu_marks()
    {
        getdata();

        cout << "\nEnter English Marks    : ";
        cin >> Eng;
        cout << "\nEnter Maths  Marks     : ";
        cin >> maths;
        cout << "\nEnter Physics Marks    : ";
        cin >> phy;
        cout << "\nEnter Biology Marks    : ";
        cin >> bio;
        cout << "\nEnter Chemistry Marks  : ";
        cin >> chem;
        cout << "\nEnter C++ marks        : ";
        cin >> cpp;
    }
    void Display_marks()
    {
        put_stu_data();

        cout << "\nMarks of English   : " << Eng;
        cout << "\nMArks of Maths     : " << maths;
        cout << "\nmarks of biology   : " << bio;
        cout << "\nMarks of Physics   : " << phy;
        cout << "\nMarks of Chemistry : " << chem;
        cout << "\nmarks of C++       : " << cpp;
    }
};
class Student_percentage : public Student_Exam
{
public:
    int per;

public:
    void Calc_stu_per()
    {
        per = (Eng + maths + phy + bio + chem + cpp) / 6.0;
        cout << endl;
        cout << "\nTotal Percentage   : " << per << "%" << endl;
        cout << "--------------------------------------------------------\n";
    }
};

int main()
{
    int count, i;
    Student_percentage sp;
    cout << "\nEnter No. Of Students You Want ? :";
    cin >> count;
    for (i = 0; i < count; i++)
    {
        sp.accept_stu_marks();
        sp.Display_marks();
        sp.Calc_stu_per();
    }

    return 0;
}