#include <iostream>
using namespace std;
main()
{
    string name;
    cout << "Enter word : ";
    getline(cin, name);

    int y = 0;

    for (int idx = 0; name[idx] != '\0'; idx++)
    {
       cout <<name[idx] <<" at index " <<idx <<endl;
    }
}