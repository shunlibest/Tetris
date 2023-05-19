//
// Created by Shunli Han on 2023/5/19.
//

#include "Block.h"
#include <cstdlib>


Block::Block() {
    int blocks[7][4] = {
            1, 3, 5, 7, // I
            2, 4, 5, 7,  // Z 1型
            3, 5, 4, 6, // Z 2型
            3, 5, 4, 7, // T
            2, 3, 5, 7, // L
            3, 5, 7, 6, // J
            2, 3, 4, 5, // 田
    };
    //随机生成一种方块种类
    blockType = rand() % 7;  //0->6

    //初始化smallBlocks
    for (int i = 0; i < 4; ++i) {
        int value = blocks[blockType][i];
        smallBlocks[i].row = value / 2;
        smallBlocks[i].col = value % 2;
    }
}

void Block::drop() {

}

void Block::moveLeft() {

}

void Block::moveRight() {

}

void Block::rotate() {

}

void Block::draw() {

}
