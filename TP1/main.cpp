#include <iostream>
#include <random>
#include "include/menu.h"
#include <p6/p6.h>
int main()
{
    //show_menu();
    auto ctx = p6::Context{{1280, 720, "My p6 project"}}; // Create a context with a window
    ctx.start();        

}