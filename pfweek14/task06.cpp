#include <iostream>
using namespace std;
void merge(int array1[][3], int size1, int array2[][3], int size2);
main()
{
    int size1 = 3;
    int size2 = 3;
    int matrix1[size1][3] = {{1, 2, 3},
                             {4, 5, 6},
                             {7, 8, 9}};
    int matrix2[size2][3] = {{9, 8, 7},
                             {6, 5, 4},
                             {3, 2, 1}};
    merge(matrix1, size1, matrix2, size2);
}
void merge(int array1[][3], int size1, int array2[][3], int size2)
{
    int count2 = 0;
    int matrix3[3][6];
    for (int x = 0; x < size1; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            matrix3[x][y] = array1[x][y];
        }
    }
    count2 = 3;
    for (int x = 0; x < size2; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            matrix3[x][count2 + y] = array2[x][y];
        }
    }
    for (int x = 0; x < 3; x++)
    {
        for (int y = 0; y < 6; y++)
        {
            cout <<matrix3[x][y] << " ";
        }
        cout << endl;
    }
    
}