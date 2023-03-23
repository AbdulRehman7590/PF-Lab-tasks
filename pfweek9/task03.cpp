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

    int num;
    cout << "Enter the number you want to search : ";
    cin >> num;

    int y = 0;

    for (int idx = 0; idx < size; idx++)
    {
        if (Number[idx] == num)
        {
            y = y + 1;
        }
    }
    if (y > 0)
    {
        cout << "Yes !" << endl;
    }
    else
    {
        cout << "NO!" << endl;
    }
}