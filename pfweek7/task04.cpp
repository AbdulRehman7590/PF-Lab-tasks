#include <iostream>
using namespace std;
int total(int num, int digit);
int main()
{
    int num, digit;
    cout <<"Enter number : ";
    cin >> num;
    cout <<"Enter digit : ";
    cin >> digit;
    cout <<"Number is repeated this time :" << total(num, digit) <<endl;
}
int total(int num, int digit)
{
    int counter = 0;
    while (num > 0)
    {
        if (num % 10 == digit)
        {
            counter = counter + 1;
        }
        num = num / 10;    
    }
    return counter;
}