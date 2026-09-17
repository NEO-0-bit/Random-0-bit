    #include <iostream>

    int main()
    {
        std::cout << "\n          ======================================================\n";
        std::cout << "           ******** 🌡️ 💥 TEMPERATURE CONVERTER  💥🌡️ ********\n";
        std::cout << "          ======================================================\n\n";

        std::cout << "Chose into which unit you want to convert.\n";
        std::cout << "1 for convert °C to °F.\n";
        std::cout << "2 for convert °F to °C.\n";
        std::cout << "3 for convert °C to K\n";
        std::cout << "4 for convert K to °C\n";
        std::cout << "5 for convert °F to K\n";
        std::cout << "6 for convert K to °F\n\n";
        std::cout << "Chose (1-6 only) into which unit you want to convert:";
        
        int a;
        std::cin >> a;
        double cel,fah,kel;
        
        switch (a)
        {
        case 1 :

            std::cout << "Enter the °C value:";        
            std::cin >> cel;
            
            fah = (cel * 1.8) + 32;
            
            std::cout << "Your result is: " << fah << " °F\n\n";
            std::cout << "      ***** THANK YOU! *****\n\n";

            break;

        case 2 :

            std::cout << "Enter the °F value:";
            std::cin >> fah;

            cel = (fah - 32) / 1.8;

            std::cout << "Your result is: " << cel << " °C\n\n";
            std::cout << "      ***** THANK YOU! *****\n\n";

            break;

        case 3 :
            
            std::cout << "Enter the °C value:";
            std::cin >> cel;

            kel = cel + 273.15;

            std::cout << "Your result is: " << kel << " K\n\n";
            std::cout << "      ***** THANK YOU! *****\n\n";

            break;

        case 4 :
            
            std::cout << "Enter the Kelvin value:";
            std::cin >> kel;

            cel = kel - 273.15;

            std::cout << "Your result is: " << cel << " °C\n\n";
            std::cout << "      ***** THANK YOU! *****\n\n";

            break;

        case 5 :
            
            std::cout << "Enter the °F value:";
            std::cin >> fah;

            kel = ((fah - 32)*1.8) + 273.15;

            std::cout << "Your result is: " << kel << " K\n\n";
            std::cout << "      ***** THANK YOU! *****\n\n";

            break;

        case 6 :

            std::cout << "Enter the Kelvin value:";
            std::cin >> kel;

            fah = ((kel -273.15)/1.8) + 32;
            
            std::cout << "Your result is: " << fah << " °F\n\n";
            std::cout << "      ***** THANK YOU! *****\n\n";

            break;
        
        default:
            std::cout << "ERROR! PLEASE ENTER ONLY FROM 1-6.\n";
            break;
        }
        

        return 0;

    }