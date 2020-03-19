#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 从大到小输出
// 写代码将三个数按从大到小输出
// 根据交换的原则
int main() {
	int a = 0;
	int b = 0;
	int c = 0;
	scanf("%d%d%d", &a, &b, &c);  // 输入三个数
	if (b > a) {
		int tmp = a;
		a = b;
		b = tmp;
	}
	if (c > a) {
		int tmp = a;
		a = c;
		c = tmp;
	}
	if (c > b) {
		int tmp = b;
		b = c;
		c = tmp;
	}
	printf("%d\n", a);
	printf("%d\n", b);
	printf("%d\n", c);
	return 0;
}


// 写一个代码打印1-100之间所有3的倍数的数字
//int main() {
//	int i = 1;
//	for (i = 1; i < 101; i++) {
//		if (i % 3 == 0) {
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}


// 给定两个数，求这两个数的最大公约数
// 最大公约数指两个或多个整数共有约数中最大的一个
// 比如: 12和18, 它们的最大公约数就是6
// int main() {
//	int a = 0;
//	int b = 0;
//	int i = 1;
//	int num = 0;
//	scanf("%d%d", &a, &b); // 输入两个数字
//	for (i = 1; i <= a && i <= b; i++) {
//		if (a % i == 0 && b % i == 0) { // 可以求出公约数
//			 num = i;
//		}
//	}
//	printf("最大公约数为 %d\n", num);
//	return 0;
//}

// 打印1000年到2000年之间的闰年
// 普通闰年：年份是4的倍数，且不是100的倍数（如:2004年就是闰年）
// 世纪闰年：年份是整百数的，必须是400的倍数才是闰年（如: 2000年是世纪闰年）
//int main() {
//	int year = 1000;
//	for (year = 1000; year <= 2000; year++) {
//		if (year % 4 == 0 && year % 100 != 0) {
//			printf("%d 是普通闰年! \n",year);
//		} else if (year % 100 == 0 && year % 400 == 0) {
//			printf("%d 是世纪闰年! \n", year);
//		} 
//	}
//	return 0;
//}


//int main() {
//	int i = 0;
//	for (i = 0; i < 10; i++) {
//		if (i = 5) {
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}



//// 写一个代码：打印100~200之间的素数
//// 素数: 一个大于1的正整数, 除了1和它本身以外不能被其他正整数整除. 
////       如2，3，5，7，11，13，17…
//int main() {
//	int num = 100;
//	int i = 2;
//	for (num = 100; num <= 200; num++) { // 循环, 从100 ~ 200
//		// 判断它是不是素数
//		for (i = 2; i < num; i++) {
//			if (num % i == 0) { // 已经确定不是素数
//				break; // 跳出循环
//			}
//		}
//		if (i == num) {
//			printf("%d\n", num);
//		}
//	}
//	return 0;
//}
