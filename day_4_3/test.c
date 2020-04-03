#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
// 写一个函数, 返回参数二进制(补码)中1的个数
// 寻找1的个数有四种方法:
// 1. 一个一个寻找, 直到将二进制序列全部找完
// 2. n & 1, 若得到的是1, 就说明n的二进制序列最后一个数为1. 若为0, 说明最后一位为0. 然后右移
// 3. n % 2. 若为1, 说明最后一位为1, 若为0, 说明最后一位为0. 然后右移(计算%次数太多, 代码效率不高)
// 4. n & (n-1), 按位与后, 得到的值就会将右边的一位1变成0, 然后重复, 直到所有的1都变成0(最佳方法)
//int NumberOf1(int n) {
//	int count = 0;
//	while (n) {
//		n = n & (n - 1);
//		count++;
//	}
//	return count;
//}
//int main() {
//	int a = 14;
//	// 00000000000000000000000000001110  a
//	// 00000000000000000000000000001101  a-1
//	// 00000000000000000000000000001100  a & a-1
//	int ret = NumberOf1(a);
//	printf("%d\n", ret);
//	return 0;
//}

// 指针的定义
//int main() {
//	int a = 10;
//	int* pa = &a; // pa就为一个指针变量, 指向的是a的地址
//	return 0;
//}

// 指针的类型及大小
//int main() {
//	int a = 10;
//	double b = 3.14;
//	char c = 'a';
//	// 指针有整型指针, 字符型指针, 浮点型指针
//	int* pa = &a;
//	double* pb = &b;
//	char* pc = &c;
//	// 指针在32位系统下均为4个字节
//	printf("%d\n", sizeof(pa)); // 4
//	printf("%d\n", sizeof(pb)); // 4
//	printf("%d\n", sizeof(pc)); // 4
//	return 0;
//}

// 指针的类型
//int main() {
//	int a = 0x11223344;
//	//int* pa = &a; // 44 33 22 11
//	//*pa = 0;  // 00 00 00 00
//	//printf("%d\n", a); 
//
//	char* pb = &a; // 44 33 22 11
//	*pb = 0;	
//	printf("%d\n", a); // 00 33 22 11
//	return 0;
//}
// 由此可见可以用不同类型指针去存储变量, 但是若要改变变量, 就会受到指针类型的影响

// 指针类型是有意义的
// 1. 指针类型决定了指针在进行解引用操作的时候能够访问多大的空间
//    char* 类型的指针只能访问一个字节大小的空间, int* 类型的指针可以访问4个字节大小的空间
// 2. 指针类型决定了指针+1, 跳过多少个字节(走一步, 会走多大的距离)
//    char* + 1 , 向后跳1个字节
//    int* + 1, 向后跳4个字节

// 指针+1操作
//int main() {
//	int a = 10;
//	char b = '0';
//	int* pa = &a;
//	char* pb = &b;
//	printf("%p\n", pa); // 010FFA98
//	printf("%p\n", pa + 1); // 010FFA9C
//
//	printf("%p\n", pb); //010FFA8F
//	printf("%p\n", pb + 1);// 010FFA90
//	return 0;
//}

// 用指针打印数组的各个元素
//int main() {
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++) {
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}

// 使用不同的指针类型解引用数组元素
//int main() {
//	int arr[10] = { 0x11223344, 0x11223344, 0x11223344, 0x11223344,
//	0x11223344, 0x11223344, 0x11223344, 0x11223344, 0x11223344, 0x11223344 };
//	int* pa = arr;
//	// char* pb = arr;
//	int i = 0; 
//	for (i = 0; i < 10; i++) {
//		*(pa + i) = 0;
//		//printf("%d ", *(pa + i)); // 0 0 0 0 0 0 0 0 0 0
//		//*(pb + i) = 0; 
//	}
//	return 0;
//}

// 野指针
// 1. 未初始化的局部指针变量(里面存放的是随机值)
//int main() {
//	int a = 10;
//	printf("%d\n", a);
//	int* p;  // p并未初始化, 所以里面存放的是随机值
//	*p = 20;
//	printf("%d\n", a);
//	return 0;
//}
// 2. 指针指向的范围越界
//int main() {
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 12; i++) { // 数组下标为0 - 9, 没有10, 11. 这时指针指向的数组下标越界, 成了野指针
//		*(p + i) = 0;
//	}
//	return 0;
//}
// 3. 指针作为局部变量返回地址后被销毁
//int* test() {
//	int a = 10;
//	return &a;
//}
//int main() {
//	int* p = test();
//	*p = 20;
//	return 0;
//}

// 指针若不知道应该初始化成什么, 或者使用完之后程序还没结束的时候, 就应该定义和赋值为空指针NULL
//int main() {
//	int* p = NULL; // 不知道让p指向哪里
//	int a = 0;
//	int* pa = &a;
//	*pa = 10;
//	printf("%d\n", a);
//	pa = NULL;
//	return 0;
//}

// 指针的运算
// 指针 +- 整数
// 指针 - 指针 (指针 - 指针 的绝对值为两个指针之间元素的个数)
//int main() {
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
//	printf("%d\n", &arr[9] - &arr[0]); // 9
//	return 0;
//}
// 指针的关系运算

// strlen的求法: 1. 循环;  2. 递归;  3. 指针 - 指针
int my_strlen(char* arr) {
	char* start = arr;
	char* end = arr;
	while (*end != '\0') {
		end++;
	}
	// *end == '\0'
	return (end - start);
}
int main() {
	char arr[] = "abc";
	// a  b  c  \0
	int len = my_strlen(arr);
	printf("%d\n", len);
	return 0;
}

// 数组名的表示
//int main() {
//	int arr[10] = { 0 };
//	printf("%p\n", arr);
//	printf("%p\n", arr + 1); // 地址+1, 跳过了4个字节
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0] + 1);
//	printf("%p\n", &arr);
//	printf("%p\n", &arr + 1); // 地址+1, 跳过了整个数组, 40个字节
//	return 0;
//}
// 对于数组名而言, 数组名就是数组首元素的地址(有两个例外)
// 1. sizeof(数组名), 这时数组名就为整个数组
// 2. &数组名, 这时数组名也是整个数组

// 数组可以通过指针来访问
//int main() {
//	int arr[10] = { 0 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++) {
//		// 通过下标来访问数组
//		printf("%d ", *(p + i)); // *(p + i) <--> p[i]
//		printf("%d ", arr[i]); // *(arr+i) <--> arr[i]
//		printf("%d ", *(arr + i));
//		printf("%d ", p[i]);
//		printf("%d ", i[p]);
//	}
//	return 0;
//}

