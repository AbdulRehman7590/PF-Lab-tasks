#include <iostream>
using namespace std;
main()
{
    float array1[2];

    for (int idx = 0; idx < 2; idx++)
    {
        cout << "Enter value of array 1 : ";
        cin >> array1[idx];
    }

    int size;
    cout << "Enter the size of the 2nd array : ";
    cin >> size;

    float array2[size];

    for (int idx = 0; idx < size; idx++)
    {
        cout << "Enter value of array 2 : ";
        cin >> array2[idx];
    }
    cout << "[" << array1[0] << ",";
    for (int x = 0; x < size; x++)
    {
        cout << array2[x] << ",";
    }

    cout << array1[1] << "]" << endl;
}