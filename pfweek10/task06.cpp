#include <iostream>
using namespace std;
main()
{
    int pakage;
    cout << "Enter the number of pakages :";
    cin >> pakage;
    int weights[pakage];
    for (int idx = 0; idx < pakage; idx++)
    {
        cout << "Enter weights : ";
        cin >> weights[idx];
    }
    int box = 0;
    for (int idx = 0; idx < pakage; idx++)
    {
        for (int count = idx + 1; count < pakage; count++)
        {
            if (weights[idx] > weights[count])
            {
                box = weights[idx];
                weights[idx] = weights[count];
                weights[count] = box;
            }
        }
    }
    for (int idx = 0; idx < pakage; idx++)
    {
        cout << weights[idx] <<",";
    }
}