#include <iostream>
#include <random>
#include <optional>
#include "include/menu.h"
#include <p6/p6.h>

struct SquareIndex
{
    int x;
    int y;
};

float square_radius(int size)
{
    return 1.f /  size;
}

glm::vec2 square_index_position(SquareIndex index, int board_size)
{
    auto _index = glm::vec2{index.x, index.y};
    return p6::map(_index, glm::vec2{0.f}, glm::vec2{static_cast<float>(board_size)}, glm::vec2{-1.f}, glm::vec2{1.f});
}

glm::vec2 square_center(SquareIndex index, int board_size)
 {
     return square_index_position(index, board_size) + square_radius(board_size);
 }


void draw_square(SquareIndex index, int board_size, p6::Context &ctx)
{
    ctx.square(p6::BottomLeftCorner{square_index_position(index, board_size)},
               p6::Radius{square_radius(board_size)});
}

void draw_board(int size, p6::Context &ctx)
{
    for (int x = 0; x < size; ++x)
    {
        for (int y = 0; y < size; ++y)
        {
            draw_square({x, y}, size, ctx);
        }
    }
}

std::optional<SquareIndex> hovered_square(glm::vec2 position, int board_size)
{
    const auto pos = p6::map(position, glm::vec2{-1.f}, glm::vec2{1.f}, glm::vec2{0.f}, glm::vec2{static_cast<float>(board_size)});
    const auto index = SquareIndex{
        static_cast<int>(std::floor(pos.x)),
        static_cast<int>(std::floor(pos.y))};
    if (index.x >= 0 && index.x < board_size &&
        index.y >= 0 && index.y < board_size)
    {
        return std::make_optional(index);
    }
    else
    {
        return std::nullopt;
    }
}


void draw_circle(SquareIndex index, int board_size, p6::Context& ctx)
 {
     ctx.circle(p6::Center{square_center(index, board_size)},
                p6::Radius{0.9f * square_radius(board_size)});
 }

void draw_cross(SquareIndex index, int board_size, p6::Context& ctx)
 {
     const auto center   = p6::Center{square_center(index, board_size)};
     const auto radii    = p6::Radii{glm::vec2{0.5f, 0.5f} * square_radius(board_size)};
     ctx.rectangle(center, radii);
 }



int main()
{
    // show_menu();
    static constexpr int board_size = 3;
    auto ctx = p6::Context{{500, 500, "Nougs and crosses"}};
    ctx.background({0.5f, 0.5f, 0.5f});
    ctx.update = [&]()
    {
        ctx.background({0.5f, 0.5f, 0.5f});
        ctx.stroke_weight = 0.01f;
        ctx.stroke        = {1.f, 1.f, 1.f, 1.f};
        /* ctx.circle(p6::Center{ctx.mouse()},
                   p6::Radius{0.3f}); */
        draw_board(board_size, ctx);
        const auto hovered_cell = hovered_square(ctx.mouse(), board_size);
        if (hovered_cell.has_value())
        {
            draw_cross(*hovered_cell, board_size, ctx);
        }
    };
    ctx.start();
}