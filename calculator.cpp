#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float income_yearly, mortgage,income_monthly,payment;
    cout << "Enter your annual income and monthly mortgage separated by a space.\n";
    cin >> income_yearly >> mortgage;
    income_monthly = income_yearly/12;
    payment = income_monthly*.3;
    cout << fixed;
    cout << setprecision(2);
    if (mortgage <0 || payment <0 || income_yearly <0)
    {
        cout << "Both annual income and monthly mortgage must not be negative";
    }
    else if (payment > mortgage && payment!=0)//can afford house
    {
        cout << "You can afford the house!\n";
    }
    else //if (mortgage > payment && mortgage !=0)//cannot afford house
    {
        cout << "You cannot afford the house.\n";
        cout << "You can only afford a $" << payment <<" monthly payment.\n";
    }
   // else if (mortgage <0 && payment <0 && income_yearly <0)//incorrect values
   // {
   //     cout << "Both annual income and monthly mortgage must not be negative\n";
   // }
    return 0;
}
