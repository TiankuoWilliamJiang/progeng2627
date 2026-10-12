#include <iostream>

int main()
{
    int n;
    std:: cout << "Enter an integer: " << std:: endl;
    std:: cin >> n;

    if (n % 3 == 0)
    {
        std:: cout << "It is a multiple of 3. " << std:: endl;
    }
    else
    {
        std:: cout << "It is not a multiple of 3. " << std:: endl;
    }
}