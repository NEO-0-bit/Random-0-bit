#include <iostream>

int main()
{
    std::cout << "\n\n      ********ELLIPSE AREA CALACULATOR********\n\n";

    double a,b,area;
    const double pi =  3.14159265359;

    std::cout << "Enter the length of Minor axis:";
    std::cin >> a;
    std::cout << "Enter the length of Major axis:";
    std::cin >> b;

    area = pi * a * b;

    std::cout << "The area of the Ellipse is " << area << " sq.units.\n";
    std::cout << "THANK YOU!\n\n";


    
}