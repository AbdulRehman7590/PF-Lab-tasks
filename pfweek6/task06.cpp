#include <iostream>
using namespace std;
float lowestprice(int distance, string time);
main()
{
    string Time;
    int Distance;
    float price;

    cout <<"Enter time (day/night) :";
    cin >> Time;
    cout <<"Enter distance (in km) :";
    cin >> Distance;

    price = lowestprice(Distance, Time);
    cout <<"Cheapest price is " <<price <<endl;
}

float lowestprice(int distance, string time)
{
    float price = 0;

    if (distance < 20)
    {
        float startingfee = 0.70;
        float dayrate = 0.79;
        float nightrate =0.90;

        if(time == "day")
        {
            price = startingfee + (dayrate*distance);
        }
        else
        {
            price = startingfee + (nightrate*distance);
        }
    }
    else if (distance >= 20 && distance < 100)
    {
         float rate = 0.09;
         price = rate * distance;
    }
    else
    {
        float rate = 0.06; 
        price = rate * distance;
    }
    return price;
}