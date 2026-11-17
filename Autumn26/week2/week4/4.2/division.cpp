#include <iostream>

void completediv(int a, int b, int& q, int& r)
{
    q = a/b;
    r = a-q*b;
}

int main()
{
    int a, b, q, r;
    std::cin >> a >> b;
    completediv(a,b,q,r);
    std::cout << "quotient " << q << ", remainder " << r << std::endl;
}