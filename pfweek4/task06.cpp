#include <iostream>
using namespace std;

void calculateBill(string day, int total);

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

void calculateBill(string day, int total)
{
 if (day == "sunday")
 {
  cout <<"Your total price is : " << total*0.9 <<endl;
  }
  if (day == "monday")
  {
   cout <<"Your total price is : " <<total*0.95 <<endl;
  }
 
  if (day == "tuesday")
  {
   cout <<"Your total price is : " <<total*0.95 <<endl;
  }
 
  if (day == "wednesday")
  {
   cout <<"Your total price is : " <<total*0.95 <<endl;
  }

  if (day == "thursday")
  {
   cout <<"Your total price is : " <<total*0.95 <<endl;
  }

  if (day == "friday")
  {
  cout <<"Your total price is : " <<total*0.95 <<endl;
  }

  if (day == "saturday")
  {
    cout <<"Your total price is : " << total*0.95<<endl;
  }
} 