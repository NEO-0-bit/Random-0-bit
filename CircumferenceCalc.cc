#include <iostream>

int main()
{
    std::cout << "\n\n      ********CIRCUMFERENCE OF CRICLE CALCULATOR********\n\n";

    double r,c;
    const double pi = 3.14159265359;

    std::cout << "Enter the radius of the circle:";
    std::cin >> r;

    c = 2 * pi * r;

    std::cout << "The circumference of the circle is " << c << " sq.units\n";
    std::cout << "THANK YOU!\n\n";
    
    return 0;
}