//
// Created by Shunli Han on 2023/5/19.
//

#ifndef TETRIS_TETRIS_H
#define TETRIS_TETRIS_H


class Tetris {

public:
    // 构造函数
    Tetris(int rows, int cols);

    /**
     * 游戏初始化
     */
    void init();

    /**
     * 开始游戏
     */
    void play();

private:
    int needUpdate = true;

    void ketEvent();
    void updateWindow();

    void dropBlock();
};


#endif //TETRIS_TETRIS_H
