#include "block.h"

Block::Block()
{
    cellSize = 30;
    rotationState = 0;
    colors = GetCellColors();
}

void Block::Draw()
{
    std::vector<Position> tiles = cells[rotationState];
}