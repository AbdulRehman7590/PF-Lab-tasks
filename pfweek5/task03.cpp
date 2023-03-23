#include <iostream>
#include <cmath>
using namespace std;

bool SYM(int num);

main()
{
 int num;
 bool result;

 cout <<"Enter 3 digit number : ";
 cin >> num;

 result = SYM(num);
 if (result == true)
 {
  cout <<"The no. is symmetrical" <<endl; 
 }
 if (result == false)
 {
  cout <<"The no. is unsymmetrical" <<endl;
 }
}

bool SYM(int num)
{ 
 int trddigi, fstdigi;
 trddigi = num%10;
 int fst = num/100;
 fstdigi = fst%10; 
 
 if(fstdigi == trddigi)
 {
  return true;
 }

 if(fstdigi != trddigi)
 {
  return false;
 }
 return 0;
}