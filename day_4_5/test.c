#define _CRT_SECURE_NO_WARNINGS
// Debug是可以调试的版本, Release是不可以调试的版本
// 程序员要是要调试代码, 就需要在Debug版本中进行调试0
#include <stdio.h>
#include <string.h>
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
//char*  my_strcpy(char* dest, const char* src) {
//	assert(dest != NULL); // 断言
//	assert(src != NULL); // 断言
//	char* ret = dest; // 将dest的地址存于ret中
//	// 将src指向的字符串拷贝到dest指向的空间中, 包含'\0'
//	while (*dest++ = *src++) {  
//		;
//	}
//	return ret;
//}
//
//int main() {
//	char arr1[] = "##########"; 
//	char arr2[] = "abcdef"; 
//	printf("%s\n", my_strcpy(arr1, arr2)); // 函数的链式访问
//	return 0;
//}
//
// 模拟实现库函数strlen
//int main() {
//	char str[] = "abcdef";
//	int len = strlen(str);
//	printf("%d\n", len);
//	return 0;
//}

//int my_strlen(const char* str) {
//	assert(str != NULL);
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

// 输入一个整数数组
// 实现一个函数, 来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，所有偶数位于数组的后半部
void Change(int arr1[], int arr2[], int sz) {
	int left = 0;
	int right = sz - 1;
	int i = 0; 
	while (left < right) {
		for (i = 0; i < sz; i++) {
			if (arr1[i] % 2 == 1) {
				arr2[left] = arr1[i];
				left++;
			} else {
				arr2[right] = arr1[i];
				right--;
			}
		}
	}
}
int main() {
	int arr1[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int arr2[10] = { 0 };
	int sz = sizeof(arr1) / sizeof(arr1[0]);
	Change(arr1, arr2, sz);
	int i = 0;
	for (i = 0; i < sz; i++) {
		printf("%d ", arr2[i]);
	}
	return 0;
}
// 在编写代码时, 我们经常产生许多的错误. 通常我们会见到这几种类型的错误
// 1. 编译错误/语法错误
//    直接看错误提示信息(双击),用于解决
// 2. 链接型错误
//    看错误提示信息, 主要在代码中找到错误信息中的标识符, 然后定位问题所在. 一般是标识符名不存在或者拼写错误
// 3. 运行时错误
//    借助调试, 逐步定位问题
