#include <iostream>
using namespace std;
main()
{
    string name;
    cout <<"Enter the name : ";
    getline(cin, name);

    char word;
    cout <<"Enter the word : ";
    cin >> word;

    int y = name.length();

    if (name[y-1] == word)
    {
        cout <<"Yes !";
    }
    else
    {
        cout <<"No !";
    }
}