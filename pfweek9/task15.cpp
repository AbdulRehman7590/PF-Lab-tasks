#include <iostream>
using namespace std;
main()
{
    string line;
    cout << "Enter your line : ";
    getline(cin, line);

    for(int idx = 0; line[idx] != '\0'; idx++)
    {
        if (line[idx] == 'a' || line[idx] == 'e' || line[idx] == 'i' || line[idx] == 'o' || line[idx] == 'u')
        {
          continue;
        }

        cout << line[idx];
    }
}