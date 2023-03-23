#include <iostream>
using namespace std;
main() {
float megabyte;
cout <<"Enter Data(mb) = ";
cin >> megabyte;
float kilobyte;
kilobyte=megabyte*1024;
float bytes;
bytes=kilobyte*1024;
float bits;
bits=bytes*8;
cout <<"Your data in bits is = " << bits;
}
