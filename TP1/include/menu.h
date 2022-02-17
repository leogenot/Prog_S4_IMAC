#ifndef MENU_H
#define MENU_H

#include <functional>
#include <unordered_map>
#include <iostream>
#include "user_inputs.h"
#include "hangman.h"
#include "guess_the_number.h"

struct Game {
    std::string           name;
    std::function<void()> play;
};

static const std::unordered_map<char, Game> games{
    {'1', {"Guess the Number", &play_guess_the_number}},
    {'2', {"Hangman", &play_hangman}},
};


void show_the_list_of_commands(const std::unordered_map<char, Game>& games);

void show_menu();

#endif