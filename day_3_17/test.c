#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// 编写代码实现, 模拟用户登陆情景, 并且只能登陆三次.
// (只允许输入三次密码, 如果密码正确则提示登陆成功,如果三次均输入错误, 则退出程序)

// 只允许输入三次密码: 循环
// 输入密码的次数做了规定, 所以用count作为计数器
//int main() {
//	int input = 0;
//	int count = 0;
//	while (count < 3) {
//		printf("请输入密码: \n");
//		scanf("%d", &input);
//		if (input == 123) {
//			printf("登陆成功!\n");
//			break;
//		} else {
//			printf("输入错误\n");
//		}
//		count++;
//	}
//	return 0;
//}

// 折半查找算法 / 二分查找算法
// 折半查找到的前提: 1. 必须存储在数组中; 2. 数组中的元素必须有序
// 给定一个新的整数, 查找这个数字是否在这个数组中存在, 如果找到了, 就返回这个数字所在的下标
//int main() {
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int num = 6;
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]) - 1; // 9
//	// [left  right] 为待查找区间
//	// 如果待查找区间不为空, 就说明还没有找完,就要继续找
//	while (left <= right) {
//		int mid = (left + right) / 2;
//		if (arr[mid] > num) {
//			right = mid--; // 向左找
//		} else if (arr[mid] < num) {
//			left = mid++; // 向右找
//		} else {
//			printf("找到啦, 下标就是%d\n", mid);
//			break;
//		}
//	}
//	return 0;
//}

// 猜数字游戏(1 - 100)
// 采用折半查找的方式
// 采用伪随机的方式
// 随机种子, 每次运行都设置成不同的随机种子.
 
menu() {
	printf("******************\n");
	printf("******1. 开始*****\n");
	printf("******0. 退出*****\n");
	printf("******************\n");
}
void game() {
	int num = rand() % 100 + 1; // 产生一个1 - 100之间的随机数
	while (1) {
		printf("请输入你猜的数字(1 - 100): ");
		int  guess = 0;
		scanf("%d", &guess); // 输入所猜测的数字
		if (guess > num) {
			printf("猜大了!\n");
		} else if (guess < num) {
			printf("猜小了!\n");
		} else {
			printf("恭喜你, 猜对了!\n");
			break;
		}
	}
}
int main() {
	srand((unsigned)time(0)); // 用时间做随机种子, 头文件为#include <time.h>
	while (1) {
		menu();
		int choice = 0;
		printf("请输入您的选择:\n");
		scanf("%d", &choice);
		if (choice == 1) {
			printf("游戏开始!\n");
			game();
		} else if (choice == 0) {
			printf("游戏退出!\n");
			break;
		} else {
			printf("您的输入有误!\n");
		}
	}
	return 0;
}


