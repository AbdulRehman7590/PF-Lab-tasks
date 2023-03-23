#include <iostream>
using namespace std;

void isEven(int number);

main()
{
 int num;
 while(true)
 {
  cout <<"Enter your number : ";
  cin >> num;
  isEven(num);
 }
}

void isEven(int number)
{
 if (number%2 == 0)
 {
  cout << number <<" is even" <<endl;
 }
 if (number%2 != 0)
 {
  cout << number <<" is odd" <<endl;
 }
}