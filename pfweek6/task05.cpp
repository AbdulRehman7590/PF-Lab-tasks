#include <iostream>
using namespace std;
float totalincome(string screening, int rows, int columns);
main()
{
    string screen;
    int rows, columns;

    cout <<"Enter no. of rows : ";
    cin >> rows;
    cout <<"Enter no. of columns :";
    cin >> columns;
    cout <<"Enter type of screening :";
    cin >> screen;
    
    float result = totalincome(screen, rows, columns);
    cout << result ;

}
float totalincome(string screening, int rows, int columns)
{
    float price = 0;

    if (screening == "Premiere")
    {
        price = (rows*columns)*12.00;
    }
    if (screening == "Normal")
    {
        price = (rows*columns)*7.50;
    }
    if (screening == "Discount")
    {
        price = (rows*columns)*5.00;
    }
    return price;
}