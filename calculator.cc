#include<iostream>


int main()
{
    std::cout << "\n        ============================\n";
    std::cout << "           ***** calculator *****\n";
    std::cout << "        ============================\n";

    std::cout << "Enter an operation:";//tell the user to enter an operation(+-/*)
    char operation;
    std::cin >> operation;


    std::cout << "Enter the num1:";//tell the user to enter a number 
    double num1;
    std::cin >> num1;

    std::cout << "Enter the num2:";//tell the user to enter another number
    double num2;
    std::cin >> num2;



    switch (operation)
    {
    
        case '+':

            std::cout << "Your result is: " << num1 + num2 << std::endl;//prints the sum of to numbers

        break;

        case '-':

            std::cout << "Your result is: " << num1 - num2 << std::endl;//prints the difference of the two numbers 

        break;

        case '*':

            std::cout << "Your result is: " << num1 * num2 << std::endl;//prints the product of the two numbers 

        break;

        case '/':

            if(num2==0)
            {
                std::cout << "Error: division by 0 is not allowed!";
            }
            else
            {
                std::cout << "Your result is: " << num1 / num2 << std::endl;//prints the quotient of the division of the two numbers
            }

        break;

    default:
        std::cout << "error:Enter a valid operation!\n";
        break;
    }
std::cout << "THANK YOU!\n";

return 0;

}

