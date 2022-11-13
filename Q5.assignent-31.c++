/*5. Write a C++ program to define a base class Item (item-no, name, price).
Derive a class Discounted-Item (discount-percent). A customer purchases

'n' items. Display the item-wise bill and total amount using appropriate
format.
*/
#include <iostream>
using namespace std;
class Item
{
public:
    int item_no;
    char name[20];
    int price;
};
class Discount_item : public Item
{

public:
    int Discount_percentage;
    int Discount_price;
    void accept()
    {
        cout << "\n----------------------------------" << endl;
        cout << "\nEnter Item Name           : ";
        cin >> name;
        cout << "\nEnter Item No             : ";
        cin >> item_no;
        cout << "\nEnter item price          : ";
        cin >> price;
        cout << "\nEnter Discount Percentage : ";
        cin >> Discount_percentage;

        Discount_price = price - price * Discount_percentage / 100;
    }

    void Display()
    {
        cout << "\n--------------------------------" << endl;
        cout << "\nItem Name      : " << name;
        cout << "\nItem No        : " << item_no;
        cout << "\nItem Price     : " << price;
        cout << "\nDiscount       : " << Discount_percentage;
        cout << "\nDiscount Price : " << Discount_price << endl;
    }
};
int main()
{
    int count_item, price = 0, discount = 0, i;
    cout << "Enter How many items you want to enter ? " << endl;
    cin >> count_item;
    Discount_item item[100];
    for (i = 1; i <= count_item; i++)
    {
        item[i].accept();
    }
    for (i = 1; i <= count_item; i++)
    {
        item[i].Display();
    }
    for (i = 1; i <= count_item; i++)
    {
        price = price + item[i].price;
    }
    for (i = 1; i <= count_item; i++)
    {
        discount = discount + item[i].price - item[i].Discount_price;
    }
    cout << "-----------------------------" << endl;
    cout << "Total Price : " << price << endl;
    cout << "Total Discount : " << discount;
    return 0;
}