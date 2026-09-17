#include <iostream>

int main()
{
    std::cout << "\n        ========AREA OF CIRCLE========\n";

    std::cout <<"Enter the radius of the circle:";
    double r;
    const double pi = 3.14159265359;
    std::cin >> r;

    double area = pi * r * r;

    std::cout << "The area of the circle is: " << area << "\n";
    std::cout << "THANK YOU!\n\n";


    return 0;
}