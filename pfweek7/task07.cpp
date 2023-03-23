#include <iostream>
using namespace std;
void printPercentage(int num);
int main()
{
    int number;
    cout << "Enter number :";
    cin >> number;
    printPercentage(number);
}
void printPercentage(int num)
{
    int p1=0, p2=0, p3=0, p4=0, p5=0;

    for(int x = 1; x <= num ; x=x+1)
    {
        int number;
        cout <<"Enter number :";
        cin >> number;
        if (number < 200)
        {
            p1 = p1 +1;
        }
        else if (number >= 200 && number <= 399)
        {
            p2 = p2 + 1;
        }
        else if (number > 399 && number <= 599)
        {
            p3 = p3 + 1;
        }
        else if (number > 599 && number <= 799)
        {
            p4 = p4 + 1;
        }
        else if (number > 799 && number <= 999)
        {   
            p5  = p5 + 1;
        }
    }
    cout <<"Numbers entered in the range (000-200) : " << (p1*100)/num <<"%" <<endl;
    cout <<"Numbers entered in the range (200-400) : " << (p2*100)/num <<"%" <<endl;
    cout <<"Numbers entered in the range (400-600) : " << (p3*100)/num <<"%" <<endl;
    cout <<"Numbers entered in the range (600-800) : " << (p4*100)/num <<"%" <<endl;
    cout <<"Numbers entered in the range (800-1000) : " << (p5*100)/num <<"%" <<endl;
}