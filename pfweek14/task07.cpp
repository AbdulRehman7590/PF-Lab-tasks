#include <iostream>
using namespace std;
void rotate(int array[], int size, int num);
main()
{
    int size = 9;
    int array[size] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int num;
    cout <<"Enter no. of value to rotate : ";
    cin >> num;
    rotate(array, size, num);
}
void rotate(int array[], int size, int num)
{
    for (int x = 0; x < size; x++)
    {
        cout << array[(x+num)%size] <<" ";
    }
}