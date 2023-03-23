#include <iostream>
using namespace std;

float checkCost(string product, string city, float quantity);

main()
{
    string Product, City;
    float Quantity, result;

    cout <<"Enter the product name : ";
    cin >> Product;
    cout <<"Enter the city name : ";
    cin >> City;
    cout <<"Enter the Amount : ";
    cin >> Quantity;

    result = checkCost(Product, City, Quantity);
    cout << result;
}
float checkCost(string product, string city, float quantity)
{
    float price = 0;

    if (product == "coffee")
    {
        if(city == "Sofia")
        {
            price = quantity*0.50;
        }
        if(city == "Plovdiv")
        {
            price = quantity*0.40;
        }
        if(city == "Varna")
        {
            price = quantity*0.45;
        }
    }
    else if (product == "water")
    {
         if(city == "Sofia")
        {
            price = quantity*0.80;
        }
        if(city == "Plovdiv" || city == "Varna")
        {
            price = quantity*0.70;
        }
    }
    else if (product == "beer")
    {
         if(city == "Sofia")
        {
            price = quantity*1.20;
        }
        if(city == "Plovdiv")
        {
            price = quantity*1.15;
        }
        if(city == "Varna")
        {
            price = quantity*1.10;
        }
    }
    else if (product == "sweets")
    {
         if(city == "Sofia")
        {
            price = quantity*1.45;
        }
        if(city == "Plovdiv")
        {
            price = quantity*1.30;
        }
        if(city == "Varna")
        {
            price = quantity*1.35;
        }
    }
    else if (product == "peanuts")
    {
         if(city == "Sofia")
        {
            price = quantity*1.60;
        }
        if(city == "Plovdiv")
        {
            price = quantity*1.50;
        }
        if(city == "Varna")
        {
            price = quantity*1.55;
        }
    }
    return price;
}