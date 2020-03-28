#define _CRT_SECURE_NO_WARNINGS
#include "game.h"

void menu() {
	printf("**************************\n");
	printf("*** 1. play    0. exit ***\n");
	printf("**************************\n");
}
void game() {
	// ��Ų��úõ��׵���Ϣ
	char mine[ROWS][COLS] = { 0 };
	// ����Ų�����׵���Ϣ
	char show[ROWS][COLS] = { 0 };
	// ��ʼ��ɨ�׵�����: mine�г�ʶ��Ϊ'0', show�г�ʼ��Ϊ'*'
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');
	// ��ӡɨ������(�����к���)
	//DisplayBoard(mine, ROW, COL);
	//DisplayBoard(show, ROW, COL);
	// ������
	SetMine(mine, ROW, COL);
	//DisplayBoard(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);
	// �Ų���
	FindMine(mine, show, ROW, COL);
}

void test() {
	int input = 0;
	srand((unsigned int)time(NULL));
	// ����һֱ�������Ϸ
	do {
		menu();
		printf("��ѡ��: ");
		scanf("%d", &input); // ��ҽ���ѡ��
		// ���ѡ���, ��Ϸ��Ӧ�ø�����Ӧ����ʾ
		switch (input) {
		case 1:
			printf("ɨ����Ϸ��ʼ!\n");
			game();
			break;
		case 0:
			printf("�˳���Ϸ!\n");
			break;
		default:
			printf("ѡ�����!\n");
			break;
		}
	} while (input);
}
int main() {
	test();
	return 0;
}