#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 冒泡排序
// 实现一个对整形数组的冒泡排序
// 对10 9 8 7 6 5 4 3 2 1进行冒泡排序, 排成1 2 3 4 5 6 7 8 9 10
//void BubbleSort(int arr[], int sz) {
//	// 确定总共有多少趟冒泡排序
//	int i = 0;
//	for (i = 0; i < sz - 1; i++) {
//		// 一趟冒泡排序
//		int flag = 1;
//		int j = 0;
//		// 一趟冒泡排序要比较的次数
//		for (j = 0; j <= sz - 1 - i ; j++) {
//			if (arr[j] > arr[j + 1]) {
//				// 交换两个元素
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;
//			}
//		}
//		if (flag == 1) {
//			break;
//		}
//	}
//}
//void PrintArr(int arr[], int sz) {
//	int i = 0;
//	for (i = 0; i < sz; i++) {
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//int main() {
//	int arr[] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
//	int sz = sizeof(arr) / sizeof(arr[0]); // 数组中的元素个数
//	PrintArr(arr, sz);
//	BubbleSort(arr, sz);
//	PrintArr(arr, sz);
//	return 0;
//}

// 数组操作
// 创建一个整形数组，完成对数组的操作
// 实现函数init() 初始化数组为全0
// 实现print()  打印数组的每个元素
// 实现reverse()  函数完成数组元素的逆置
// 要求：自己设计以上函数的参数，返回值
//void Init(int arr[]) {
//	
//}
//void Init(int arr1[], int sz) {
//	int i = 0;
//	for (i = 0; i <= sz - 1; i++) {
//		arr1[i] = 0;
//	}
//}
//void Print(int arr[], int sz) {
//	int i = 0;
//	for (i = 0; i <= sz - 1; i++) {
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//void Reverse(int arr[], int sz) {
//	int left = 0;
//	int right = sz - 1;
//	while (left < right) {
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//int main() {
//	int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//	//int arr[10];
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//Init(arr, sz);
//	Print(arr, sz);
//	Reverse(arr, sz);
//	Print(arr, sz);
//	return 0;
//}

// 交换数组
// 将数组A中的内容和数组B中的内容进行交换(数组一样大)
void Exchange(int arrA[], int arrB[], int sz) {
	int i = 0;
	for (i = 0; i < sz; i++) {
		int tmp = arrA[i];
		arrA[i] = arrB[i];
		arrB[i] = tmp;
	}
}
void Print(int arr[], int sz) {
	int i = 0;
	for (i = 0; i < sz; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}
int main() {
	int arrA[4] = { 1, 2, 3, 4 };
	int arrB[4] = { 5, 6, 7, 8 };
	int sz = sizeof(arrA) / sizeof(arrA[0]);
	Exchange(arrA, arrB, sz);
	Print(arrA, sz);
	Print(arrB, sz);
	return 0;
}