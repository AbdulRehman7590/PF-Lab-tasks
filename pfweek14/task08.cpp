#include <iostream>
#include <fstream>
using namespace std;
void storeToFile(char array[][6], int size);
void LoadFromFile(char arr[][6]);
void updateTheFile(char arr[][6], int size);
void checkSeat(char arr[][6], int row, int col);

main()
{
    int rows = 13;
    char seatingPlan[rows][6] = {{'*', '*', '*', '*', '*', '*'},
                                   {'*', '*', '*', '*', '*', '*'},
                                   {'*', '*', '*', '*', '*', '*'},
                                   {'*', '*', '*', '*', '*', '*'},
                                   {'*', '*', '*', '*', '*', '*'},
                                   {'*', '*', '*', '*', '*', '*'},
                                   {'*', '*', '*', '*', '*', '*'},
                                   {'*', '*', '*', '*', '*', '*'},
                                   {'*', '*', '*', '*', '*', '*'},
                                   {'*', '*', '*', '*', '*', '*'},
                                   {'*', '*', '*', '*', '*', '*'},
                                   {'*', '*', '*', '*', '*', '*'},
                                   {'*', '*', '*', '*', '*', '*'}};
    int row, col;
    cout << "Enter Row No. : ";
    cin >> row;
    cout << "Enter Column No. : ";
    cin >> col;
    checkSeat(seatingPlan, row, col);
}

void storeToFile(char array[][6], int size)
{
    fstream seats;
    seats.open("SeatingPlan.txt", ios::app);
    for (int x = 0; x < size; x++)
    {
        for (int y = 0; y < 6; y++)
        {
            seats << array[x][y];
        }
        cout << endl;
    }
    seats.close();
}

void LoadFromFile(char arr[][6])
{
    fstream seats;
    seats.open("SeatingPlan.txt", ios::in);
    string line;
    int row = 0;
    while (getline(seats, line))
    {
        if (line != "")
        {
            for (int index = 0; index < line.length(); index++)
            {
                arr[row][index] = line[index];
            }
            row++;
        }
    }
}

void updateTheFile(char arr[][6], int size)
{
    fstream seats;
    seats.open("SeatingPlan.txt", ios::out);
    for (int x = 0; x < size; x++)
    {
        for (int y = 0; y < 6; y++)
        {
            seats << arr[x][y];
        }
        cout << endl;
    }
    seats.close();
}

void checkSeat(char arr[][6], int row, int col)
{
    if (arr[row - 1][col - 1] == '*')
    {
        cout << "Available" << endl;
        arr[row - 1][col - 1] = '*';
    }
    else
    {
        cout << "Not Available" << endl;
    }
}