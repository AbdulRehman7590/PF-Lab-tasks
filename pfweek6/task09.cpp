#include <iostream>
#include <cmath>
using namespace std;

main()
{
    string year;
    float holiday, weekend, result;

    cout <<"Enter the type of year : ";
    cin >> year;
    cout <<"Enter no. of holidays :  ";
    cin >> holiday;
    cout <<"Enter no. of days he go home : ";
    cin >> weekend;

    float totalweeks = 48;
    float homeplay = holiday*(2.0/3);
    float weeksinsofia = totalweeks-weekend;
    float sofiaplay = weeksinsofia * (3.0/4);
    float totalplay = homeplay+sofiaplay+weekend;
    
    if (year == "leap")
    {
        result = ((totalplay*15)/100) + totalplay;
    }
    else
    {
        result = totalplay;
    }

    result = floor(result);
    cout <<result;
}