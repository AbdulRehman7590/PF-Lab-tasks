#include <iostream>
using namespace std;
main()
{
    int size;
    cout <<"Enter te size of array : ";
    cin >> size;

   float cgpa[size];

   for (int idx = 0; idx < size; idx++)
   {
    cout <<"Enter value : ";
    cin >> cgpa[idx];
   }

   for (int idx = 0; idx < size; idx++)
   {
    cout <<"CGPA at " <<idx <<"th index is : " <<cgpa[idx] <<endl;
   }
}