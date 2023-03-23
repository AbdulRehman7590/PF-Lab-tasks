#include <iostream>
using namespace std;
int array[50];
main()
{
    int length = 0;
    cout << "Enter the array length : ";
    cin >> length;

    for (int idx = 0; idx < length; idx++)
    {
        cout << "Enter element : ";
        cin >> array[idx];
    }

    int num;
    bool check = false;

    cout << "Enter cycle : ";
    cin >> num;

    if (num >= length)
    {
        check = true;
        cout << check << endl;
        return 0;
    }

    int x = 0;
    for (int index = 0; index < num; index++)
    {
        if (array[index] == array[(index + num)%length])
        {
            x++;
        }
    }
    if (x == num)
    {
        check = true;
    }

    cout << check << endl;
}