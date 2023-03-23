#include <iostream>
using namespace std;

float calculate(string day, string month, int amount);

main()
{
    int amount, price;
    string day, month;

    cout <<"Enter amount : ";
    cin >> amount;
    cout <<"Enter day : ";
    cin >> day;
    cout <<"Enter month : ";
    cin >> month;
    
    price = calculate(day, month, amount);
    cout <<"Your price is :" <<price <<endl;

}
float calculate(string day, string month, int amount)
{
    float payable = amount;

    if (day == "Sunday" && (month == "October" || month == "March" ||month == "August"))
    {
        payable = amount - (amount*10)/100;
    }
    if (day == "Monday" && (month == "November"||month == "December"))
    {
        payable = amount - (amount *5)/100;
    }
    return payable;
} 