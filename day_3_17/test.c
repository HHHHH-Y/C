#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// ��д����ʵ��, ģ���û���½�龰, ����ֻ�ܵ�½����.
// (ֻ����������������, ���������ȷ����ʾ��½�ɹ�,������ξ��������, ���˳�����)

// ֻ����������������: ѭ��
// ��������Ĵ������˹涨, ������count��Ϊ������
//int main() {
//	int input = 0;
//	int count = 0;
//	while (count < 3) {
//		printf("����������: \n");
//		scanf("%d", &input);
//		if (input == 123) {
//			printf("��½�ɹ�!\n");
//			break;
//		} else {
//			printf("�������\n");
//		}
//		count++;
//	}
//	return 0;
//}

// �۰�����㷨 / ���ֲ����㷨
// �۰���ҵ���ǰ��: 1. ����洢��������; 2. �����е�Ԫ�ر�������
// ����һ���µ�����, ������������Ƿ�����������д���, ����ҵ���, �ͷ�������������ڵ��±�
//int main() {
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int num = 6;
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]) - 1; // 9
//	// [left  right] Ϊ����������
//	// ������������䲻Ϊ��, ��˵����û������,��Ҫ������
//	while (left <= right) {
//		int mid = (left + right) / 2;
//		if (arr[mid] > num) {
//			right = mid--; // ������
//		} else if (arr[mid] < num) {
//			left = mid++; // ������
//		} else {
//			printf("�ҵ���, �±����%d\n", mid);
//			break;
//		}
//	}
//	return 0;
//}

// ��������Ϸ(1 - 100)
// �����۰���ҵķ�ʽ
// ����α����ķ�ʽ
// �������, ÿ�����ж����óɲ�ͬ���������.
 
menu() {
	printf("******************\n");
	printf("******1. ��ʼ*****\n");
	printf("******0. �˳�*****\n");
	printf("******************\n");
}
void game() {
	int num = rand() % 100 + 1; // ����һ��1 - 100֮��������
	while (1) {
		printf("��������µ�����(1 - 100): ");
		int  guess = 0;
		scanf("%d", &guess); // �������²������
		if (guess > num) {
			printf("�´���!\n");
		} else if (guess < num) {
			printf("��С��!\n");
		} else {
			printf("��ϲ��, �¶���!\n");
			break;
		}
	}
}
int main() {
	srand((unsigned)time(0)); // ��ʱ�����������, ͷ�ļ�Ϊ#include <time.h>
	while (1) {
		menu();
		int choice = 0;
		printf("����������ѡ��:\n");
		scanf("%d", &choice);
		if (choice == 1) {
			printf("��Ϸ��ʼ!\n");
			game();
		} else if (choice == 0) {
			printf("��Ϸ�˳�!\n");
			break;
		} else {
			printf("������������!\n");
		}
	}
	return 0;
}


