#include <iostream>
using namespace std;
main()
{
    int size;
    cout << "Enter the size of the array : ";
    cin >> size;

    int Number[size];

    for (int idx = 0; idx < size; idx++)
    {
        cout << "Enter value : ";
        cin >> Number[idx];
    }

    int y = Number[0];

    for (int idx = 0; idx < size; idx++)
    {
        if (Number[idx] < y)
        {
            y = Number[idx];
        }
    }
    cout <<y <<endl;
}