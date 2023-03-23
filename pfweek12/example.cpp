#include <iostream>
#include <fstream>
#include <windows.h>
#include <conio.h>

using namespace std;

main()
{
    string word;
    int counter = 0;
    fstream file;
    file.open("example.txt", ios::in);
    while (!file.eof())
    {
        getline(file, word);
        counter++;
    }
    cout <<"The program has : " <<counter <<" lines." <<endl;
    file.close();
}