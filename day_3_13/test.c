#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

 写一个函数,求两个数的较大值
int main() {
	int num1 = 0;
	int num2 = 0;
	scanf("%d%d", &num1, &num2); 
	if (num1 > num2) {
		printf("max = %d\n", num1);
	}
	else {
		printf("max = %d\n", num2);
	}
	
	return 0;
}

 //#define MAX 1000 // 此时 MAX 成为了一个常量, MAX 为 1000, 不能再改变

//创建一个性别枚举类型
//enum Sex {
//	MALE,
//	FEMALE,
//	SECRET,
//};

//int main() {
	// 常量
// 1. 字面常量
	//300;
	//3.14;

// 2. const 修饰的常变量
	 //const int num = 10; // num 是变量, 但是整体成为了一个常量
	 
// 补充: 就是证明变量的本质永远都是变量, 不可能是常量
	//const int num = 20;
	//num = 30; // num不可以再进行赋值改变, 此处错误
	//printf("%d\n", num);

// 3. #define 定义的标识符常量(#define 定义的宏, 不能加;)
	//int num = MAX;
	//printf("%d\n", MAX); // 1000
// 4. 枚举常量(enum)(枚举末尾的 ; 一定不能丢失)
//    枚举 --> 一一列举
//    如: 性别: 男, 女, 保密
//        三元色: 红, 黄, 蓝 

	//enum Sex s = MALE; // 使用枚举
	//printf("%d\n", MALE);   // 0
	//printf("%d\n", FEMALE); // 1
	//printf("%d\n", SECRET); // 2
	//
	//return 0;
//}

// %d 打印整型
// %f 打印浮点型
// %s 打印字符串
// %c 打印字符型
// %p 打印地址
// 字符串(以'\0'作为结束标志)
// "abc" 字面字符串
// ""  空字符串
// @%$& abc ABC 这类字符, 在ACSII中都有对应的数字来对其进行表示

// 字符串(以'\0'作为结束标志)
//int main() {
	// 计算字符串长度以及查看字符串的内容是什么
	//char arr1[] = "abc"; //(默认有一个'\0')
	//char arr2[] = { 'a', 'b', 'c' }; // 仅仅只有a, b, c三个字符, 没有'\0'
	// 查看字符串的内容
	//printf("%s\n", arr1); //abc
	//printf("%s\n", arr2); //abc烫烫烫烫蘟bc

	// 查看字符串的长度(strlen)
//	printf("%d\n", strlen(arr1)); // 3
//	printf("%d\n", strlen(arr2)); // 大于3的随机数
//	return 0;
//}

// 转义字符
//int main() {
	//printf("c:\test\32\test.c");

	// 若存在转义字符的情况下求字符串的长度
	//printf("%d\n", strlen("c:\test\32\test.c")); // 13

	// 在存在转义字符的情况下求字符的内容
	//printf("%c\n", '\32'); // 把8进制的32转换成10进制数后，作为ASCII码值代表的那个字符
//	return 0;
//}


// 对于if语句的使用
//int main() {
//	int input = 0;
//	printf("你要好好学习吗?(0/1)\n");
//	scanf("%d", &input);
//	if (input == 1) {
//		printf("拿到offer\n");
//	}
//	else {
//		printf("回家卖红薯\n");
//	}
//	return 0;
//}

// 对于while循环语句的使用
//int main() {
//	int line = 0;
//	while (line < 2000) {
//		printf("继续敲代码 %d\n", line);
//		line++;
//    }
//	printf("拿到offer\n");
//	return 0;
//}

// 函数
// 例: f(x, y) = x + y;
// C语言中的加法 Add(x, y)
//int Add(int x, int y) {
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main() {
//	int num1 = 0;
//	int num2 = 0;
//	int a = 0;
//	int b = 0;
//	int sum = 0;
//
//	sum = Add(10, 20);
//	printf("sum = %d\n", sum); // 30
//	
//	sum = Add(30, 50);
//	printf("sum = %d\n", sum); // 80
//	return 0;
//}

// 数组 --> 批量创建了一组相同类型的变量
// 数组的下标是从0开始,一直到数组的长度 - 1为止
//int main() {
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	// 求数组元素的下标
	//printf("%d\n", arr[5]); // 6
	// 求数组中每个元素的下标
//	int i = 0;
//	for (i = 0; i < 10; i++) {
//		printf("%d ", arr[i]); // 1 2 3 4 5 6 7 8 9 10
//	}
//	return 0;
//}

// 操作符
//int main() {
	//int a = 5;
	//int b = 2;
	// 算数操作符( + - * / % )
	//int sum = a + b; // 7
	//printf("%d\n", sum);
	//int mod = a % b;
	//printf("%d\n", mod); // 1

    // 位操作符( & | ^ )
	//int num = a & b; 
	//printf("%d\n", num); // 0
	// 1001
	// 0010

	//int num = a | b;
	//printf("%d\n", num); // 7

	//int num = a ^ b; // 相同为0, 相反为1
	//printf("%d\n", num); // 7

	// 赋值操作符( = += -+ *= /= &= |= ^= )
	//num = num + 1  <--> num += 1
	//num = num * 1  <--> num *= 1
	//num = num & 1  <--> num &= 1
	
    // 单目操作符
	//sizeof 求操作数的类型长度
	// 计算数组元素的个数: sizeof(arr) / sizeof(arr[0])
	// 计算数组的长度
	//int arr[5] = { 0 };
	//printf("%d\n", sizeof(arr)); // 20

//	int arr[] = { 1,2,4,3,6,85,5,7,9,3,8,6,0,1 };
//	printf("%d\n", sizeof(arr) / sizeof(arr[0])); // 14
//
//	return 0;
//}
