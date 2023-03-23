#include <iostream>
using namespace std;



main()
{
 int hours, minutes, hrsinmins, timeafter, hh, mm;
 
 cout <<"Enter hours : ";
 cin >> hours;
 cout <<"Enter minutes : ";
 cin >> minutes;

 hrsinmins = hours*60;
 timeafter = (hrsinmins + minutes) + 15;
 
 hh = timeafter/60;
 if(hh > 23)
 {
  hh = 0;
 }

 mm = timeafter%60;
 
 cout <<hh <<":" <<mm <<endl;
}