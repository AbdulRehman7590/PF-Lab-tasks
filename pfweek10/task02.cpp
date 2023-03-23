#include <iostream>
using namespace std;
int mile[20];
int checkcondition(int num);
main()
{
    int num;
    cout << "Enter no. of days : ";
    cin >> num;

    for (int idx = 0; idx < num; idx++)
    {
        cout << "Enter the miles : ";
        cin >> mile[idx];
    }
    cout << "The progress days :" << checkcondition(num) << endl;
}
int checkcondition(int num)
{
    int s = 0, y = 0, x = 0;
    for (int idx = 0; idx < num - 1; idx++)
    {
        s = mile[idx];
        y = mile[idx + 1];
        if (s < y)
        {
            x++;
        }
    }
    return x;
}