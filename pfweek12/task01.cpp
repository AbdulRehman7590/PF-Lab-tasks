#include <iostream>
#include <fstream>
#include <windows.h>
#include <conio.h>
using namespace std;

// prototypes
void SignUp(string user, string pass);
bool login(string user, string pass);
void viewusers();
void storetofile(string user, string pass);
bool isValidUser(string user);
int takeoption();
void loadfromfile();

// global arrays
string username[100];
string password[100];
int count = 0;

main()
{
    loadfromfile();
    int num = 7;
    string name, pass;
    while (num != 0)
    {
        num = takeoption();
        if (num == 1)
        {
            cout << "Enter user name : ";
            cin >> name;
            cout << "Enter password : ";
            cin >> pass;
            if (isValidUser(name) == false)
            {
                SignUp(name, pass);
                storetofile(name, pass);
            }
            else
            {
                cout << "User name already exists. " << endl;
            }
        }
        if (num == 2)
        {
            cout << "Enter user name : ";
            cin >> name;
            cout << "Enter password : ";
            cin >> pass;
            if (login(name, pass) == true)
            {
                cout << "Login successfully.";
            }
            else
            {
                cout << "Login Failed.";
            }
        }
        if (num == 3)
        {
            viewusers();
        }
    }
}
void SignUp(string user, string pass)
{

    username[count] = user;
    password[count] = pass;
    count++;
}
bool login(string user, string pass)
{
    bool flag = false;
    for (int x = 0; x < count; x++)
    {
        if (username[x] == user && password[x] == pass)
        {
            flag = true;
            break;
        }
    }
    return flag;
}
void viewusers()
{
    cout << "UserName \t \t Password" << endl;
    for (int idx = 0; idx < count; idx++)
    {
        cout << username[idx] << "\t \t" << password[idx] << endl;
    }
}
void storetofile(string user, string pass)
{
    fstream sign;
    sign.open("UserData.txt", ios::app);
    sign << user << endl;
    sign << pass << endl;
    sign.close();
}
bool isValidUser(string user)
{
    bool check = false;
    for (int x = 0; x < count; x++)
    {
        if (username[x] == user)
        {
            check = true;
            break;
        }
    }
    return check;
}
int takeoption()
{
    int choice;
    cout << "01. Sign up a user." << endl;
    cout << "02. Sign in a user." << endl;
    cout << "03. View users." << endl;
    cout << "04. Exit." << endl
         << endl;
    cout << "Select Option : ";
    cin >> choice;
    return choice;
}
void loadfromfile()
{
    string name, pass;
    fstream sign;
    sign.open("UserData.txt", ios::in);
    while (getline(sign, name) && getline(sign, pass))
    {
        username[count] = name;
        password[count] = pass;
        count++;
    }

    sign.close();
}