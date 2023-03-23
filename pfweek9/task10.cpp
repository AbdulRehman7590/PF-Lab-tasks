#include <iostream>
using namespace std;
main()
{
    string name;
    cout << "Enter word : ";
    getline(cin, name);

    int y = name.length();

    if( y % 2 == 0)
    {
        cout <<"Even" <<endl;
    }
    else
    {
        cout <<"Odd " <<endl;
    }
}