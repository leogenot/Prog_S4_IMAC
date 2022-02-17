#include "include/hangman.h"

void WordToFind::mark_as_guessed(char guessed_letter) 
{                                                     
    std::transform(_found_letters.begin(), _found_letters.end(), _complete_word.begin(), _found_letters.begin(), [&](bool b, char letter)
                   {
            if (guessed_letter == letter) {
                return true;
            }
            else {
                return b;
            } });
}

const char *pick_a_random_complete_word()
{
    static constexpr std::array words = {
        "code",
        "crous",
        "imac",
        "opengl",
    };

    return words[rand<size_t>(0, words.size() - 1)];
}

void show_nb_lives(int nb_lives)
{
    std::cout << "You have " << nb_lives << " lives" << std::endl;
}

bool player_has_won(const std::vector<bool> &guessed_letters)
{
    return std::all_of(guessed_letters.begin(), guessed_letters.end(), [](bool letter_guessed) { return letter_guessed; });
}

void show_complete_word_to_guess_with_missing_letters(const WordToFind &word)
{
    for (size_t i = 0; i < word.word().size(); ++i)
    {
        if (word.guessed_letters()[i])
        {
            std::cout << word.word()[i];
        }
        else
        {
            std::cout << '_';
        }
        std::cout << ' ';
    }
    std::cout << std::endl;
}

bool word_contains(char letter, std::string_view word)
{
    return word.find(letter) != std::string_view::npos;
}

void show_congrats_message(std::string_view word_to_guess)
{
    std::cout << "You won! The word was : " << word_to_guess << std::endl;
}

void show_defeat_message(std::string_view word_to_guess)
{
    std::cout << "You failed... The word was : " << word_to_guess << std::endl;
}

void play_hangman()
{
    WordToFind word{pick_a_random_complete_word()};
    int nb_lives = 8;
    while (player_is_alive(nb_lives) && !player_has_won(word.guessed_letters()))
    {
        show_nb_lives(nb_lives);
        show_complete_word_to_guess_with_missing_letters(word);
        const auto guess = get_input_from_user<char>();
        if (word_contains(guess, word.word()))
        {
            word.mark_as_guessed(guess);
        }
        else
        {
            remove_one_life(nb_lives);
        }
    }
    if (player_has_won(word.guessed_letters()))
    {
        show_congrats_message(word.word());
    }
    else
    {
        show_defeat_message(word.word());
    }
}