#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <Windows.h>

// 判断一个数是否为奇数
// ( 0 是一个偶数 )
//int main() {
//	int num = 0;
//	scanf("%d", &num); // 输入一个数
//	if (num % 2 != 0) {
//		printf("这是一个奇数\n");
//	}
//	else {
//		printf("这不是一个奇数\n");
//	}
//	return 0;
//}

// 输出 1 - 100 之间的奇数
//int main() {
//	int num = 1;
//	while (num <= 100) {
//		if (num % 2 != 0) {
//			printf("%d\n", num);
//		}
//		num++;
//	} // 当 num > 100 时跳出循环
//	return 0;
//}

// 计算 n 的阶乘
//int main() {
//	int i = 1;
//	int n = 0;
//	int acc = 1;
//	scanf("%d", &n); // 输入一个数字
//	while (i <= n) {
//		acc *= i; // acc = acc * i;
//		i++;
//	} // 当 i > n 的时候跳出循环
//	printf("acc = %d\n", acc);
//	return 0;
//}

// 计算1! + 2! + 3! +  ... + 10!
// 先计算出所有的阶乘, 然后相加
//int main() {
//	int acc = 1;
//	int i = 1;
//	int sum = 0;
//	while (i <= 10) {
//		acc *= i;
//		sum = sum + acc;
//		i++;
//	}
//	printf("sum = %d\n", sum);
//	return 0;
//}

// 编写代码, 演示多个字符从两端移动, 向中间汇聚
 //***********
 //H*********d
 //He*******ld
 //...
 //Hello,World
// 在Windows操作系统中,sleep()函数需要一个以毫秒为单位的参数代表程序挂起时长(1s = 1000ms)
// Sleep函数可以使计算机程序进入休眠，使其在一段时间内处于非活动状态
int main() {
	char str1[] = "Hello,World";
	char str2[] = "***********";
	int left = 0;
	int right = strlen(str1) - 1;
	while (left <= right) {
		Sleep(1000);
		str2[left] = str1[left];
		str2[right] = str1[right];
		left++;
		right--;
		printf("%s\n", str2);
	} // 当 left > right 的时候, 跳出循环
	return 0;
}

