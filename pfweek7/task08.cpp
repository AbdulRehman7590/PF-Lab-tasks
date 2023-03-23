#include <iostream>
using namespace std;
float calculatemoney(int age, int toyprice);
main()
{
    int age;
    float price, toyprice, finalprice;
    
    cout <<"Enter the age of Lily : ";
    cin >> age;
    cout <<"Enter the price of the washing macine : ";
    cin >> price;
    cout <<"Enter the price of each toy : ";
    cin >> toyprice;
    finalprice = calculatemoney(age, toyprice);
    
    if (finalprice >= price)
    {
        cout <<"YES! " <<finalprice-price <<" is the remaining money." <<endl;
    }
    else if(finalprice < price)
    {
        cout <<"NOT Enough! " <<price-finalprice <<" is the required money." <<endl;
    }
}

float calculatemoney(int age, int toyprice)
{
    int evenage, oddage, money = 0, receive = 0;
    float toys, toymoney = 0, total = 0;

    if (age % 2 == 0)
    {
        evenage = age/2;
        oddage = evenage;
    }
    else
    {
        age = age-1;
        evenage = age/2;
        oddage = evenage+1;
    }
    
    for (int year = 1; year <= evenage; year = year + 1)
    {
        money = (year*10)-1;
        receive = (receive + money);
    }
    
    toys = oddage;
    toymoney = toys*toyprice;

    total = receive+toymoney;

    return total;
}