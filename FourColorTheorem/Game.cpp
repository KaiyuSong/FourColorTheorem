#include "Game.hpp"

int mapdata[4][20][40] = {
    {
        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 9, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,-1,-1,-1,-1,-1,-1, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        { 4, 4, 0, 0, 0, 9, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1, 6, 0, 0, 0, 0, 0, 0, 6, 0, 4, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 6, 0,-1,-1, 6,-1,-1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 6, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 9, 0, 8, 6, 0,-1,-1, 6,-1,-1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0},
        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6,-1,-1,-1,-1,-1,-1, 6, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6,-1,-1, 6,-1,-1, 0, 0, 0},
        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6,-1,-1,-1,-1,-1,-1, 6, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6,-1,-1, 6,-1,-1, 0, 0, 0},
        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6,-1,-1, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6,-1,-1, 6,-1,-1, 0, 0, 0},
        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6,-1,-1, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6,-1,-1,-1,-1,-1, 0, 0, 2},
        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6,-1,-1, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 6,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1, 0, 0, 1},
        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6,-1,-1, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 6,-1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6,-1,-1, 4, 4, 9, 0, 8, 0, 0, 0, 6, 0, 0, 0, 6,-1, 4, 4, 4, 0, 0, 0, 9, 8, 0, 0, 0, 0, 1},
        {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1}
    },
    {
        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        { 0, 0, 0, 0, 0, 0, 0, 0, 4, 4, 0, 9, 8, 0, 0, 0, 0, 9, 0, 0, 8, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        { 0, 0, 0, 0, 0, 0, 0, 0,-5,-5,-5,-5,-5,-2, 6,-2,-5,-5,-5,-5,-5,-5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        { 0, 0, 4, 0, 9, 0, 0, 8, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 8, 4, 0, 0},
        { 0, 0,-5,-5,-5,-5,-5,-5,-5, 6, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6,-5,-5,-5,-5,-5,-5, 0, 0},
        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0},
        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0},
        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0},
        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 4, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0},
        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 6,-2,-2,-2,-2,-2, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0},
        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 6,-2,-2,-2,-2,-2, 6, 0, 0, 0,-2,-2,-2,-2,-2,-2, 6,-2,-2,-2,-2,-2,-2, 0, 0, 0, 0, 0, 0, 0, 2},
        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 6,-2,-2,-2,-2,-2, 6, 0, 0, 0,-2, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0,-2, 0, 0, 0, 0, 0, 0, 0, 1},
        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 6,-2,-2,-2,-2,-2, 6, 0, 0, 0,-2, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0,-2, 0, 0, 0, 0, 0, 0, 0, 1},
        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 6,-2,-2,-2,-2,-2, 6, 0, 0, 0,-2, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0,-2, 0, 0, 0, 0, 0, 0, 0, 1},
        { 0, 0, 0, 0, 0, 9, 0, 8, 0, 6,-2,-2,-2,-2,-2, 6, 0, 0, 0,-2, 4, 4, 0, 9, 8, 6, 9, 0, 0, 4, 8,-2, 0, 0, 0, 0, 4, 0, 0, 1},
        {-2,-2,-5,-5,-5,-5,-5,-5,-2,-2,-2,-2,-2,-2,-2,-2,-2,-2,-2,-2,-5,-5,-5,-5,-5,-5,-5,-5,-5,-5,-5,-2, 0, 0, 0,-2,-2,-2,-2,-2}
    },
    {
        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        { 4, 4, 0, 0, 9, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 9, 0, 8, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 8, 4, 4,-3},
        {-3,-3,-3,-3,-3,-3,-3,-3, 6, 0, 0, 0, 0, 0, 0, 6,-3,-3,-3,-3,-3,-3,-3,-3, 6, 0, 0, 0, 0, 0, 0, 6,-3,-3,-3,-3,-3,-3,-3,-3},
        { 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0},
        { 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0},
        { 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0},
        { 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0},
        { 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 9, 0, 8, 4, 6, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 9, 8, 4, 6, 0, 0, 0, 0, 0, 0, 0, 0},
        { 0, 0, 0, 0, 0, 0, 0, 6,-3,-3,-3,-3,-3,-3,-3,-3, 6, 0, 0, 0, 0, 0, 0, 6,-3,-3,-3,-3,-3,-3,-3,-3, 6, 0, 0, 0, 0, 0, 0, 0},
        { 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 2},
        { 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 1},
        { 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 1},
        { 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 1},
        { 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 6, 4, 4, 0, 9, 0, 8, 6, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 9, 8, 0, 1},
        {-3,-3,-3,-3,-3,-3,-3,-3, 0, 0, 0, 0, 0, 0, 0, 0,-3,-3,-3,-3,-3,-3,-3,-3, 0, 0, 0, 0, 0, 0, 0, 0,-3,-3,-3,-3,-3,-3,-3,-3}
    },
    {
        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 5, 0, 0, 9, 8, 5, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,-4,-4,-4,-4, 6,-4,-4,-4,-4,-4, 6, 0, 0, 0, 0, 0, 0, 0, 0},
        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0},
        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0},
        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 4, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0},
        { 0, 0, 0, 0, 0, 0, 0, 0, 6,-4,-4,-4,-4,-4, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0},
        { 0, 0, 0, 0, 0, 0, 0, 0, 6,-4, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 2},
        { 4, 5, 9, 0, 8, 0, 0, 0, 6,-4, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 4, 0, 6, 9, 5, 8, 4, 0, 6, 0, 0, 0, 0, 0, 0, 0, 1},
        {-4,-4,-4,-4,-4, 6, 0, 0, 6,-4, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 6,-4,-4,-4,-4, 6,-4,-4,-4,-4, 0, 6, 0, 0, 0, 0, 0, 0, 0, 1},
        { 0, 0, 0, 0, 0, 6, 0, 0, 6,-4, 0, 0, 0, 0, 6, 5, 9, 4, 5, 8, 6, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 1},
        { 0, 0, 0, 0, 0, 6, 0, 0, 6,-4, 0, 0, 0, 0,-4,-4,-4,-4,-4,-4, 6, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 6, 5, 5, 0, 9, 4, 5, 8, 1},
        { 0, 0, 0, 0, 0, 6, 0, 0, 6,-4, 0, 0, 0, 0, 0, 0, 0, 0, 0,-4, 6, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0,-4,-4,-4,-4,-4,-4,-4,-4,-4},
        { 0, 0, 0, 0, 0, 6, 5, 5, 6, 9, 4, 8, 0, 0, 0, 0, 0, 0, 0,-4, 6, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        { 0, 0, 0, 0, 0, 6,-4,-4,-4,-4,-4,-4, 0, 0, 0, 0, 0, 0, 0,-4, 6, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        { 0, 0, 0, 0, 0, 6, 0, 0, 0,-4,-4,-4, 0, 0, 0, 0, 0, 0, 0,-4, 6, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        { 0, 0, 0, 0, 0, 6, 0, 0, 0,-4,-4,-4, 0, 0, 0, 0, 0, 0, 0,-4, 6, 5, 9, 4, 8, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        { 0, 0, 0, 0, 0, 6, 0, 0, 0,-4,-4,-4, 0, 0, 0, 0, 0, 0, 0,-4,-4,-4,-4,-4,-4,-4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {-4,-4,-4,-4,-4,-4, 0, 0, 0,-4,-4,-4, 0, 0, 0, 0, 0, 0, 0,-4,-4,-4,-4,-4,-4,-4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
    }
};

Player* player;
Map* map;
Robot* robot[7];
int NumberOfRobot = 7;
Money* money[10];
int NumberOfMoney = 10;
Fire* fire[15];
int NumberOfFire = 15;
Text* Life;
Text* Credits;
Text* LifeValue;
Text* CreditsValue;

SDL_Renderer* Game::renderer = nullptr;

Game::Game()
{}
Game::~Game()
{}

void Game::init(const char *title, int xpos, int ypos, int width, int height, bool fullscreen){
    int flag = 0;
    if (fullscreen) {
        flag = SDL_WINDOW_FULLSCREEN;
    }
    
    if (SDL_Init(SDL_INIT_EVERYTHING) == 0) {
        cout << "init" << endl;
        window =SDL_CreateWindow(title, xpos, ypos, width, height, flag);
        if(window){
            cout << "Windows created" << endl;
        }
        renderer = SDL_CreateRenderer(window, -1, 0);
        if (renderer) {
            SDL_SetRenderDrawColor(renderer, 200, 200, 200, 100);
            cout << "Renderer created" << endl;
        }
        isRunning = true;
        
    }else{
        isRunning = false;
    }
    level = 0;
    speed = 8;
    player = new Player(0, 576);
    int i =0;
    for (int row = 0; row < 20; row++) {
        for (int col = 0; col < 40; col++) {
            if(mapdata[level][row][col]==8){
                robot[i] = new Robot(col*32, row*32);
                i++;
            }
        }
    }
    int j = 0;
    for (int row = 0; row < 20; row++) {
        for (int col = 0; col < 40; col++) {
            if (mapdata[3][row][col] == 5) {
                fire[j] = new Fire(col*32, row*32);
                j++;
            }
        }
    }
    int k = 0;
    for (int row = 0; row < 20; row++) {
        for (int col = 0; col < 40; col++) {
            if(mapdata[level][row][col]==4){
                money[k] = new Money(col*32, row*32);
                k++;
            }
        }
    }
    map = new Map(mapdata[level]);
    pl = pr = pu = pd = 0;
    leftside = 0;
    midscreen = 600;
    rightside = 800;
    mapmove = false;
    upable = false;
    downable = false;
    rightable = true;
    leftable = true;
    fall = false;
    onice = false;
    playervisiable = true;
    indoor = false;
    movecount = (40-25)*32;
    mc = 0;
    windcount = 0;
    fireon = false;
    firecount = 0;
    levelcredits = totalcredits = 0;
    live = 10;
    rt = 0;
    Life = new Text(0,  0, "Life:", 64);
    Credits = new Text(0, 32, "Credits:", 96);
    LifeValue = new Text(100,  0, "", 20);
    CreditsValue = new Text(100, 32, "", 20);
}

void Game::handleEvents(){
    SDL_Event event;
    SDL_PollEvent(&event);
    switch (event.type) {
        case SDL_QUIT:
            isRunning = false;
            break;
        case SDL_KEYDOWN:
        {
            switch (event.key.keysym.sym)
            {
                case SDLK_UP:
                    mapmove = false;
                    if (upable&&playervisiable) {
                        player -> Moveud(-speed);
                    }
                    player -> TextureControl();
                    break;
                case SDLK_LEFT:
                    mapmove = false;
                    if (((pl-mc) > leftside)&&leftable&&playervisiable) {
                        player -> Movelr(-speed);
                    }
                    player -> TextureControl();
                    break;
                case SDLK_RIGHT:
                    if ((mapmove && (movecount > 0))&&rightable&&playervisiable) {
                        map -> MoveMap(speed*2);
                        movecount -= speed*2;
                        mc += speed*2;
                        player -> TextureChangeByRightMoveOfMap(speed);
                        for (int i = 0; i < NumberOfRobot; i++) {
                            robot[i] -> MoveFollowMap(speed*2);
                        }
                        for (int i = 0; i < NumberOfMoney; i++) {
                            money[i] -> MoveFollowMap(speed*2);
                        }
                        if (level == 3) {
                            for (int i = 0; i < 5; i++) {
                                fire[i] -> MoveFollowMap(speed*2);
                            }
                        }
                    }else if (((pr-mc) < rightside)&&rightable&&playervisiable){
                        player -> Movelr(speed);
                    }
                    player -> TextureControl();
                    break;
                case SDLK_DOWN:
                    mapmove = false;
                    if (downable&&playervisiable) {
                        player -> Moveud(speed);
                    }
                    player -> TextureControl();
                    break;
                case SDLK_SPACE:
                    if (indoor) {
                        playervisiable = player ->Hide();
                    }else if (!playervisiable){
                        playervisiable = player -> Hide();
                    }
                    break;
                case SDLK_c:
                    LevelUp();
                    break;
                default:
                    break;
            }
        }
            break;
        default:
            break;
    }
}

void Game::update(){
    rt ++;
    if (rt > 64*2) {
        rt = 0;
        for (int i = 0; i < NumberOfRobot; i++) {
            robot[i] -> Turn();
        }
    }
    player -> Update(mc);
    for (int i = 0; i < NumberOfRobot; i++) {
        robot[i] -> Update(mc);
    }
    for (int j = 0; j < NumberOfMoney; j++) {
        money[j] -> Update(mc);
    }
    pl = player -> getl();
    pu = player -> getu();
    pr = player -> getr();
    pd = player -> getd();
    LifeValue -> Update(live);
    CreditsValue -> Update(totalcredits + levelcredits);
    switch (level) {
        case 1:
            onice = IceCheck(pu, pd, pl, pr);
            if (onice) {
                speed = 16;
            }else{
                speed = 8;
            }
            break;
        case 2:
            onice = false;
            windcount ++;
            if (windcount > 150) {
                WindFlow();
            }
            if (windcount >155){
                windcount = 0;
            }
            break;
        case 3:
            for (int j = 0; j < NumberOfFire; j++) {
                fire[j] -> Update(mc);
            }
            firecount ++;
            if (firecount >= 200) {
                for (int j = 0; j < NumberOfFire; j++) {
                    fire[j] -> Turn();
                }
                fireon = !fireon;
                firecount = 0;
            }
            for (int j = 0; j < NumberOfFire; j++) {
                int eu = fire[j] -> getu();
                int ed = fire[j] -> getd();
                int el = fire[j] -> getl();
                int er = fire[j] -> getr();
                if (CatchCheck(pu, pd, pl, pr, eu, ed, el, er)&&fireon) {
                    PlayerDeath();
                }
            }
            break;
        default:
            break;
    }
    mapmove = ((pr-mc) >= midscreen);
    upable = UpCheck(pu, pd, pl, pr);
    downable = DownCheck(pu, pd, pl, pr);
    rightable = RightCheck(pu, pd, pl, pr);
    leftable = LeftCheck(pu, pd, pl, pr);
    fall = FallCheck(pu, pd, pl, pr);
    indoor = DoorCheck(pu, pd, pl, pr);
    if (fall&&(!upable&&!downable)) {
        player -> Moveud(speed);
        player -> TextureControl();
    }
    for (int i = 0; i < NumberOfRobot; i++) {
        int eu = robot[i] -> getu();
        int ed = robot[i] -> getd();
        int el = robot[i] -> getl();
        int er = robot[i] -> getr();
        if ((CatchCheck(pu, pd, pl, pr, eu, ed, el, er))&&playervisiable) {
            PlayerDeath();
        }
    }
    for (int i = 0; i < NumberOfMoney; i++) {
        int eu = money[i] -> getu();
        int ed = money[i] -> getd();
        int el = money[i] -> getl();
        int er = money[i] -> getr();
        if ((CatchCheck(pu, pd, pl, pr, eu, ed, el, er))&&(!(money[i]->IfGet()))) {
            money[i] -> Get();
            levelcredits ++;
        }
    }
    if (((pr-mc) == rightside)||(level > 3)) {
        if (level >= 3) {
            FinshGame(true);
        } else {
            LevelUp();
        }
    }
    if (pu > (32*21)) {
        if (level > 0) {
            LevelDown();
        } else {
            Reset();
        }
    }
}

bool Game::RightCheck(int pu, int pd, int pl, int pr){
    return ((mapdata[level][(pd-1)/32][(pr)/32] >= 0)&&(mapdata[level][(pu+1)/32][(pr)/32] >= 0));
}

bool Game::LeftCheck(int pu, int pd, int pl, int pr){
    return ((mapdata[level][(pd-1)/32][((pr-speed)/32)-1]>=0)&&(mapdata[level][(pu+1)/32][((pr-speed)/32)-1]>=0));
}

bool Game::UpCheck(int pu, int pd, int pl, int pr){
    return ((mapdata[level][(pd-1)/32][(pr-1)/32] == 6)&&(mapdata[level][(pd-1)/32][(pl)/32] == 6));
}

bool Game::DownCheck(int pu, int pd, int pl, int pr){
    return ((mapdata[level][(pd+1)/32][(pr-1)/32] == 6)&&(mapdata[level][(pd+1)/32][(pl)/32] == 6));
}

bool Game::FallCheck(int pu, int pd, int pl, int pr){
    return ((mapdata[level][(pd+1)/32][(pr-1)/32] >= 0)&&(mapdata[level][(pd+1)/32][(pl)/32] >= 0));
}

bool Game::IceCheck(int pu, int pd, int pl, int pr){
    return ((mapdata[level][(pd+1)/32][(pr-1)/32] == -5)&&(mapdata[level][(pd+1)/32][(pl)/32] == -5));
}

bool Game::CatchCheck(int pu, int pd, int pl, int pr, int eu, int ed, int el, int er){
    int x = ((pl + pr)/2) - ((el + er)/2);
    int y = ((pu + pd)/2) - ((eu + ed)/2);
    if((x*x+y*y)<(20*20)){
        return true;
    }
    return false;
}

bool Game::DoorCheck(int pu, int pd, int pl, int pr){
    int py = (pu+pd)/(2*32);
    int px = (pl+pr)/(2*32);
    return (mapdata[level][py][px]==9);
}

void Game::render(){
    SDL_RenderClear(renderer);
    map ->DrawMap();
    player -> Render();
    for (int i = 0; i < NumberOfRobot; i++) {
        robot[i] -> Render();
    }
    for (int i = 0; i < NumberOfFire; i++) {
        fire[i] -> Render();
    }
    for (int i = 0; i < NumberOfMoney; i++) {
        money[i] -> Render();
    }
    Life -> Render();
    Credits -> Render();
    LifeValue -> Render();
    CreditsValue -> Render();
    SDL_RenderPresent(renderer);
}

void Game::WindFlow(){
    if ((mapmove && (movecount > 0))&&rightable&&playervisiable) {
        map -> MoveMap(speed*2);
        movecount -= speed*2;
        mc += speed*2;
        player -> TextureChangeByRightMoveOfMap(speed);
        for (int i = 0; i < NumberOfRobot; i++) {
            robot[i] -> MoveFollowMap(speed*2);
        }
        for (int i = 0; i < NumberOfMoney; i++) {
            money[i] -> MoveFollowMap(speed*2);
        }
        if (level == 3) {
            for (int i = 0; i < 5; i++) {
                fire[i] -> MoveFollowMap(speed*2);
            }
        }
    }else if (((pr-mc) < rightside)&&rightable&&playervisiable){
        player -> Movelr(speed);
    }
}

void Game::Reset(){
    mapmove = false;
    map -> Reset();
    player -> Reset();
    for (int i = 0; i < NumberOfRobot; i++) {
        robot[i] -> Reset();
    }
    for (int i = 0; i < NumberOfMoney; i++) {
        money[i] -> Reset();
    }
    if (level == 3) {
        for (int j = 0; j < NumberOfFire; j++) {
            fire[j] -> Reset();
        }
    }
    rt = mc = 0;
    movecount = (40-25)*32;
    mapmove = false;
}

void Game::PlayerDeath(){
    if (live == 0) {
        FinshGame(false);
    }else{
        live --;
        Reset();
    }
    levelcredits = 0;
}

void Game::LevelUp(){
    level += 1;
    mapmove = false;
    map -> ReLoadMap(mapdata[level]);
    player -> Reset();
    int i = 0;
    int j = 0;
    for (int row = 0; row < 20; row++) {
        for (int col = 0; col < 40; col++) {
            if (mapdata[level][row][col] == 8) {
                robot[i] -> ReLoad(col*32, row*32);
                i++;
            }else if (mapdata[level][row][col] == 4){
                money[j] -> ReLoad(col*32, row*32);
                j++;
            }
        }
    }
    for (int i = 0; i < NumberOfRobot; i++) {
        robot[i] -> Reset();
    }
    rt = mc = 0;
    movecount = (40-25)*32;
    mapmove = false;
    if (level == 3) {
        for (int i = 0; i < NumberOfFire; i++) {
            fire[i] -> Turn();
        }
        fireon = true;
    }
    totalcredits += levelcredits;
    levelcredits = 0;
}

void Game::LevelDown(){
    level -= 1;
    mapmove = false;
    map -> ReLoadMap(mapdata[level]);
    player -> Reset();
    int i = 0;
    int j = 0;
    for (int row = 0; row < 20; row++) {
        for (int col = 0; col < 40; col++) {
            if (mapdata[level][row][col] == 8) {
                robot[i] -> ReLoad(col*32, row*32);
                i++;
            }else if (mapdata[level][row][col] == 4){
                money[j] -> ReLoad(col*32, row*32);
                j++;
            }
        }
    }
    for (int i = 0; i < NumberOfRobot; i++) {
        robot[i] -> Reset();
    }
    rt = mc = 0;
    movecount = (40-25)*32;
    mapmove = false;
    if (level == 2) {
        if (fireon) {
            for (int i = 0; i < NumberOfFire; i++) {
                fire[i] -> Turn();
            }
            fireon = false;
        }
    }
    totalcredits += levelcredits;
    levelcredits = 0;
}

void Game::FinshGame(bool win){
    level = 0;
    live = 10;
    totalcredits = level = 0;
    if (fireon) {
        for (int i = 0; i < NumberOfFire; i++) {
            fire[i] -> Turn();
        }
    }
    map -> ReLoadMap(mapdata[level]);
    player -> Reset();
    int i = 0;
    int j = 0;
    for (int row = 0; row < 20; row++) {
        for (int col = 0; col < 40; col++) {
            if (mapdata[level][row][col] == 8) {
                robot[i] -> ReLoad(col*32, row*32);
                i++;
            }else if (mapdata[level][row][col] == 4){
                money[j] -> ReLoad(col*32, row*32);
                j++;
            }
        }
    }
    for (int i = 0; i < NumberOfRobot; i++) {
        robot[i] -> Reset();
    }
    rt = mc = 0;
    movecount = (40-25)*32;
}

void Game::clean(){
    SDL_DestroyWindow(window);
    SDL_DestroyRenderer(renderer);
    cout << "Game clean" << endl;
}

