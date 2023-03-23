#include <iostream>
using namespace std;
main() {
string Name;
int Matricmarks;
int Intermarks;
int Ecat;
cout <<"Enter your name = ";
cin >> Name;
cout <<"Enter your matric marks = ";
cin >> Matricmarks;
cout <<"Enter your inter marks = ";
cin >> Intermarks;
cout <<"Enter your ecat marks = ";
cin >> Ecat;
float matric;
matric=(Matricmarks*100)/1100;
float inter;
inter=(Intermarks*100)/1100;
float ecat;
ecat=(Ecat*100)/400;
float Ecatper;
Ecatper=(ecat*50)/100;
float Interper;
Interper=(inter*40)/100;
float Matricper;
Matricper=(matric*10)/100;
float aggregate;
aggregate=Ecatper+Interper+Matricper;
cout <<"Your Aggregate is = " << aggregate;
}
