#pragma once
#ifndef USER_INPUTS_H
#define USER_INPUTS_H

#include <iostream>

template<typename T>
T get_input_from_user()
{
    T input;
    std::cin >> input;
    while (std::cin.fail())
    {
        std::cout << "Wrong input type. Please, try again: ";
        std::cin.clear();
        std::cin.ignore(256, '\n');
        std::cin >> input;
    }
    return input;
}


#endif