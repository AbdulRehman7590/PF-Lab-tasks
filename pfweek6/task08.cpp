#include <iostream>
using namespace  std;
main()
{
    float budget, group, price, budget1;
    string cateogry;

    cout << "Enter the Budget : ";
    cin >> budget;
    cout << "Enter no. of people :";
    cin >> group;
    cout << "Enter cateogry of the ticket :";
    cin >> cateogry;

    if (group >= 1 && group <=4)
    {
        budget1 = (budget*75)/100;
    }
    else if (group >= 5 && group <= 9)
    {
        budget1 = (budget*60)/100;
    }
    else if (group >= 10 && group <= 24)
    {
        budget1 = (budget*50)/100;
    }
    else if (group >= 25 && group <= 49)
    {
        budget1 = (budget*40)/100;
    }
    else if (group > 49)
    {
        budget1 = (budget*25)/100;
    }

    if (cateogry == "VIP")
    {
        price = (group*499.99)+budget1;
    }
    else
    {
        price = (group*249.99)+budget1;
    }

    float final = budget-price;

    if(final > 0)
    {
        cout <<"Yes! You have " <<final <<" QR left." <<endl;
    }
    else
    {
        cout <<"Not enough money! You need " << -1*final <<" QR." <<endl;
    }
}
