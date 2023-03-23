#include <iostream>
using namespace std;
void printtable(int num);
int main()
{
    int num;
    cout <<"Enter number :";
    cin >> num;
    printtable(num);
}

void printtable(int num)
{
    for(int count = 1; count <= 10; count ++)
    {
        cout << num <<" * " <<count <<" = " << num*count << endl;
    }
}