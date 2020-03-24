#define _CRT_SECURE_NO_WARNINGS
// 求两个数的最小公倍数 
// 2, 3 的最小公倍数为 6
#include<stdio.h>
// 方法一:
//int Max(int x, int y) {
//	return (x > y ? x : y);
//}
//int main() {
//	// 找到两个数中较大的数作为求最小公倍数的起点
//	int i = Max(2, 3);
//	for (; i < 99999; i++) {
//		if (i % 2 == 0 && i % 3 == 0) {
//			printf("最小公倍数为: %d\n", i);
//			break;
//		}
//	}
//	return 0;
//}
// 方法2:
//int main() {
//	int x = 0;
//	int y = 0;
//	int max = 0;
//	scanf("%d%d", &x, &y); // 输入两个数
//	// 寻找两个数之间较大的那个数max
//	if (x > y) {
//		max = x;
//	} else {
//		max = y;
//	}
//	int i = max;
//	for (; i < 9999; i++) {
//		if (i % x == 0 && i % y == 0) {
//			printf("最小公倍数为: %d\n", i);
//			break;
//		}
//	}
//	return 0;
//}

// 运用条件运算符(三目运算符)的嵌套
// 学习成绩 >=90 分的同学用A表示, 60-89分的同学用B表示, 60分以下的用C表示
//int main() {
//	int score = 0;
//	scanf("%d", &score); // 输入学生的成绩
//	if (score > 100) {
//		printf("您的输入有误\n");
//	}
//	while (score <= 100) {
//		switch (score >= 90 ? 1 : 2) {
//		case 1:
//			printf("该学生的等级为A\n");
//			break;
//		case 2:
//			switch (score >= 60 ? 1 : 2) {
//			case 1: 
//				printf("该学生的等级为B\n");
//				break; // 跳出小的switch循环
//			case 2:
//				if (score < 0) {
//					printf("您的输入有误\n");
//				} else {
//					printf("该学生的等级为C\n");
//					break;
//				}
//				break;
//			}
//			// 跳出大的 switch 循环
//			break;
//		}
//		// 结束 while 循环
//		break;
//	}
//	return 0;
//}
