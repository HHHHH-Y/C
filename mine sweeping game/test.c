#define _CRT_SECURE_NO_WARNINGS
#include "game.h"

void menu() {
	printf("**************************\n");
	printf("*** 1. play    0. exit ***\n");
	printf("**************************\n");
}
void game() {
	// 存放布置好的雷的信息
	char mine[ROWS][COLS] = { 0 };
	// 存放排查出的雷的信息
	char show[ROWS][COLS] = { 0 };
	// 初始化扫雷的棋盘: mine中初识话为'0', show中初始化为'*'
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');
	// 打印扫雷棋盘(带上行和列)
	//DisplayBoard(mine, ROW, COL);
	//DisplayBoard(show, ROW, COL);
	// 布置雷
	SetMine(mine, ROW, COL);
	//DisplayBoard(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);
	// 排查雷
	FindMine(mine, show, ROW, COL);
}

void test() {
	int input = 0;
	srand((unsigned int)time(NULL));
	// 可以一直玩这个游戏
	do {
		menu();
		printf("请选择: ");
		scanf("%d", &input); // 玩家进行选择
		// 玩家选择后, 游戏就应该给出相应的提示
		switch (input) {
		case 1:
			printf("扫雷游戏开始!\n");
			game();
			break;
		case 0:
			printf("退出游戏!\n");
			break;
		default:
			printf("选择错误!\n");
			break;
		}
	} while (input);
}
int main() {
	test();
	return 0;
}