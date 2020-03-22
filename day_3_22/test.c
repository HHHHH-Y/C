#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdio.h>
#include <windows.h>
// 折半查找的算法
//int main() {
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9,10 };
//	int ret = 17;
//	int left = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int right = sz - 1;
//	while (left <= right) {
//		int mid = (left + right) / 2;
//		if (ret > arr[mid]) {
//			left = mid + 1;
//		} else if (ret < arr[mid]) {
//			right = mid - 1;
//		} else {
//			printf("找到啦, 下标是: %d\n", mid);
//			break;
//		}
//	}
//	if (left > right) {
//		printf("找不到\n");
//	}
//	return 0;
//}

// 编写代码, 演示多个字符从两端移动, 向中间汇聚
// Welcome to China!!!!!!!!
// ########################
// W######################!
// We####################!!
// ...
// Welcome to China!!!!!!!!
int main() {
	// 定义两个字符串
	char arr1[] = "Welcome to China!!!!!!!!";
	char arr2[] = "########################";
	int left = 0;
	int right = strlen(arr1) - 1;    
	// 也可以使用sizeof, 但是由于初始化的是一个字符串, 字符串的结束标志为'\0'
	// 因此, 在使用sizeof的时候会算上'\0'的, 因此应该是sizeof(arr) / sizeof(arr[0]) - 2
	while (left <= right) {
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		Sleep(1000);
		system("cls"); // 清理屏幕信息
		left++;
		right--;
	}
	printf("%s\n", arr2); // 打印字符串应该使用 %s
	return 0;
}


// 如果你引用自己创建的头文件, 就应该用"".  例: #include "stdio.h"
// 如果你引用的库函数的头文件, 就应该用<>.  例: #include <stdio.h>

// goto语句
// goto语句可以频繁的使用, 但是使用较多会扰乱程序员的思维, 进而会造成很多的麻烦
// 在大部分情况下, goto语句都可以被C语言中的其他语句替换
// goto语句的使用

// 用while语句替换goto语句