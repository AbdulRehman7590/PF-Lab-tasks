#include <iostream>
using namespace std;



main()
{
 float volume, flowrate1, flowrate2, hours;

 cout <<"Enter volume of the swimming pool(in litres) : ";
 cin >> volume;
 cout <<"Enter flowrate of 1st pipe(per hour) : ";
 cin >> flowrate1;
 cout <<"Enter flowrate of 2nd pipe(per hour) : ";
 cin >> flowrate2;
 cout <<"Enter time(in hours) : ";
 cin >> hours;
 
 float pipe1, pipe2, total;
 
 pipe1 = flowrate1*hours;
 pipe2 = flowrate2*hours;
 
 total = pipe1 + pipe2;
 
 if (total <= volume)
 {
  float pool, pipe1st, pipe2nd;
  
  pool = (total*100)/volume;
  pipe1st = (pipe1*100)/total;
  pipe2nd = (pipe2*100)/total;
  
  cout <<"The pool is " <<pool <<"% filled." <<endl;
  cout <<"Pipe 1 contributes " <<pipe1st <<"%." <<endl;
  cout <<"Pipe 2 contributes " <<pipe2nd <<"%." <<endl;
 }

 if (total > volume)
 {
  float pool2;
  
  pool2 = total-volume;
 
  cout <<"For " <<hours <<"hrs the pool overflows with " <<pool2 <<" litres." <<endl;
 }
}