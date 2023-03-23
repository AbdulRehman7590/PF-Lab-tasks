#include <iostream>
using namespace std;

void ShowResult(int marks);

main()
{
 int marks;
 while(true)
 {
   cout <<"Enter your marks : ";
   cin >> marks;
   ShowResult(marks);
 }
}
void ShowResult(int marks)
{
 if(marks > 50)
 {
   cout <<"pass" <<endl;
 }

 if(marks == 50)
 {
   cout <<"Need Hard work" <<endl;
 }

 if(marks < 50)
 {
   cout <<"Fail" <<endl;
 }
}