#include <iostream>

int main()
{
    std::cout << "Enter an integer number: ";
    int x;
    std::cin >> x;

    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < x; j++)
        {
            std::cout << "^ ";
        }
        std::cout << "\n";
    }



return 0;
}