#include <iostream>
#include <fstream>
#include <windows.h>
#include <conio.h>

using namespace std;
int cars[5][5] = {
    {10, 7, 12, 10, 4},
    {18, 11, 15, 17, 2},
    {23, 19, 12, 16, 14},
    {7, 12, 16, 0, 2},
    {3, 5, 6, 2, 1}};

void printcars();
void redcars();
void transpose();
void totalcars();

main()
{
    totalcars();
}
void printcars()
{
    for (int x = 0; x < 5; x++)
    {
        for (int y = 0; y < 5; y++)
        {
            cout << cars[x][y] << "\t";
        }
        cout << endl;
    }
}
void redcars()
{
    int sum = 0;
    for (int y = 0; y < 5; y++)
    {
        sum = sum + cars[y][0];
    }
    cout <<"Total red cars are : " <<sum <<endl;
}
void transpose()
{
    for (int x = 0; x < 5; x++)
    {
        for (int y = 0; y < 5; y++)
        {
            cout << cars[y][x] << "\t";
        }
        cout << endl;
    }
}
void totalcars()
{
    int sum = 0;
    for (int x = 0; x < 5; x++)
    {
        for (int y = 0; y < 5; y++)
        {
            sum = sum + cars[x][y];
        }
    }
    cout <<"Total cars are : " <<sum <<endl;
}