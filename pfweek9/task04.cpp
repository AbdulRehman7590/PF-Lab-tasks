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

   for (int idx = size-1; idx >= 0; idx--)
   {
    cout <<cgpa[idx] <<" ";
   }
}