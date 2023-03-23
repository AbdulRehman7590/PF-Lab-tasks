#include <iostream>
using namespace std;
float calculateprice(int year);
main()
{
    int years;
    float money, total;

    cout <<"Enter inherited money : ";
    cin >> money;
    cout <<"Enter year (from 1800) until which he has to live : ";
    cin >> years;

    total = calculateprice(years);

    if (total <= money)
    {
        cout <<"YES! He will live a carefree life and will have " <<money-total <<" Dollars left." <<endl;
    }
    else if (total > money)
    {
        cout <<"NOT ENOUGH! He will need " <<total-money <<" Dollars to live." <<endl;
    }
}

float calculateprice(int year)
{
    float even = 0, odd = 0;
    float age = 19, sum = 0;

    for (int count = 1800; count <= year; count += 1)
    {
        if (count % 2 == 0)
        {
            even = even + 12000;
        }
        else
        {
            odd = odd + 12000+(50*age);
            age = age + 2;
        }
    }

    sum = even + odd;

    return sum;
}