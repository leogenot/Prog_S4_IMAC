#include <iostream>
#include <random>
#include "include/menu.h"
#include <p6/p6.h>

struct SquareIndex {
    int x;
    int y;
};

float square_radius(int size)
{
    return 1.f / size;
}

glm::vec2 square_index_position(SquareIndex index, int board_size)
 {
    auto _index = glm::vec2{index.x,index.y};
    return p6::map(_index,glm::vec2{0.f}, glm::vec2{static_cast<float>(board_size)},glm::vec2{-1.f}, glm::vec2{1.f});
 }

void draw_square(SquareIndex index, int board_size, p6::Context& ctx)
 {
     ctx.square(p6::BottomLeftCorner{square_index_position(index, board_size)},
                p6::Radius{square_radius(board_size)});
 }

void draw_board(int size, p6::Context& ctx)
 {
     for (int x = 0; x < size; ++x) {
         for (int y = 0; y < size; ++y) {
             draw_square({x,y}, size, ctx);
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