#include <iostream>
using namespace std;
main()
{
    string word;
    cout <<"Enter the word :";
    getline(cin, word);

    for(int idx = 0; word[idx] != '\0'; idx++)
    {
        char next = word[idx];

        if (next == 'a')
        {
            next = 'b';
        }
        else if(next == 'b')
        {
            next = 'c';
        }
        else if(next == 'c')
        {
            next = 'd';
        }
        else if(next == 'd')
        {
            next = 'e';
        }
        else if(next == 'e')
        {
            next = 'f';
        }
        else if(next == 'f')
        {
            next = 'g';
        }
        else if(next == 'g')
        {
            next = 'h';
        }
        else if(next == 'h')
        {
            next = 'i';
        }
        else if(next == 'i')
        {
            next = 'j';
        }
        else if(next == 'j')
        {
            next = 'k';
        }
        else if(next == 'k')
        {
            next = 'l';
        }
        else if(next == 'l')
        {
            next = 'm';
        }
        else if(next == 'm')
        {
            next = 'n';
        }
        else if(next == 'n')
        {
            next = 'o';
        }
        else if(next == 'o')
        {
            next = 'p';
        }
        else if(next == 'p')
        {
            next = 'q';
        }
        else if(next == 'q')
        {
            next = 'r';
        }
        else if(next == 'r')
        {
            next = 's';
        }
        else if(next == 's')
        {
            next = 't';
        }
        else if(next == 't')
        {
            next = 'u';
        }
        else if(next == 'u')
        {
            next = 'v';
        }
        else if(next == 'v')
        {
            next = 'w';
        }
        else if(next == 'w')
        {
            next = 'x';
        }
        else if(next == 'x')
        {
            next = 'y';
        }
        else if(next == 'y')
        {
            next = 'z';
        }
        else if(next == 'z')
        {
            next = 'a';
        }
        else if(next == ' ')
        {
            next = ' ';
        }

        cout << next;
    }

}