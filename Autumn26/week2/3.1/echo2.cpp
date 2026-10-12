#include <iostream>
#include <string>

int main(){
    std:: string n;

    std::cin >> n;

    while(n != "stop" and n != "STOP" and n != "Stop"){
        std::cout << n << std::endl;
        std::cin >> n;
    }
}