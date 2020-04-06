#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// strlen的四种表示用法

// 方法一: 直接调用库函数中的strlen函数
//#include <string.h>
//int main() {
//	char str[] = "abcdef";
//	int len = strlen(str);
//	printf("%d\n", len);
//	return 0;
//}

// 方法二: 采用计数器的方式
//int my_strlen(char* str) {
//	int count = 0;
//	while (*str != '\0') {
//		count++;
//		str++;
//	}
//	return count;
//}
//int main() {
//	char str[] = "abcdef";
//	int len = my_strlen(str);
//	printf("%d\n", len);
//	return 0;
//}

// 方法3: 递归
//int my_strlen(char* str) {
//	if (*str != '\0') {
//		return 1 + my_strlen(str+1);
//	} else {
//		return 0;
//	}
//}
//int main() {
//	char str[] = "abcdef";
//	int len = my_strlen(str);
//	printf("%d\n", len);
//	return 0;
//}

// 方法4: 指针 - 指针
int my_strlen(char* str) {
	char* start = str;
	char* end = str;
	while (*end != '\0') {
		end++;
	}
	return end - start;
}
int main() {
	char str[] = "abcdef";
	int len = my_strlen(str);
	printf("%d\n", len);
	return 0;
}
