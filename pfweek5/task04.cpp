#include <iostream>
using namespace std;

string evenOddish(int num);
 
main()
{
 int num;
 cout <<"Enter 5digit number : ";
 cin >> num;
 
 string result;
 result = evenOddish(num);

 cout <<"The number is " <<result <<endl;
}

string evenOddish(int num)
{
 int num1, num2, num3, num4, num5, sum;
 
 num1 = num%10;
 
 num = num/10;
 num2 = num%10;
 
 num = num/10;
 num3 = num%10;

 num = num/10;
 num4 = num%10;

 num = num/10;
 num5 = num%10;
 
 sum = num1+num2+num3+num4+num5;

 if (sum%2 == 0)
 {
  return "evenish";
 }

 if (sum%2 != 0)
 {
  return "oddish";
 }
 return 0;
}