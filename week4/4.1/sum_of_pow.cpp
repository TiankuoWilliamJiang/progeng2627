#include <iostream>
#include <cmath>

double sum(double x, int n){
    double sum = 0;
    for(int i = 1; i <= n; i++){
        sum = sum + std::pow(x, i);
    }
    return sum;

}

int main(){
    double x;
    int n;
    std::cin >> x;
    std::cin >> n;
    std::cout << sum(x, n);
}