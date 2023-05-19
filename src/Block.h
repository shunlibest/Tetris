//
// Created by Shunli Han on 2023/5/19.
//

#ifndef TETRIS_BLOCK_H
#define TETRIS_BLOCK_H


struct Point {
    int row;
    int col;
};

/**
 * 俄罗斯方块里的方块
 */
class Block {

public:
    Block();

    void drop();

    void moveLeft();

    void moveRight();

    void rotate();

    void draw();

private:
    int blockType;
    Point smallBlocks[4];

};


#endif //TETRIS_BLOCK_H
