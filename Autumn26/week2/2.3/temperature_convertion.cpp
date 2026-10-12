#include <iostream>
#include <string>

int main(){

    double t_in, t_out;
    std::string unit_in, unit_out;

    std::cin >> t_in >> unit_in;

    if(unit_in == "F" or unit_out == "f"){
        unit_out = "C";
        t_out = (t_in-32) *5 /9;
    }
    else if(unit_in == "C" or unit_in == "c"){
        unit_out = "F";
        t_out = t_in *9 /5 +32;
    }
    else
    {
        std::cout << "Error, invalid unit. " << std::endl;
    }

    std::cout << t_out << " " << unit_out << std::endl;
}