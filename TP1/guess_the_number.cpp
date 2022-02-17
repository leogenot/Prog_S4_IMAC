#include "include/guess_the_number.h"


void play_guess_the_number()
{
    const int generated_number = rand(MIN_VALUE, MAX_VALUE);
    bool finished = false;
    
    std::cout << "Please enter a number btw 0 and 100: ";
    while (!finished)
    {
        int user_number = get_input_from_user<int>();
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