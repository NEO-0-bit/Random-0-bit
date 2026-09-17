#include <iostream>
#include <random>//Modern C++ random number generation library

int main()
{
    // 1. Create a random device to seed the random number generator
    std::random_device rd;

    // 2. Initialize the Mersenne Twister engine with the seed
    std::mt19937 gen(rd());//Mersenne Twister engine is a widely used pseudorandom number generator 

    // 3. Define the inclusive range [min, max] (e.g., between 1 and 100)
    std::uniform_int_distribution<int> distr(1, 100);//Uniform distribution to ensure each number in the range has an equal chance of being selected

    // 4. Generate the random number
    int random_num = distr(gen);//Generate a random number between 1 and 100

    int userGuess = 0;
    int attempts = 0;


    std::cout << "==============================\n";
    std::cout << "      NUMBER GUESSING GAME    \n";   
    std::cout << "==============================\n";

    std::cout << "I have chosen a random number between 1-100.\n";
    std::cout << "Can you guess what it is🤔?\n\n";

    //THE MAIN GAME LOOP

        do {
            std::cout << "Enter your guess🫣 :";
            std::cin >> userGuess;
            attempts++;

                if (userGuess < random_num)
                {
                    std::cout << "Too Low! Try a Higher Number\n\n";
                }
                else if(userGuess > random_num)
                {
                    std::cout << "Too High! Try a Lower Number\n\n";
                }

                else
                {
                    std::cout << "🤯 Congratulations! You guessed it right!💥\n";
                    std::cout << "You took " << attempts << " attempts.\n";
                }
    

        } while (userGuess != random_num);

    return 0;
}