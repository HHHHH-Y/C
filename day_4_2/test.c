#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <math.h>
// 使用指针打印数组内容
// 写一个函数打印arr数组的内容，不使用数组下标，使用指针.arr是一个整形一维数组
//void Print(int* p, int sz) {
//	int i = 0;
//	for (i = 0; i < sz; i++) {
//		printf("%d ", *(p + i));
//	}
//}
//int main() {
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int* p = &arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Print(p, sz);
//	return 0;
//}

// 字符串逆序
// 写一个函数，可以逆序一个字符串的内容
//void InputString(char str[]) {
//	scanf("%[^\n]", str); // %[] --> 一个字符集, 就是扫描字符集合
//}
//void Reverse(char str[], int len) {
//	int left = 0;
//	int right = len - 1;
//	while (left < right) {
//		char tmp = str[left];
//		str[left] = str[right];
//		str[right] = tmp;
//		left++;
//		right--;
//	}
//}
//int main() {
//	char str[100];
//	InputString(str);
//	int len = strlen(str);
//	Reverse(str, len);
//	printf("%s\n", str);
//	return 0;
//}

// 计算求和
// 求Sn=a+aa+aaa+aaaa+aaaaa的前5项之和，其中a是一个数字
// 例如：2 + 22 + 222 + 2222 + 22222
//int main() {
//	int i = 0;
//	int n = 0;
//	scanf("%d%d", &i, &n);
//	int j = 0;
//	int k = 0;
//	int sum = 0;
//	for (j = 0; j < n; j++) {
//		k = k * 10 + i;
//		sum = sum + k;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

// 打印水仙花数
// 求出0～100000之间的所有“水仙花数”并输出
//“水仙花数”是指一个n位数，其各位数字的n次方之和恰好等于该数本身
// 如:153＝1 ^ 3＋5 ^ 3＋3 ^ 3，则153是一个“水仙花数”
//int main() {
//	int i = 0;
//	for (i = 0; i < 100000; i++) {
//		// 判断这个数有几位
//		int count = 1;
//		int tmp = i;
//		int sum = 0;
//		while (tmp / 10) {
//			count++;
//			tmp /= 10;
//		}
//		// 计算n位数各项数字的n次方和
//		tmp = i;
//		while (tmp) {
//			sum = sum + pow((tmp % 10), count);
//			tmp /= 10;
//		}
//		// 计算是否为水仙花数
//		if (sum == i) {
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

// 用C语言在屏幕上输出以下图案：
 //      *              // 打印6个空格, 1个*
 //     ***             // 打印5个空格, 3个*
 //    *****            // 打印4个空格, 5个*
 //   *******           // ...
 //  *********
 // ***********         // 打印1个空格, 11个*
 //*************        // 不打印空格, 打印13个*
 // ***********         // 打印1个空格, 11个*
 //  *********          // 打印2个空格, 9个*
 //   *******           // 打印3个空格, 7个*
 //    *****            // ...
 //     ***
 //      *              // 打印6个空格, 1个*
int main() {
	int line = 0;
	scanf("%d", &line); // 7
	// 打印上半部分
	int i = 0;
	int j = 0;
	for (i = 0; i < line; i++) { // 0 - 6 行
		// 打印一行(i = 0)
		// 打印空格
		for (j = 0; j < line - 1 - i; j++) {
			printf(" ");
		}
		// 打印*
		for (j = 0; j < 2 * i + 1; j++) {
			printf("*");
		}
		printf("\n");
	}
	// 打印下半部分
	for (i = 0; i < line - 1; i++) {  // 0 - 5行
		// 打印一行
		// 打印空格
		for (j = 0; j <= i; j++) {
			printf(" ");
		}
		// 打印*
		for (j = 0; j < 2 * (line - 1 - i) - 1; j++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}