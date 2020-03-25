#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
// strcpy函数
// strcpy --> string copy --> 字符串拷贝
// char* strcpy(char* destination, const char* source);
//int main() {
//	char str1[20] = "##########";
//	char str2[] = "kris";
//	strcpy(str1, str2);  // 将str2拷贝到str1中
//	printf("%s\n", str1); // kris
//	return 0;
//}

// memset函数
// memset --> memory set --> 内存设置
// void * memset ( void * ptr, int value, size_t num );
//int main() {
//	char arr[] = "Hello, kris";
//	memset(arr, '*', 5);
//	printf("%s\n", arr); // *****, kris
//	return 0;
//}

// 用函数来求两个数中的较大值 
// 仅仅是找出最大值而并没有改变实参的值, 因此应该使用传值调用
//int get_max(int x, int y) {
//	// return (x > y ? x : y);
//	if (x > y) {
//		return x;
//	} else {
//		return y;
//	}
//}
//int main() {
//	int a = 10;
//	int b = 20;
//	int max = get_max(a, b);
//	printf("max = %d\n", max);
//	return 0;
//}

// 用函数实现两个数的交换
// 两个函数进行交换, 实参的值会发生改变. 因此应该采用传址交换
// 两个函数进行交换即可, 不需要返回什么. 因此, 函数的返回类型应该为void类型
//// err
//void Swap1(int x, int y) {  // a 和 b 并没用进行交换
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//}
//// ok
//void Swap2(int* pa, int* pb) {  // 传过来的是地址, 就应该用指针来接收
//	int tmp = 0;
//	tmp = *pa; // *pa = a
//	*pa = *pb; // *pb = b
//	*pb = tmp;
//}
//int main() {
//	int a = 10;
//	int b = 20;
//	printf("a = %d b = %d\n", a, b);
//	//Swap1(a, b);  // 用Swap函数实现a和b的交换
//	Swap2(&a, &b);  // 传址交换, 传的就是地址        
//	printf("a = %d b = %d\n", a, b);
//	return 0;
//}

// 用函数判断素数
// 实现一个函数, 判断一个数是不是素数 (只需要判断, 不需要改变实参的值, 采用传值调用即可)
// 利用上面实现的函数打印100 - 200 之间的素数
//#include <stdio.h>
//#include <math.h>
//int is_prime(int x) {
//	int j = 0;
//	for (j = 2; j <= sqrt(x); j++) {
//		if (x % j == 0) {
//			return 0;
//		}
//	}
//	return 1;
//}
//
//int main() {
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++) {
//		int ret = is_prime(i);
//		if (ret == 1) {
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}

// 使用函数判断闰年 (只是判断, 所以使用传值调用即可)
// 实现函数判断year是不是闰年
//#include <stdio.h>
//int is_leap_year(int y) {
//	if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0) {
//		return 1;
//	} else {
//		return 0;
//	}
//}
//int is_leap_year(int y) {
//	return ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0); // 使用了逻辑运算符, 非1即0
//}
//int main() {
//	int year = 0;
//	scanf("%d", &year);
//	int ret = is_leap_year(year); // 是闰年就返回1, 不是闰年就返回0
//	if (ret == 1) {
//		printf("%d年是闰年\n", year);
//	}
//	return 0;
//}

 写一个函数, 实现一个整型有序数组的二分查找
#include <stdio.h>

int Binary_search(int arr[], int k, int sz) {
	int left = 0;
	//int right = sizeof(arr) / sizeof(arr[0]) - 1; // int right = 4 / 4 - 1 = 0
	int right = sz - 1;
	while (left <= right) {
		int mid = (left + right) / 2;
		if (arr[mid] > k) {
			right = mid - 1;
		} else if (arr[mid] < k) {
			left = mid + 1;
		} else {
			return mid;
		}
	}
	return -1;
}
int main() {
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int k = 0;
	scanf("%d", &k);
	int sz = sizeof(arr) / sizeof(arr[0]); // 数组的长度
	// 调用函数实现二分查找
	// 数组传参时, 传过去的是一个数组名, 但本质上传过去的是数组中首元素的地址 &arr[0]
	// 也就是: 数组传参时会发生降级 --> 变成首元素地址
	int ret = Binary_search(arr, k, sz); // 找到了就返回数组下标, 找不到就返回-1
	if (ret == -1) {
		printf("找不到\n");
	} else {
		printf("找到了, 下标是%d\n", ret);
	}
	return 0;
}

// 乘法口诀表
// 实现一个函数, 打印乘法口诀表, 口诀表的行数和列数自己指定
// 如：输入9，输出9*9口诀表，输出12，输出12*12的乘法口诀表
//#include <stdio.h>
// void multiplication_table(int x) { 
//	int i = 0;
//	int mul = 0;
//	for (i = 1; i <= x; i++) {
//		int j = 0;
//		for (j = 1; j <= i; j++) {
//			mul = i * j;
//			printf("%-2d*%d=%-2d  ", i, j, mul);
//		}
//		printf("\n");
//	}
//}
//int main() {
//	int x = 0;
//	scanf("%d", &x);
//	multiplication_table(x);
//	return 0;
//}

// 写一个函数, 每调用一次这个函数, 就会将num的值增加1
// 调用函数后, num的值会发生改变, 因此应该采用传址调用
//#include <stdio.h>
//void Add(int* p) {  // *p = num
//	(*p)++;
//}
//int main() {
//	int num = 0;
//	Add(&num);
//	printf("num = %d\n", num);
//	Add(&num);
//	printf("num = %d\n", num);
//	return 0;
//}

// 函数的链式访问(把一个函数的返回值作为另一个函数的参数
//int main() {
//	int len = strlen("kris");
//	printf("len = %d\n", len); // len = 4
//	// 将strlen函数的返回值作为printf函数的参数
//	printf("len = %d\n", strlen("kris")); // len = 4
//	return 0;
//}
//int main() {
//	// printf函数的返回值应为: the total number of characters written is returned(所写的所有字符的个数)
//	printf("%d", printf("%d", printf("%d", 43))); // 4321
//	return 0;
//}