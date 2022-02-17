#include "include/menu.h"
#include <functional>
#include <unordered_map>
#include <iostream>


void show_the_list_of_commands(const std::unordered_map<char, Game>& games)
{
    std::cout << "Which game do you wanna play?" << std::endl;
    for (const auto& [command, game] : games) {
        std::cout << command << ": Play \"" << game.name << "\"\n";
    }
    std::cout << "q: Quit\n";
}

void show_menu()
{
    bool quit = false;
    while (!quit) {
        show_the_list_of_commands(games);
        const auto command = get_input_from_user<char>();
        if (command == 'q') {
            quit = true;
        }
        else {
            const auto game = games.find(command);
            if (game != games.end()) {
                game->second.play();
            }
            else {
                std::cout << "Wrong input, please try again" << std::endl<< std::endl;
            }
        }
    }
}