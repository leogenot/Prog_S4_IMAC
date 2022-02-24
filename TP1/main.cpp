#include <iostream>
#include <random>
#include "include/menu.h"
#include <p6/p6.h>


int main()
{
    // show_menu();
    auto ctx   = p6::Context{{500, 500, "Nougs and "}};
         ctx.background({0.5f, 0.3f, 0.8f}); 
     ctx.update = [&]() {
         ctx.background({0.5f, 0.3f, 0.8f}); // Clear the background with some color (Try to comment out this line to see what happens)
        ctx.circle(p6::Center{ctx.mouse()}, // Draw a circle centered on the mouse cursor
                   p6::Radius{0.3f});  
         };
     ctx.start();
}