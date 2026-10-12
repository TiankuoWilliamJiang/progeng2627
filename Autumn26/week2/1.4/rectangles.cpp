#include <iostream>

int main()
{
    double length, width;
    
    std:: cout << "Enter the length of a rectangle: " << std:: endl;
    std:: cin >> length;
    std:: cout << "Enter the width of a rectangle: " << std:: endl;
    std:: cin >> width;

    std:: cout << "The perimeter is " << 2*length + 2*width << " and the area is " << width*length << ". " << std:: endl;
}