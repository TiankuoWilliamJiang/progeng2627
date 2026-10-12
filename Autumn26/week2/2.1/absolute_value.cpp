#include <iostream>

int main()
{
    double n;

    std:: cout << "Enter a number: " << std:: endl;
    std:: cin >> n;

    if (n < 0)
    {
        n = -n;
    }

    std:: cout << "Its absolute value is " << n << std:: endl;
}