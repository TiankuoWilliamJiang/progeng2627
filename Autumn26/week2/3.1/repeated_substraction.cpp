#include <iostream>

int main()
{
    int a, b, r, q = 0;

    std:: cin >> a >> b;
    r = a;
    while (r >= 0)
    {
        r = r - b;
        q = q + 1;
    }
    q = q - 1;
    r = r + b;
    std:: cout << a << " / " << b << " = " << q << " ... " << r << std:: endl;
}