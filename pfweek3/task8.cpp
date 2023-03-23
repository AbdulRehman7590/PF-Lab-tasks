#include <iostream>
using namespace std;
main() {
double bits;
cout <<"Enter data(in bits) = ";
cin >> bits;
double bytes;
bytes=bits/8;
float kilobytes;
kilobytes=bytes/1024;
float megabytes;
megabytes=kilobytes/1024;
cout <<bits <<" is equal to " <<bytes <<endl;
cout <<bits <<" is equal to " <<kilobytes <<endl;
cout <<bits <<" is equal to " <<megabytes <<endl;
}
