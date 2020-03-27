#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
// 递归
// 递归就是自己调用自己
//int main() {  // 会陷入死循环中
//	main();
//	return 0;
//}  

// 数组的创建和初始化
// 一维数组的创建
// 格式: 元素类型  数组名 [数组的大小 --> 常量]
//int n = 10;
//char arr[100];
//int arr[10];
//int arr[20 + 5];

// 一维数组的初始化
//int main() {
	//int arr[100] = { 0 };
	//int arr[10] = { 1, 2, 3 }; // 数组的不完全初始化 - 只初始化了前三个元素, 后面的元素全部默认初始化为0
	//int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 }; // 数组的完全初始化
	// 数组的[]内没有指定元素, 因此数组的大小需要根据初始化的内容来决定
	//int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };  
	//char arr1[] = { 'a', 'b', 'c' };  // 数组也可以存放字符
	//char arr1[20] = { 'a', 98, 'c' }; // 在字符数组中, 也可以存放数字
	//char arr2[] = "kris"; // 字符数组可以用来表示字符串
	// strlen 函数用来计算字符串的长度
	//printf("%d\n", strlen(arr1)); // 随机值
	//printf("%d\n", strlen(arr2)); // 4
	// sizeof 用来计算数组的大小
	//printf("%d\n", sizeof(arr1)); // 3
	//printf("%d\n", sizeof(arr2)); // 5
	//return 0;
//}

// 数组的下标是从0开始的
// 打印数组中的每一个元素
//int main() {
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int i = 0;
//	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

// 打印数组中每一个元素的地址
//int main() {
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int i = 0;
//	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
//		printf("&arr[%d] = %p\n", i, &arr[i]);
//	}
//	return 0;
//}

// 用地址来寻找数组中的每一个元素
int main() {
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int i = 0;
	int* p = arr;
	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
		printf("%d ", *p);
		p++;
	}
	return 0;
}

// 二位数组的创建
//int arr[3][4];

// 二维数组的初始化
//int arr[3][4] = { 1, 2, 3, 4, 5 }; // 三行四列
//int arr[][4] = { {1,2}, {3, 4} };