#include <iostream>
using namespace std;



main()
{
 int num, num1, num2;
 string count1, count2;

 cout <<"Enter number : ";
 cin >> num;

 num1 = num%10;
 num2 = num/10;
 num2 = num2%10;

 if (num1 == 0)
 {
  count2 = " ";
 }
 
 if (num1 == 1)
 {
  count2 = "One";
 }
 
 if (num1 == 2)
 {
  count2 = "Two";
 }

 if (num1 == 3)
 {
  count2 = "Three";
 }
 
 if (num1 == 4)
 {
  count2 = "Four";
 }

 if (num1 == 5)
 {
  count2 = "Five";
 }

 if (num1 == 6)
 {
  count2 = "Six";
 }
 
 if (num1 == 7)
 {
  count2 = "Seven";
 }
 
 if (num1 == 8)
 {
  count2 = "Eight";
 }

 if (num1 == 9)
 {
  count2 = "Nine";
 }
  
  if (num2 == 0)
 {
  count1 = "";
 }
 
 if (num2 == 1)
 {
  count1 = "Ten";
 }
 
 if (num2 == 2)
 {
  count1 = "Twenty";
 }

 if (num2 == 3)
 {
  count1 = "Thirty";
 }
 
 if (num2 == 4)
 {
  count1 = "Forty";
 }

 if (num2 == 5)
 {
  count1 = "Fifty";
 }

 if (num2 == 6)
 {
  count1 = "Sixty";
 }
 
 if (num2 == 7)
 {
  count1 = "Seventy";
 }
 
 if (num2 == 8)
 {
  count1 = "Eighty";
 }

 if (num2 == 9)
 {
  count1 = "Ninety";
 }

 cout <<num <<" In English is " <<count1 <<" " <<count2 <<endl;
}