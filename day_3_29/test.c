#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 求两个数二进制中不同位的个数
// 编程实现：两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同？ 
// 输入例子:
// 1999 2299
// 输出例子 : 7
int main() {
	int m = 0;
	int n = 0;
	scanf("%d%d", &m, &n);
	 //将两个数进行^(异或: 相同为0, 相反为1), 然后求出异或结果中1的个数
	int num = m ^ n;
	int count = 0;
	int i = 0;
	for (i = 0; i < 32; i++) {
		if (((num >> i) % 2) == 1) {
			count++;
		}
	}
	printf("count = %d\n", count);
	return 0;
}

// 不允许创建临时变量，交换两个整数的内容
//int main() {
//	int a = 10;
//	int b = 20;
//	printf("a = %d b = %d\n", a, b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("a = %d b = %d\n", a, b);
//	return 0;
//}

// 统计二进制中1的个数
// 写一个函数返回参数二进制中 1 的个数。
// 比如： 15    0000 1111    4 个 1
//int  NumberOf1(int n) {
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++) {
//		if (((n >> i) & 1) == 1) {
//			count++;
//		}
//	}
//	return count;
//}
//int main() {
//	int num = 0;
//	scanf("%d", &num);
//	int ret = NumberOf1(num);
//	printf("ret = %d\n", ret);
//	return 0;
//}

// 打印整数二进制的奇数位和偶数位
// 获取一个整数二进制序列中所有的偶数位和奇数位，分别打印出二进制序列
// 例: 1999
// 00000000000000000000011111001111
// 奇数位: 0000000000111011
// 偶数位: 0000000000011011
//void Odd_bit(int n) {
//	int i = 30;
//	int j = 0;
//	for (i = 30; i >= 0; i -= 2) {
//		j = ((n >> i) & 1);
//		printf("%d", j);
//	}
//	printf("\n");
//}
//void Even_bit(int n) {
//	int i = 31;
//	int j = 0;
//	for (i = 31; i > 0; i -= 2) {
//		j = ((n >> i) & 1);
//		printf("%d", j);
//	}
//	printf("\n");
//}
//int main() {
//	int num = 0;
//	scanf("%d", &num);
//	Odd_bit(num);
//	Even_bit(num);
//	return 0;
//}