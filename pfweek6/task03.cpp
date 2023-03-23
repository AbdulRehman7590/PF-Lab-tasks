#include <iostream>
using namespace std;
string checkTitle(float age, char gender);
main()
{
    float Age;
    char Gender;

    cout <<"Enter Age : ";
    cin >> Age;
    cout <<"Enter gender(m/f) :";
    cin >>  Gender;

    string Title = checkTitle(Age, Gender);
    cout << Title <<endl;
}

string checkTitle(float age, char gender)
{
    string Title;

    if (gender == 'm')
    {
        if (age >= 16)
        {
            Title = "Mr.";
        }
        else
        {
            Title = "Master";
        }
    }
    if (gender == 'f')
    {
        if (age >= 16)
        {
            Title = "Ms.";
        }
        else
        {
            Title = "Miss";
        }
    }
    return Title;
}