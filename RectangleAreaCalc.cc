#include <iostream>

int main()
{
    std::cout << "\n\n      ********RECTANGLE AREA CACLCULATOR********\n\n";

    double a,b,area;
    
    std::cout << "Enter the length:";
    std::cin >> a;
    std::cout << "Enter the breadth:";
    std::cin >> b;

    area = a * b;

   std::cout << "The area of the rectangle is: " << area << " sq.units.\n";
   std::cout << "THANK YOU!\n\n";



    return 0;
}