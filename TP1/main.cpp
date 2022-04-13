#include <iostream>
#include <random>
#include "include/menu.h"
#include <p6/p6.h>

void draw_board(int size, p6::Context& ctx)
 {
     for (int x = 0; x < size; ++x) {
         for (int y = 0; y < size; ++y) {
             ctx.square(p6::BottomLeftCorner{p6::map(glm::vec2{x, y},
                                                     glm::vec2{0.f}, glm::vec2{static_cast <float> (size)},
                                                     glm::vec2{-1.f}, glm::vec2{1.f})},
                        p6::Radius{1.f / size});
         }
     }
 }

int main()
{
    // show_menu();
    auto ctx = p6::Context{{500, 500, "Nougs and "}};
    ctx.background({0.5f, 0.3f, 0.8f});
    ctx.update = [&]()
    {
        ctx.background({0.5f, 0.3f, 0.8f});
        /* ctx.circle(p6::Center{ctx.mouse()},
                   p6::Radius{0.3f}); */
        draw_board(3, ctx);
    };
    ctx.start();
}