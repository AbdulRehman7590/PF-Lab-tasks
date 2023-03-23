#include <iostream>
using namespace std;
string checkSpeed(float speed);
main()
{
    float Speed;
    cout <<"Enter speed : ";
    cin >> Speed;

    string result = checkSpeed(Speed);
    cout << result <<endl;
}
string checkSpeed(float speed)
{
    string Title;

    if (speed <= 10)
    {
        Title = "Slow";
    }
    else if (speed > 10 && speed <= 50)
    {
        Title = "Average";
    }
    else if (speed > 50 && speed <= 150)
    {
        Title = "Fast";
    }
    else if (speed > 150 && speed <= 1000)
    {
        Title = "Ultra fast";
    }
    else
    {
        Title = "Extremely fast";
    }
    return Title;
}