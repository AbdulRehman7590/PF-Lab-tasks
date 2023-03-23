#include <iostream>
using namespace std;
int digitSum(int number);
int main()
{
    int num, sum;
    cout <<"Enter number : ";
    cin >> num;
    sum = digitSum(num);
    cout <<"The sum is : " <<sum <<endl;
}
int digitSum(int number)
{
    int sum = 0;

    while(number > 0)
    {
        sum = sum + (number % 10);
        number = number / 10; 
    }
    return sum;
}