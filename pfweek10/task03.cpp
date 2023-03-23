#include <iostream>
using namespace std;
bool check(int x, int y, int z);
main()
{
    int num;
    cout << "Enter no. of days : ";
    cin >> num;
    int number[num];
    for (int idx = 0; idx < num; idx++)
    {
        cout << "Enter the miles : ";
        cin >> number[idx];
    }
    int array[100];
    int x = 0, y = 0, z = 0, result = 0;
    bool status;
    for (int idx = 0; idx < num-1; idx++)
    {
        x = number[idx - 1];
        y = number[idx];
        z = number[idx + 1];
        status = check(x, y, z);

        if (status == true)
        {
            array[result] = y;
            result++;
        }
    }
    for (int m = 0; m < result; m++)
    {
        cout <<array[m] <<"," ;
    }
}
bool check(int x, int y, int z)
{
    bool result = false;
    if (y > x && y > z)
    {
        result = true;
    }

    return result;
}