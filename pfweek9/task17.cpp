#include <iostream>
using namespace std;
main()
{
    int number;
    cout <<"Enter the quantity of the resistances :";
    cin >> number;

    float resistance[number], sum = 0;

    for (int idx = 0; idx < number; idx++)
    {
        cout <<"Enter the value of resistance : ";
        cin >> resistance[idx];

        sum = sum + resistance[idx];
    }

    cout <<sum <<" ohms" <<endl;
}