#include <iostream>
#include <cmath>
using namespace std;


main()
{
 float a, b, c;
 cout <<"Enter co-efficients of x^2 : ";
 cin >> a;
 cout <<"Enter co-efficients of x : ";
 cin >> b;
 cout <<"Enter the constants : ";
 cin >> c;

 float step1, step2, step3, step4, step5, step6;

 step1 = pow(b,2)-4*a*c;
 step2 = sqrt(step1);
 
 step3 = -b+step2;
 step4 = step3/(2*a);
 
 step5 = -b-step2; 
 step6 = step5/(2*a);
 
 cout <<"X1 is : " <<step4 <<endl;
 cout <<"X2 is : " <<step6 <<endl;
 
} 