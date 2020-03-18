#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 初学C语言者的几个经典例题

// 判断一个数是不是素数
// 一个大于1的正整数，如果除了1和它本身以外，不能被其他正整数整除，就叫素数
// 如 2，3，5，7，11，13，17…
void isprime(int x) {
	if (x < 2) {
		printf("%d 不是素数!\n",x);
	}
	int i = 2;
	for (i = 2; i < x; i++) {
		if (x % i == 0) { // 若 x % i == 0 成立, 则可以直接说明 x 一定不是素数
			printf("%d 不是素数!\n",x);
			return;
		}
	}
	// 因为素数必须要在 2 - x 的 范围内, 将所有的数都判断过之后才可以下结论
	if (i == x) {
		printf("%d 是素数!\n", x);
	}
}
int main() {
	isprime(2);
	return 0;
}