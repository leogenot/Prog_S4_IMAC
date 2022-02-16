#ifndef GAME_FUNCTIONS_H
#define GAME_FUNCTIONS_H

#include <iostream>
#include <random>

#define MIN_VALUE 0
#define MAX_VALUE 100

/// Returns a random int between min (included) and max (included)
int rand(int min, int max);

int get_int_from_user();

void play_guess_the_number();

#endif