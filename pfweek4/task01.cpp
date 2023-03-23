#include <iostream>
using namespace std;

void add(int num1, int num2);
void multiply(int num1, int num2);
void subtract(int num1,int num2);
void divide(int num1, int num2);

main ()
{
 while(true)
 {
 int num1,num2;
 char operation;
 cout <<"Enter 1st nummber : ";
 cin >> num1;
 cout <<"Enter 2nd number : ";
 cin >> num2;
 cout <<"Enter operator(+,-,*,/) : ";
 cin >> operation;
 if(operation == '+')
 {
   add(num1,num2);
 }
 if(operation == '-' )
 {
   subtract(num1,num2);
 }
 if(operation == '*')
 {
   multiply(num1,num2);
 }
 if(operation == '/')
 {
   divide(num1,num2);
 }
 }
}

void add(int num1,int num2)
{
int sum;
sum=num1+num2;
cout <<"Your sum  is : " <<sum <<endl;
}

void multiply(int num1,int num2)
{
int product;
product = num1*num2;
cout <<"Your product is : " <<product <<endl;
}

void subtract(int num1, int num2)
{
int subtract;
subtract = num1-num2;
cout <<"Your subtract is : "  <<subtract <<endl;
}

void divide(int num1, int num2)
{
int division;
division = num1/num2;
cout <<"Your division is : " <<division <<endl;
}