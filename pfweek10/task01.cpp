#include <iostream>
using namespace std;
string words[50];
int check(int num, char letter);
main()
{
    int num=0;
    cout <<"Enter how many words you want to enter : ";
    cin >> num;

    for (int idx = 0; idx < num; idx++)
    {
        cout <<"Enter word :";
        cin >> words[idx];
    }

    char letter;
    cout <<"Enter the letter you want to search : ";
    cin >> letter;

    cout << check(num, letter) <<endl;
}
int check(int num, char letter)
{
    string y;
    int x = 0;

    for (int index = 0; index < num; index++)
    {
        y = words[index];
        int z = y.length();
        
        for (int idx = 0; idx < z; idx++)
        {
            if (y[idx] == letter)
            {
                x++;
            }
        }
    }
    return x;
}