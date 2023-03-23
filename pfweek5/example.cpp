#include <iostream>
using namespace std;

float division(float number1, float nuumber2);
int add(int number1, int number2);
int isgreater(int number1, int number2);

main()
{
 float num1, num2, total;
 cout <<"Enter 1st number : ";
 cin >> num1;
 cout <<"Enter 2nd number : ";
 cin >> num2;
 total = isgreater(num1, num2);
 cout <<"Answer is : " << total <<endl;
 cout <<"Programs ends";
}

float division(float number1, float number2)
{
 float divide = number1/number2;
 return divide;
}

int add(int number1, int number2)
{
 int sum = number1+number2;
 return sum;
}

int isgreater(int number1, int number2)
{
 if(number1 > number2)
  {
   return number1;
  }
 return number2;
}