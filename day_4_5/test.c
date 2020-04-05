#define _CRT_SECURE_NO_WARNINGS
// Debug是可以调试的版本, Release是不可以调试的版本
// 程序员要是要调试代码, 就需要在Debug版本中进行调试0
#include <stdio.h>
#include <assert.h>

//int test(int x, int y) {
//	int z = x + y;
//	return z;
//}
//int main() {
//	int arr[20] = { 0 };
//	int i = 0;
//	int sum = test(2, 3);
//	for (i = 0; i < 10; i++) {
//		arr[i] = i;
//	}
//
//	for (i = 10; i < 20; i++) {
//		arr[i] = i; // 断点
//	}
//	return 0;
//}

//void test2() {
//	printf("hehe\n");
//}
//void test1() {
//	test2();
//}
//void test() {
//	test1();
//}
//
//int main() {
//	test();
//	return 0;
//}

// 1! + 2! + 3! + ... + n!
//int main() {
//	int n = 0;
//	scanf("%d", &n); // 3
//	int i = 0;
//	int ret = 1;
//	int j = 0;
//	int sum = 0;
//	for (j = 1; j <= n; j++) {
//		ret = 1;
//		for (i = 1; i <= j; i++) {
//			ret *= i;   // n!
//		}
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//int main() {
//	int n = 0;
//	scanf("%d", &n); // 3
//	int i = 0;
//	int ret = 1;
//	int j = 0;
//	int sum = 0;
//	for (j = 1; j <= n; j++) {
//		ret *= j;  // n!
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//int main() {
//	int i = 0;
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	for (i = 0; i <= 12; i++) {
//		arr[i] = 0;
//		printf("hehe\n");
//	}
//	return 0;
//}

// 模拟实现库函数strcpy
#include <string.h>
//void my_strcpy(char* dest, char* src) {
//	while (*src != '\0') {
//		*dest = *src;
//		dest++;
//		src++;
//	} 
//	// *src == '\0'
//	*dest = *src;
//}

// 优化1:
//void my_strcpy(char* dest, char* src) {
//	while (*src != '\0') {
//		*dest++ = *src++;
//	}
//	// *src == '\0'
//	*dest = *src;
//}
//void my_strcpy(char* dest, char* src) {
//	while (*dest++ = *src++) { // *src为\0时, 将它赋给*dest, 这时, *dest已经改变为\0,然后再进行条件判断
//		;
//	}
//}

// 优化2:
// 为了防止传递过来的指针无效, 应该加上限制条件, 限制传递过来的指针为有效的指针
//void my_strcpy(char* dest, char* src) {
//	// 这种方法只是规避了问题, 但是并没有指出问题所在
//	if ((dest != NULL) && (src != NULL)) {
//		while (*dest++ = *src++) {
//			;
//		}
//	}
//}
//void my_strcpy(char* dest, char* src) {
//	assert(dest != NULL); // 断言
//	assert(src != NULL); // 断言
//		while (*dest++ = *src++) { 
//			;
//		}
//}

// const修饰指针
// 1. const放在 * 的左边, 修饰了指针所指向的内容(*p), 使得指针所指向的内容不能再通过p进行改变了
// 2. const放在 * 的右边, 修饰了指针变量本身(p), 使得指针变量本身不能被修改
//int main() {
//	const int num = 10;
//	int n = 100;
//	printf("%d\n", num);
//	//const int* p = &num; // const放于*左边, 修饰了*p, 但是不影响p本身
//	//p = &n; // p可以被修改
//	//*p = 20;
//	int* const p = &num; // const放于*右边, 修饰了p本身, 但是不会影响*p
//	//*p = 20; 
//	p = &n;
//	printf("%d\n", num);
//	return 0;
//}

// 优化3:
// arr2在进行传递后, 最好使其内容不再发生改动
//void my_strcpy(char* dest, const char* src) {
//	assert(dest != NULL); // 断言
//	assert(src != NULL); // 断言
//	while (*dest++ = *src++) { // *src为\0时, 将它赋给*dest, 这时, *dest已经改变为\0,然后再进行条件判断
//		;
//	}
//}
//int main() {
//	char arr1[] = "##########";
//	char arr2[] = "abcdef";
//	my_strcpy(arr1, arr2); // 把arr2的内容拷贝到arr1中
//	printf("%s\n", arr1);
//	return 0;
//}

// 优化4:
char*  my_strcpy(char* dest, const char* src) {
	assert(dest != NULL); // 断言
	assert(src != NULL); // 断言
	char* ret = dest; // 将dest的地址存于ret中
	// 将src指向的字符串拷贝到dest指向的空间中, 包含'\0'
	while (*dest++ = *src++) {
		;
	}
	return ret;
}

int main() {
	char arr1[] = "##########"; 
	char arr2[] = "abcdef"; 
	printf("%s\n", my_strcpy(arr1, arr2)); // 函数的链式访问
	return 0;
}