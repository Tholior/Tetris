#pragma once
#include "Grid.h"
#include "Blocks.cpp"
#include <vector>

class Game {
public:
    Game();

    bool gameOver;
    int score;

    void Draw();
    void HandleInput();
    void MoveBlockDown();

private:
    Grid grid;
    std::vector<Block> blocks;
    Block currentBlock;
    Block nextBlock;

    Block GetRandomBlock();
    std::vector<Block> GetAllBlocks();
    void MoveBlockLeft();
    void MoveBlockRight();
    bool IsBlockOutside();
    void RotateBlock();
    void LockBlock();
    bool BlockFits();
    void Reset();
    void UpdateScore(int linesCleared, int moveDownPoints);
};