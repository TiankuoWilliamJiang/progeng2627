#include <iostream>

int smallest_factor(int n)
{
    for(int cf = 2; cf <= n; cf++)
    {
        if( (n % cf) == 0)
        {
            return cf;
        }
    }
    return -1;
}

int main()
{
    int n = 101;
    std::cout << smallest_factor(n) << std::endl;
}