#include <iostream>

int main()
{
    std::cout << "\n      ========SQUARE AREA CALCULATOR========\n";

    std::cout << "Enter the side length of the square:";
    double s;
    std::cin >> s;

    double area = s*s;
    std::cout << "The area of the square is: " << area << " sq.units" << std::endl;

    std::cout << "THANK YOU!\n\n";

    return 0;
}