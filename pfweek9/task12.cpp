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
        if (name[idx] == 'a' || name[idx] == 'e' || name[idx] == 'i' || name[idx] == 'o' || name[idx] == 'u')
        {
            y++;
        }
    }
    cout <<y;
}