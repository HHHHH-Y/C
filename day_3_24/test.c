#define _CRT_SECURE_NO_WARNINGS
// ������������С������ 
// 2, 3 ����С������Ϊ 6
#include<stdio.h>
// ����һ:
//int Max(int x, int y) {
//	return (x > y ? x : y);
//}
//int main() {
//	// �ҵ��������нϴ������Ϊ����С�����������
//	int i = Max(2, 3);
//	for (; i < 99999; i++) {
//		if (i % 2 == 0 && i % 3 == 0) {
//			printf("��С������Ϊ: %d\n", i);
//			break;
//		}
//	}
//	return 0;
//}
// ����2:
//int main() {
//	int x = 0;
//	int y = 0;
//	int max = 0;
//	scanf("%d%d", &x, &y); // ����������
//	// Ѱ��������֮��ϴ���Ǹ���max
//	if (x > y) {
//		max = x;
//	} else {
//		max = y;
//	}
//	int i = max;
//	for (; i < 9999; i++) {
//		if (i % x == 0 && i % y == 0) {
//			printf("��С������Ϊ: %d\n", i);
//			break;
//		}
//	}
//	return 0;
//}

// �������������(��Ŀ�����)��Ƕ��
// ѧϰ�ɼ� >=90 �ֵ�ͬѧ��A��ʾ, 60-89�ֵ�ͬѧ��B��ʾ, 60�����µ���C��ʾ
//int main() {
//	int score = 0;
//	scanf("%d", &score); // ����ѧ���ĳɼ�
//	if (score > 100) {
//		printf("������������\n");
//	}
//	while (score <= 100) {
//		switch (score >= 90 ? 1 : 2) {
//		case 1:
//			printf("��ѧ���ĵȼ�ΪA\n");
//			break;
//		case 2:
//			switch (score >= 60 ? 1 : 2) {
//			case 1: 
//				printf("��ѧ���ĵȼ�ΪB\n");
//				break; // ����С��switchѭ��
//			case 2:
//				if (score < 0) {
//					printf("������������\n");
//				} else {
//					printf("��ѧ���ĵȼ�ΪC\n");
//					break;
//				}
//				break;
//			}
//			// ������� switch ѭ��
//			break;
//		}
//		// ���� while ѭ��
//		break;
//	}
//	return 0;
//}
