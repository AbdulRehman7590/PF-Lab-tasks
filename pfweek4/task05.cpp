#include <iostream>
using namespace std;

void calculateBill(string day, float discount);

main()
{
 while (true)
 {
  string Day;
  cout <<"Enter day : ";
  cin >> Day;
  int total;
  cout <<"Enter total amount : ";
  cin >> total;
  calculateBill(Day, total);
 }
}

void calculateBill(string day, float discount)
{
 if (day == "sunday")
 {
  float disount;
  discount = discount - (discount*0.1);
  cout <<"Your total price is : " << discount <<endl;
  }
  if (day != "sunday")
  cout <<"Your total price is : " <<discount <<endl;
} 