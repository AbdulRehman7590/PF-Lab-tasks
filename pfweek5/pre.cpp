#include <iostream>
#include <cmath>
using namespace std;



main()
{
 float num1, num2, total;
 
 cout <<"Enter number 1 : "; 
 cin >> num1;
 cout <<"Enter number 2 : ";
 cin >> num2;
 
 total = max(num1, num2);
 cout << total <<" is greater number !!!" <<endl;

 total = min(num1, num2);
 cout << total <<" is lesser number !!!" <<endl;

 total = sqrt(num1);
 cout <<"Square root is : " <<total <<endl;

 total = pow(num1, num2);
 cout <<"Power is : " <<total <<endl;
 
 total = cbrt(num2);
 cout <<"Cube root is : " <<total <<endl;
 
 total = ceil(3.9);
 cout <<"ceiling is : " <<total <<endl;
 
 total = floor(3.9);
 cout <<"Floor is : " <<total <<endl;


}

