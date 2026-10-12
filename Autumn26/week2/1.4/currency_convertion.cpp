#include <iostream>

int main()
{
    double amount, rate;

    std:: cout << "Enter amount of GBP you want to exchange: " << std:: endl;
    std:: cin >> amount;
    std:: cout << "Enter the exchange rate from GBP to EUR: " << std:: endl;
    std:: cin >> rate;

    std:: cout << "You get " << amount*rate << " Euros. " << std:: endl;
}