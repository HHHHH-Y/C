#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 打印一个数的每一位
// 递归方式实现打印一个整数的每一位
// Print(123)
// Print(12) + 3
// Print(1) + 2 + 3
//void Print(int n) {   // 打印 n 的每一位数字
//	if (n > 9) {
//		Print(n / 10); // 打印 n/10 的每一位数字
//	}
//	printf("%d ", n % 10); 
//}
//int main() {
//	int num = 0;
//	scanf("%d", &num);
//	Print(num); 
//	return 0;
//}

// 求阶乘
// 递归和非递归分别实现求n的阶乘
// n! = n*(n-1)*(n-2)*...*2*1
// 非递归
//int main() {
//	int num = 0;
//	scanf("%d", &num);
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= num; i++) {
//		ret = ret * i;
//	}
//	printf("ret = %d\n", ret);
//	return 0;
//}
// 递归
// n! = (n-1)! * n
//int fac(int n) {  
//	if (n > 1) {
//		return (n * fac(n - 1));
//	} else {
//		return 1;
//	}
//}
//int main() {
//	int num = 0;
//	scanf("%d", &num);
//	int ret = fac(num);
//	printf("ret = %d\n", ret);
//	return 0;
//}

// strlen的模拟
// 递归和非递归分别实现strlen
