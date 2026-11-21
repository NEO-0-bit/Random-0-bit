#include <iostream>

using namespace std;

int main()
{
    cout << "\n     ***** CALCULATOR *****\n";
    
    int choice{};
do
{
    cout << "1. Addition\n";
    cout << "2. Substraction\n";
    cout << "3. Multplication\n";
    cout << "4. Divion\n";
    cout << "5. Modulus\n";
    cout << "6. Exit\n";
    cout << "Chose an option: ";
    cin >> choice;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(10000, '\n');
            choice = 0; 
        }

        if (choice == 6) {
            cout << "Exiting calculator. Goodbye!\n";
            break;
        }

        if (choice < 1 || choice > 6) {
            cout << "Invalid choice! Please select 1-6.\n";
            continue;
        }
    

    double num1{};
    double num2{};

    cout << "Enter num1: ";
    cin >> num1;
    
    cout << "Enter num2: ";
    cin >> num2;
    
    switch (choice) {
        
        case 1 :
                cout << "Result = " << num1 + num2 << "\n";
                break;
                
        case 2 :
                cout << "Result = " << num1 - num2 << "\n";
                break;
                
        case 3 :
                cout << "Result = " << num1 * num2 << "\n";
                break;
                
        case 4 :
                
                if(num2 == 0)
                {
                    cout << "Error! division by 0 is not allowed.\n";
                }
                else {
                    cout << "Result = " << num1 / num2 <<+ "\n";    
                }
                break;
                
        case 5 :
                if(num2 == 0)
                {
                    cout << "Error! division by 0 is not allowed.\n";
                }
                else if(num1 != (int)num1 || num2 != (int)num2)
                {
                    cout << "Error! modulo by 0 is not allowed.\n";
                }
                else
                {
                    cout << "Result = " << (int)num1 % (int)num2 << "\n";
                }
                break;
                
        default : cout << "Error! Invalid operator.\n";
    }
} while(choice != 6);
    return 0;
}
