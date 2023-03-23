#include <iostream>
using namespace std;
bool sparse(int array[][3], int size);
main()
{
    int size = 3;
    int matrix[size][3] ={{1, 0, 4},
                          {0, 0, 5},
                          {0, 7, 0}};
    cout << sparse(matrix, size);
}
bool sparse(int array[][3], int size)
{
    bool flag = false;
    int count = 0;
    for (int x = 0; x < size; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            if(array[x][y] == 0)
            {
                count++;
            }
        }
    }
    if (count > (size*3)/2)
    {
        flag = true;
    }
    return flag;
}