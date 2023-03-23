#include <iostream>
using namespace std;

char grade(int marks);

main()
{
    int marks;
    char Grade;

    cout <<"Enter marks : ";
    cin >> marks;

    Grade = grade(marks);
    cout <<"your grade is : " <<Grade <<endl;
}
char grade(int marks)
{
    char gd = '0';
    if (marks >= 0 && marks <=50)
    {
        gd = 'F';
    }
    else if (marks >= 51 && marks <= 60)
    {
        gd = 'E';
    }
    else if (marks >= 61 && marks <= 70)
    {
        gd = 'D';
    }
    else if (marks >= 71 && marks <= 80)
    {
        gd = 'C';
    }
    else if (marks >= 81 && marks <=85)
    {
        gd = 'B';
    }
    else
    {
        gd = 'A';
    }
    return gd;
}