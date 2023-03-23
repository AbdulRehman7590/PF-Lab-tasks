#include <iostream>
using namespace std;
int calculateGCD(int number1, int number2);
int calculateLCM(int number1, int number2, int gcd);
int main()
{
    int num1, num2;
    cout <<"Enter 1st number : ";
    cin >> num1;
    cout <<"Enter 2nd number  : ";
    cin >> num2;
    int gcd = calculateGCD(num1, num2);
    int lcm = calculateLCM(num1, num2, gcd);
    cout <<"GCD is :" <<gcd <<endl;
    cout <<"LCM is :" <<lcm <<endl; 
}

int calculateGCD(int number1, int number2)
{
    int GCD = 0;
    for(int num = 1; num  <= number1; num = num + 1)
    {
        if(number1 % num == 0 && number2 % num == 0)
        {
            GCD = num;
        }
    }
    return GCD;
}

int calculateLCM(int number1, int number2, int gcd)
{
    int LCM = 0;
    LCM = (number1*number2)/gcd;
    return LCM;
}