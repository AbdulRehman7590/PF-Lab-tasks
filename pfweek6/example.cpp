#include <iostream>
using namespace std;

int isGreatest(int num1, int num2, int num3);

int main()
{
    int num1;
    int num2;
    int num3;
    int result;

    cout <<"Enter 1st number : ";
    cin >> num1;
    cout <<"Enter 2nd number : ";
    cin >> num2;
    cout <<"Enter 3rd number : ";
    cin >> num3;

    result = isGreatest(num1, num2, num3);
    cout <<"The greatest number is : " <<result <<endl;
}   
int isGreatest(int num1, int num2, int num3)
{
    int great;

    if (num1 > num2 && num1 > num3)
    {
        great = num1;
    }
    else if (num2 > num1 && num2 > num3)
    {
        great = num2;
    }
    else if (num3 > num1 && num3 > num2)
    {
        great = num3;
    }
    else
    {
        great = num1;
    }
    return great;
}

    
    
