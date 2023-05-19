//
// Created by Shunli Han on 2023/5/19.
//

#include "Tetris.h"

Tetris::Tetris(int rows, int cols) {

}

void Tetris::init() {

}

void Tetris::play() {
    init();
    int lastTime = 0;
    while (true) {
        //step1: 接收用户输入
        ketEvent();

        //大于某个阈值, 再进行渲染
        int currentTime = 0;
        if (currentTime - lastTime > 30) {
            lastTime = currentTime;

            dropBlock();

            needUpdate = true;
        }

        if(needUpdate){
            needUpdate = false;
            //step2: 渲染游戏画面
            updateWindow();
        }
    }
}

void Tetris::ketEvent() {

}

void Tetris::updateWindow() {

}
//下降当前方块
void Tetris::dropBlock() {

}
