#include <iostream>
#include <fstream>
#include <windows.h>
#include <conio.h>
using namespace std;

string stage[5][5] = {
    {".", ".", ".", "*", "*"},
    {".", "*", ".", ".", "."},
    {".", "*", ".", ".", "."},
    {".", "*", ".", ".", "."},
    {".", ".", "*", "*", "."},
};
int checkvalue(char rows);
string checkCollision(int Row, int Col);
main()
{
    string input;
    cout <<"Enter input location : ";
    cin >> input;
    char row = input[0];
    char col = input[1];
    int colindex = int(col) - '0';
    int rowindex = checkvalue(row);
    cout << checkCollision(rowindex, colindex);
}
int checkvalue(char rows)
{
    int num = 0;
    if (rows == 'a' || rows == 'A')
    {
        num = 0;
    }
    else if (rows == 'b' || rows == 'B')
    {
        num = 1;
    }
    else if (rows == 'c' || rows == 'C')
    {
        num = 2;
    }
    else if (rows == 'd' || rows == 'D')
    {
        num = 3;
    }
    else if (rows == 'e' || rows == 'E')
    {
        num = 4;
    }
    return num;
}
string checkCollision(int Row, int Col)
{
    string item = "";

    if (stage[Row][Col] == ".")
    {
        item = "Splash !";
    }
    if (stage[Row][Col] == "*")
    {
        item = "Boom!";
    }
    return item;   
}