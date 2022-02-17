#ifndef HANGMAN_H
#define HANGMAN_H

#include <array>
#include <cassert>
#include <iostream>
#include "user_inputs.h"
#include "rand.h"
#include <algorithm>


class WordToFind {
public:
    WordToFind(std::string_view word)
        : _complete_word{word}
        , _found_letters(word.size(), false)
    {
    }

    void mark_as_guessed(char guessed_letter);

    const std::string&       word() const { return _complete_word; }                        
    const std::vector<bool>& guessed_letters() const { return _found_letters; } 

private:
    std::string       _complete_word;
    std::vector<bool> _found_letters;
};

const char* pick_a_random_complete_word();

void show_nb_lives(int nb_lives);

inline bool player_is_alive(int nb_lives){return nb_lives > 0;}

bool player_has_won(const std::vector<bool>& guessed_letters);

void show_complete_word_to_guess_with_missing_letters(const WordToFind& word);

bool word_contains(char letter, std::string_view word);

inline void remove_one_life(int& lives_count){lives_count--;}

void show_congrats_message(std::string_view word_to_guess);

void show_defeat_message(std::string_view word_to_guess);

void play_hangman();

#endif