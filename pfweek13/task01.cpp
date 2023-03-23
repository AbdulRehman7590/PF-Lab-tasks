#include <iostream>
#include <fstream>
#include <windows.h>
#include <conio.h>

using namespace std;

int matrix[3][3] = {
    {1, 0, 0},
    {0, 1, 0},
    {0, 0, 1}};
void checkidentity();

main()
{
    checkidentity();
}
void checkidentity()
{
    int count = 0, counter = 0;
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            if (row == col && matrix[row][col] == 1)
            {
                count++;
            }
            if (row != col && matrix[row][col] == 0)
            {
                counter++;
            }
        }
    }
    if (count == 3 && counter == 6)
    {
        cout << "Yes ! It is identity" << endl;
    }
    else
    {
        cout << "NO!" << endl;
    }
}