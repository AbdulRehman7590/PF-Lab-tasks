#include <iostream>
using namespace std;
main()
{
    string name;
    cout << "Enter word : ";
    getline(cin, name);

    int y = name.length();

    for (int idx = y; idx >= 0 ; idx--)
    {
       cout <<name[idx];
    }
}