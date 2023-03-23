#include <iostream>
using namespace std;
void printfib(int num);
int main()
{
    int num;
    cout <<"Enter number :";
    cin >> num;
    printfib(num);
}
void printfib(int num)
{
    int num1 = 0;
    int num2 = 1;
    int sum;
    cout <<num1 <<"," <<num2;
    for (int count = 1; count <= num-2 ;count++)
    {
        sum = num1+num2;
        cout <<"," <<sum;
        num1 = num2;
        num2 = sum;
    }
}