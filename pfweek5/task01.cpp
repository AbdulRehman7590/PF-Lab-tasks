#include <iostream>
#include <cmath>
using namespace std;

float calculate(float degree, float base);

main()
{
 float degree, base, height;
 cout <<"Enter angle(in degree) : ";
 cin >> degree;
 cout <<"Enter base : ";
 cin >> base;
 
 height = calculate(degree, base);
 cout <<"Height is : " <<height <<endl;
}

float calculate(float degree, float base)
{
 float radian = 57.2958;
 float radians = degree /radian;
 float angle = tan(radians);

 float height = angle*base;
 return height;
}