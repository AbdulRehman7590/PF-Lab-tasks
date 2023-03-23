#include <iostream>
#include <fstream>
#include <windows.h>
#include <conio.h>
using namespace std;

int matrix[4][3]={
    {0, 0, 0},
    {0, 1, 2},
    {0, 0, 0},
    {2, 1, 0}
};
int identicalRows();
main()
{
    cout << identicalRows();
}
int identicalRows()
{
    int count = 0;
    for (int row = 0; row < 4; row++)
    {
        for (int col = row + 1; col < 4; col++)
        {
            if(matrix[row][0] == matrix[col][0] && matrix[row][1] == matrix[col][1] && matrix[row][2]== matrix[col][2])
            {
                count++;
                break;
            }
        }
    }
    return count;
}