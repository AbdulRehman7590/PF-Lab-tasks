#include <iostream>
using namespace std;
int calculate(int num1, int num2, int num3);
main()
{
    int num = 0, value1 = 0, value2 = 0, value3 = 0, result = 0, total = 0;
    cout << "Enter the array length : ";
    cin >> num;

    int array[num];

    for (int idx = 0; idx < num; idx++)
    {
        cout << "Enter element : ";
        cin >> array[idx];
    }

    for (int idx = 1 ; idx < num-1; idx = idx + 3)
    {
        value1 = array[idx-1];
        value2 = array[idx];
        value3 = array[idx+1];

        result = calculate(value1, value2, value3);

        total = total + result;
    }
    cout <<total <<endl;
}
int calculate(int num1, int num2, int num3)
{
    return num1*num2*num3;
}