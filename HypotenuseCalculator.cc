#include <iostream>
#include <cmath>

int main()
{
    std::cout << "      =====HYPOTENUSE CALCULATOR=====\n";

    std::cout << "Enter the lengths of the perpendicular sides!\n";
    double a,b;
    std::cin >> a >> b;

    double hypo;
    hypo = sqrt(a*a + b*b);
    std::cout << "The length of hyptenuse is: " << hypo << " sq.units\n\n";

    std::cout << "THANK YOU!\n";

    return 0;
}