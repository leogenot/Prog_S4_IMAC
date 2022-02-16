#include "include/game_functions.hpp"

#define MIN_VALUE 0
#define MAX_VALUE 100

/// Returns a random int between min (included) and max (included)
int rand(int min, int max)
{
    static std::default_random_engine generator{std::random_device{}()};
    std::uniform_int_distribution<int> distribution{min, max};
    return distribution(generator);
}

int get_int_from_user()
{
    int entered_value = 0;
    std::cin >> entered_value;
    while (std::cin.fail())
    {
        std::cout << "Wrong input type. Please, try again: ";
        std::cin.clear();
        std::cin.ignore(256, '\n');
        std::cin >> entered_value;
    }
    return entered_value;
}

void play_guess_the_number()
{
    int generated_number = rand(MIN_VALUE, MAX_VALUE);
    bool finished = false;
    
    std::cout << "Please enter a number btw 0 and 100: ";
    while (!finished)
    {
        int user_number = get_int_from_user();
        if (user_number == generated_number)
        {
            std::cout << "Good job!" << std::endl;
            finished = true;
        }
        else if (user_number < generated_number)
        {
            std::cout << "Enter a higher value: ";
        }
        else
        {
            std::cout << "Enter a lower value: ";
        }
    }
}