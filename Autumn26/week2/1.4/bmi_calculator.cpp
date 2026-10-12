#include <iostream>

int main()
{
    double height, weight;

    std:: cout << "Enter your height in meters: " << std:: endl;
    std:: cin >> height;
    std:: cout << "Enter your weight in kg: " << std:: endl;
    std:: cin >> weight;

    std:: cout << "Your BMI is " << weight/ (height*height) << ". " << std:: endl;
}