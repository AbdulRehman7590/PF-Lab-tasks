#include <iostream>
using namespace std;
main()
{
    int size;
    cout <<"Enter the size of array : ";
    cin >> size;

    int sum[size];

    for (int idx = 0; idx < size; idx++)
    {
        cout <<"Enter number :";
        cin >> sum[idx];
    }

    int Sum = 0;

    for (int idx = 0; idx < size; idx++)
    {
        Sum = Sum + sum[idx];
    }

    cout <<"Sum is : " << Sum <<endl;

    cout <<"Average is : " << Sum/size <<endl;
}