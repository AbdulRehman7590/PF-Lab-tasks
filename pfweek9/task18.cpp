#include <iostream>
using namespace std;
main()
{
    bool result = false;
    
    float price;
    cout <<"Enter the price : ";
    cin >>price;

    float penny[4], sum = 0; 

    for (int idx = 0; idx < 4; idx++)
    {
        cout << "Enter amount : ";
        cin >> penny[idx];

        if(idx == 0)
        {
            sum = sum + penny[idx]*0.25;
        }
        else if (idx == 1)
        {
            sum =  sum + penny[idx]*0.10;
        }
        else if (idx == 2)
        {
            sum = sum + penny[idx]*0.05;
        }
        else if (idx == 3)
        {
            sum = sum + penny[idx]*0.01;
        }
    }

    if (sum >= price)
    {
        result = true;
    }

    cout <<result;

}