#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 求两个数二进制中不同位的个数
// 编程实现：两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同？ 
// 输入例子:
// 1999 2299
// 输出例子 : 7
//int main() {
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);
//	 //将两个数进行^(异或: 相同为0, 相反为1), 然后求出异或结果中1的个数
//	int num = m ^ n;
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++) {
//		if (((num >> i) % 2) == 1) {
//			count++;
//		}
//	}
//	printf("count = %d\n", count);
//	return 0;
//}

// 不允许创建临时变量，交换两个整数的内容
//int main() {
//	int a = 10;
//	int b = 20;
//	printf("a = %d b = %d\n", a, b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("a = %d b = %d\n", a, b);
//	return 0;
//}

// 统计二进制中1的个数
// 写一个函数返回参数二进制中 1 的个数。
// 比如： 15    0000 1111    4 个 1
//int  NumberOf1(int n) {
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++) {
//		if (((n >> i) & 1) == 1) {
//			count++;
//		}
//	}
//	return count;
//}
//int main() {
//	int num = 0;
//	scanf("%d", &num);
//	int ret = NumberOf1(num);
//	printf("ret = %d\n", ret);
//	return 0;
//}

// 打印整数二进制的奇数位和偶数位
// 获取一个整数二进制序列中所有的偶数位和奇数位，分别打印出二进制序列
// 例: 1999
// 00000000000000000000011111001111
// 奇数位: 0000000000111011
// 偶数位: 0000000000011011
//void Odd_bit(int n) {
//	int i = 30;
//	int j = 0;
//	for (i = 30; i >= 0; i -= 2) {
//		j = ((n >> i) & 1);
//		printf("%d", j);
//	}
//	printf("\n");
//}
//void Even_bit(int n) {
//	int i = 31;
//	int j = 0;
//	for (i = 31; i > 0; i -= 2) {
//		j = ((n >> i) & 1);
//		printf("%d", j);
//	}
//	printf("\n");
//}
//int main() {
//	int num = 0;
//	scanf("%d", &num);
//	Odd_bit(num);
//	Even_bit(num);
//	return 0;
//}

// 算数操作符
// +  -  *  /  %(两边必须都是整型)
//int main() {
//	//double c = 7.0 / 2;
//	//int c = 7 / 2;
//	//printf("%d\n", c); // 3
//	//printf("%lf\n", c); // 3.5
//	int c = 7 % 2;
//	printf("%d\n", c); // 1
//	return 0;
//}

// 移位操作符(移动的是二进制位)
// >> 右移操作符(在VS编译器中使用的是算术右移)
//        有两种表示方式: 
//            a. 算术右移(左边用符号位填充,右边丢弃)
//            b. 逻辑右移(左边用0填充, 右边丢弃)
// << 左移操作符
//          (左边抛弃, 右边补0)
// 整数 -> 二进制表示形式有三种: 原码, 反码, 补码
// 内存中存放的是二进制的补码形式
// 正整数: 原码, 反码, 补码相同
// 负整数: 直接写的二进制序列就是原码, 原码的符号位不变, 其他为按位取反得到的就是反码, 反码+1得到的就是补码
//int main() {
	//int a = 14;
	//a = a >> 1;
	//// 00000000000000000000000000001110
	//// 00000000000000000000000000000111 // >> 1
	//printf("%d\n", a); // 7

	//int b = -5;
	//b = b >> 1;
	//// 10000000000000000000000000000101 - 原码
	//// 11111111111111111111111111111010 - 反码
	//// 11111111111111111111111111111011 - 补码
	//// 11111111111111111111111111111101 - >> 1
	//printf("%d\n", b); // -3

//	int c = 14;
//	c = c << 1;
//	// 00000000000000000000000000001110
//	// 00000000000000000000000000011100 // << 1
//	printf("%d\n", c); // 28
//	return 0;
//}

// 位操作符(操作数不许为整数, 位: 表示二进制位)
// &: 按位与
//int main() {
//	int a = 5;
//	int b = 10;
//	// 00000000000000000000000000000101
//	// 00000000000000000000000000001010
//	// 00000000000000000000000000000000 - &
//	int c = a & b;
//	printf("%d\n", c); // 0
//	return 0;
//}

// |: 按位或
//int main() {
//	int a = 3;
//	int b = 5;
//	// 00000000000000000000000000000011
//	// 00000000000000000000000000000101
//	// 00000000000000000000000000000111 - | 
//	int c = a | b;
//	printf("%d\n", c); // 7
//	return 0;
//}

// ^: 按位异或(对应二进制位, 相同为0, 相异为1)
//int main() {
//	int a = 3;
//	int b = 5;
//	// 00000000000000000000000000000011
//	// 00000000000000000000000000000101
//	// 00000000000000000000000000000110 - ^
//	int c = a ^ b;
//	printf("%d\n", c); // 6
//	return 0;
//}

// 不能创建临时变量(第三个变量), 实现两个数的交换
//int main() {
//	int a = 3; 
//	int b = 5;
//	printf("a = %d b = %d\n", a, b);
//	//// 通常情况下
//	//int c = a;
//	//a = b;
//	//b = c;
//	//printf("a = %d b = %d\n", a, b);
//	// 不创建临时变量进行交换
//	//a = a + b;
//	//b = a - b;
//	//a = a - b;
//	//printf("a = %d b = %d\n", a, b);
//	// 这种方法是存在缺陷的, 可能会产生溢出
//
//	// 这种方法最好
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("a = %d b = %d\n", a, b);
//	return 0;
//}

// 赋值操作符, 复合赋值符
//int main() {
//	int a = 5;
//	//a += 2;
//	//printf("%d\n", a); // 7
//	//a %= 2;
//	//printf("%d\n", a); // 1
//	a = 10;
//	printf("%d\n", a); // 10
//	return 0;
//}

// 单目操作符
// !  +  -  &  sizeof   ~   --  ++  *  ()
//int main() {
//	//int flag = 0;
//	//if (flag) {
//	//	// 如果flag为真, 进来
//	//}
//	//if (!flag) {
//	//	// 如果flag为假, 进来
//	//}
//	int flag = 3;
//	if (flag) {
//		printf("hehe\n");
//	}
//	if (!flag) {
//		printf("haha\n");
//	}
//	return 0;
//}

//int main() {
//	int a = 10;
//	printf("%p\n", &a); 
//	int* pa = &a; // pa是指针, 存放的是a的地址
//	printf("%p\n", pa);
//	*pa = 20;
//	printf("%d\n", a); // 20
//	return 0;
//}

//int main() {
//	int a = 0;
//	int arr[10] = { 0 };
//	//printf("%d\n", sizeof(a)); // 4
//	//printf("%d\n", sizeof(int)); // 4
//	//printf("%d\n", sizeof(arr)); // 计算数组的总大小, 单位是字节
//	//printf("%d\n", sizeof(int[10])); // 去掉数组名, 剩下的就是类型
//	return 0;
//}

//int main() {
//	int a = 10;
//	short s = 5;
//	printf("%d\n", sizeof(s = a + 3)); // 2
//	printf("%d\n", s); // 5
//	return 0;
//}

// ~: 对一个二进制数进行按位取反(包括符号位都进行按位取反)
//int main() {
//	int a = 14;
//	// 00000000000000000000000000001110 - 补码(原码)
//	// 11111111111111111111111111110001 - 补码
//	// 11111111111111111111111111110000 - 反码
//	// 10000000000000000000000000001111 - 原码
//	a = ~a;
//	printf("%d\n", a); // -15
//	return 0;
//}

// 40 10 4 4
void test1(int arr[]) { // 相当于是指针
	printf("%d\n", sizeof(arr)); // (3)
}
void test2(char ch[]) { // 相当于指针
	printf("%d\n", sizeof(ch)); // (4)
}
int main() {
	int arr[10] = { 0 };
	char ch[10] = { 0 };
	printf("%d\n", sizeof(arr)); // (1)
	printf("%d\n", sizeof(ch)); // (2)
	test1(arr); // 传过去的是数组的首元素地址
	test2(ch); // 同上
	return 0;
}

//int main() {
//	int a = (int) 3.14; // 强制类型转换
//	printf("%d\n", a); // 3
//	return 0;
//}

//int main() {
//	int a = 5;
//	//int b = a++;
//	//printf("%d %d\n", b, a); // 5 6
//	//int b = ++a;
//	//printf("%d %d\n", b, a); // 6 6
//	//int b = a--;
//	//printf("%d %d\n", b, a); // 5 4
//	int b = --a;
//	printf("%d %d\n", b, a); // 4 4
//	return 0;
//}