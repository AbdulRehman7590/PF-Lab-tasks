#include <iostream>
using namespace std;
int total(int num);
int main()
{
    int num;
    cout <<"Enter number : ";
    cin >> num;
    cout << total(num) <<endl;
}
int total(int num)
{
    int counter = 0;
    while (num > 0)
    {
        num = num / 10;
        counter = counter + 1;
    }
    return counter;
}