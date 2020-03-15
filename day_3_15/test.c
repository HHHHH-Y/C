#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//#define MAX 100

 关键字 static 的使用练习
int sum(int a) {
	int c = 0;
	static int b = 3;
	c += 1;
	b += 2;
	return (a + b + c);
}
int main() {
	int i;
	int a = 2;
	for (i = 0; i < 5; i++) {
		printf("%d, ", sum(a)); // 8, 10, 12, 14, 16 
	}
	return 0;
}

// 字符串(以'\0'为结束标志)
//int main() {
//	// "abc" --> 字符串
//	char arr1[] = "abc";
//	char arr2[] = { 'a', 'b', 'c' };
//	// 1. 查看字符串的内容(只需打印字符串即可)
//	//printf("%s\n", arr1); // abc
//	//printf("%s\n", arr2); // abc烫烫烫烫蘟bc
//	// 2. 计算字符串的长度
//	printf("%d\n", strlen(arr1)); //3
//	printf("%d\n", strlen(arr2)); // 随机值
//
//	return 0;
//}

// sizeof(用来计算某个对象或类型的大小)
//int main() {
//	int a = 10;
//	int arr[6] = { 0 };
//	printf("%d\n", sizeof(a)); // 4
//	printf("%d\n", sizeof(arr)); //24
//	return 0;
//}

// ~: 对一个数的二进制按位取反
//int main() {
//	int a = 10;
//	// int 占 4 个字节, 占 32 个 bit
//	//00000000000000000000000000001010
//	// ~a
//	//11111111111111111111111111110101
//	printf("%d\n", ~a); // -11
//	return 0;
//}

// ++, -- 的用法
//int main() {
	// 前置++
	//int a = 0;
	//int b = ++a;
	//printf("b = %d, a = %d\n", b, a); // 1 , 1
	// 后置++  
	//int a = 10;
	//int b = a++;
	//printf("b = %d, a = %d\n", b, a); // 10, 11
	// 前置--
	//int a = 10;
	//int b = --a;
	//printf("b = %d, a = %d\n", b, a); // 9, 9
	// 后置--
//	int a = 10;
//	int b = a--;
//	printf("b = %d, a = %d\n", b, a); // 10, 9
//	return 0;
//}

// 强制类型转换  ( )
//int main() {
//	int num = 3.14; // 3.14 为 double 类型
//	// 强制类型转换
//	int num = (int)3.14; // 将 double 类型转化成为 int 类型
//	return 0;
//}

// 逻辑操作符: &&, ||
//int main() {
//	int a = 0;
//	int b = 0;
//	//if (a && b) {
//	//	printf("hehe\n");
//	//}
//	if (a || b) {
//		printf("hehe\n");
//	}
//	return 0;
//}

// 条件操作符 / 三目操作符
// 用三目操作符的方式, 在两个数中求出较大值
//int main() {
//	int a = 10;
//	int b = 20;
//	int max = 0;
//	max = a > b ? a : b;
//	printf("max = %d\n", max); // max = 20
//	return 0;
//}

// 下标引用操作符 [ ]
//int main() {
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", arr[6]); // 7
//	return 0;
//}

// 函数调用操作符 ( )
// 用函数调用的方式, 在两个数中求出较大值
//int max(int x, int y) {
//	return x > y ? x : y;
//}
//int main() {
//	int a = 10;
//	int b = 20;
//	int c = 0;
//	c = max(a, b);
//	printf("%d\n", c); // 20
//	return 0;
//}

// typedef关键字  类型定义 / 类型重命名
//typedef unsigned int uint;
//int main() {
//	// 定义一个年龄变量
//	unsigned int age1;
//	uint age2;
//	return 0;
//}

// register(寄存器) 
// 编译器会建议将频繁大量使用的变量存放入寄存器中
//int mian() {
//	register int a = 0; // 假设a会在未来频繁大量的使用, 则编译器会建议加上register关键字
//	int b = 10;
//	return 0;
//}

// static关键字的作用

// 1. 修饰局部变量: 修改了局部变量的生命周期, 变成了跟随整个程序
//test() {
//	static int a = 1;
//	a++;
//	printf("%d ", a);
//}
//int main() {
//	int i = 0;
//	while (i < 5) {
//		test();
//		i++;
//	} // 2 3 4 5 6
//	return 0;
//}

// 2. 修饰全局变量: 修改了全局变量的作用域, 只能在自己所在的源文件中使用, 不能跨文件使用
//    extern 用于声明外部符号
//extern int g_val;
//int main() {
//	printf("%d\n", g_val); 
//	return 0;
//}

// 3. 修饰函数: 修改了函数的作用域, 只能在自己所在的源文件中使用, 不能跨文件使用
//extern int sum(int x, int y);
//int main() {
//	int a = 10;
//	int b = 20;
//	int c = 0;
//	c = sum(a, b);
//	printf("%d\n", c);
//	return 0;
//}

// strlen 和 sizeof 的区别
// 1. 他们其实没有任何关联
// 2. strlen 是一个库函数, 只能用来求字符串的长度
//   ( 从字符串开始的地方向后数字符的个数, 直到遇见'\0'为止, 个数中不包含'\0' )
// 3. sizeof 是一个操作符, 用来计算某个对象或者类型的大小的, 单位是字节)

// #define 定义常量

//int main() {
//	int a = MAX;
//	printf("%d\n", a); // 100
//	return 0;
//}

// #define 定义宏
// 通过定义宏的形式来求出两个数中的较大值
//#define MAX(X, Y) ((X) > (Y) ? (X) : (Y))
//int main() {
//	int a = 10;
//	int b = 20;
//	int max = 0;
//	max = MAX(a, b);
//	printf("%d\n", max);
//	return 0;
//}

// 指针
// 指针变量只存储地址值
//int main() {
//	int a = 10;
//	printf("%p\n", &a); // a 的地址
//	int* p = &a;
//	printf("%p\n", p); // a 的地址
//	return 0;
//}

//int main() {
//	int a = 10;
//	int* pa = &a;
//	char c = '0';
//	char* pc = &c;
//	return 0;
//}

// * 间接访问操作符 / 解引用操作符
//int main() {
//	int a = 10;
//	int* pa = &a;
//	*pa = 20; // *pa 就相当于 a
//	printf("%d\n", a); // 20;
//	return 0;
//}

//int main() {
//	char c = 'a';
//	char* pc = &c;
//	*pc = 'w'; // *pc 就相当于 c
//	printf("%c\n", c);
//	return 0;
//}

// 指针的大小
// 指针在 32 位平台上是 4 个字节, 在 64 位平台上是 8 个字节
// 计算指针的大小
//int main() {
//	int a = 10;
//	int* pa = &a;
//	char c = '0';
//	char* pc = &c;
//	printf("%d\n", sizeof(pa)); // 4
//	printf("%d\n", sizeof(pc)); // 4
//	return 0;
//}

