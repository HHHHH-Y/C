#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// static 关键字的用法
void test() {
	static int num = 10; // static关键字修饰局部变量, 改变了它的生命周期
	num++;
	printf("%d\n", num); // 11
}
int main() {
	while (1) {
		test();
	}
	return 0;
}

// 指针的用法
//int main() {
//	int a = 10;
//	printf("%d\n", a); // 10
//	printf("%p\n", &a); // a 的地址
//	int* pa = &a; // pa是指针变量, 用于存储 a 的地址
//	*pa = 20; // * - 解引用操作符
//	printf("%d\n", a); // 20
//	printf("%p\n", pa);
//	return 0;
//}


// 指针的大小(在32位平台上占4个字节, 在64位平台上占8个字节)
//int main() {
//	printf("%d\n", sizeof(int*)); // 4
//	printf("%d\n", sizeof(char*)); // 4
//	printf("%d\n", sizeof(double*)); // 4
//
//	return 0;
//}

// 自己创建的类型--自定义类型(结构体)
// 创建一个书的类型
// 1, 创建类型
//struct Book {
//	// 创建成员变量
//	char name[30]; // 书名
//	double price;  // 定价 
//	char id[30];   // 书号
//};

// 要相关使用结构体的成员信息, 有如下方法:
// 1. 结构体变量.成员名
//int main() {
//	// 定义一本书
//	struct Book b1 = { "欢乐颂", 32.65,"ISBN-100909900" };
//	printf("%s\n", b1.name);
//	printf("%lf\n", b1.price);
//	printf("%s\n", b1.id);
//	return 0;
//}

// 2. (结构体指针).成员名
//int main() {
//	struct Book b2 = { "欢乐颂", 32.65, "ISBN-100909900" };
//	struct Book* pb = &b2;
//	printf("%s\n", (*pb).name);
//	printf("%lf\n", (*pb).price);
//	printf("%s\n", (*pb).id);
//	return 0;
//}

// 3. 结构体指针->成员名
//int main() {
//	struct Book b2 = { "欢乐颂", 32.65, "ISBN-100909900" };
//	struct Book* pb = &b2;
//	printf("%s\n", pb->name);
//	printf("%lf\n",pb->price);
//	printf("%s\n", pb->id);
//	return 0;
//}
// 这些写法完全等价

// C 语言中由一个分号 : 隔开的就是一条语句
//int main() {
//	; // 空语句
//	return 0;
//}

// if 语句(单分支语句, 多分支语句)
//int main() {
//	int age = 10;
//	if (age < 18) {
//		printf("未成年\n");
//		printf("不能谈恋爱\n");
//	} else if (age >= 18 && age < 30) {
//		printf("青年\n");
//	} else if (age >= 30 && age < 60) {
//		printf("中老年\n");
//	} else if (age >= 60 && age < 90) {
//		printf("老年\n");
//	} else {
//		printf("老不死\n");
//	}
//	return 0;
//}

// C 语言格式的重要性
//int main() {
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//		if (b == 2)
//			printf("hehe\n");
//	else
//		printf("haha\n");
//	return 0;
//}
// 很容易让人理解为最后输出打印的是haha. 
// else 与最近的 if 进行匹配
//int main() {
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//		if (b == 2)
//			printf("hehe\n");
//		else
//			printf("haha\n");
//	return 0;
//}

// 比较常量和变量的值是否相等时, 把常量放在左边
//int main() {
//	int age = 10;
//	if (5 == age) {
//		printf("hehe\n");
//	}
//	return 0;
//}

// 输出1 - 100 之间的奇数(两种方法)
//int main() {
//	int i = 1;
//	while (i <= 100) {
//		if (i % 2 == 1) {
//			printf("%d ", i);
//		}
//		i++;
//	}
//	return 0;
//}
//int main() {
//	int i = 1;
//	while (i <= 100) {
//		printf("%d ", i);
//		i = i + 2;
//	}
//	return 0;
//}

// switch 语句的用法
// 输入一个数字, 从而判断是星期几
//int main() {
//	int day = 0;
//	scanf("%d", &day);
//	switch (day) {  // switch 后面的( )中应该寻访一个整型变量(char short int long longlong) 
//	case 1:
//		printf("星期一\n");
//		break;
//	case 2:
//		printf("星期二\n");
//		break;
//	case 3:
//		printf("星期三\n");
//		break;
//	case 4:
//		printf("星期四\n");
//		break;
//	case 5:
//		printf("星期五 \n");
//		break;
//	case 6:
//		printf("星期六\n");
//		break;
//	case 7:
//		printf("星期天\n");
//		break;
//	default: // default 为默认选项,处理不能被case处理的情况
//		break;
//	}
//	return 0;
//}

// 若输入1 - 5输出的是"weekday", 输入6 - 7输出"weekend"
//int main() {
//	int day = 0;
//	scanf("%d", &day);
//	switch (day) {  // switch 后面的( )中应该寻访一个整型变量(char short int long longlong) 
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("weekday \n");
//		break;
//	case 6:
//	case 7:
//		printf("weekend\n");
//		break;
//  default:
//      break;
//	}
//	return 0;
//}


// switch语句的嵌套用法
//int main() {
//	int n = 1;
//	int m = 2;
//	switch (n) {  // n = 1
//	case 1:
//		m++;  // m = 3
//	case 2:
//		n++;  // n = 2
//	case 3:
//		switch (n) {  // n = 2
//		case 1:
//			n++;
//		case 2:
//			m++; // m = 4
//			n++; // n = 3
//			break; // 跳出内嵌的switch语句
//		}
//	case 4:
//		m++; // m = 5
//		break; // 跳出外部的switch语句
//	default:
//		break;
//	}
//	printf("m = %d, n = %d\n", m, n);  // m = 5, n = 3
//	return 0;
//}

// 死循环
//int main() {
//	while (1) {
//		printf("hehe\n");
//	}
//	return 0;
//}

// 打印0 - 9
// while循环中break的用法: 用于终止循环
//int main() {
//	int i = 0;
//	while (i < 10) {
//		if (i == 5) {
//			break;
//		}
//		printf("%d ", i); // 0 1 2 3 4
//		i++;
//	}
//	return 0;
//}
// while循环中continue的用法: 跳过本次循环后边的代码, 直接去判断部分, 进行下一次循环的入口判断
//int main() {
//	int i = 0;
//	while (i < 10) {
//		if (i == 5) {
//			continue; // 由于存在continue, 所以直接跳出本次循环,直接到循环条件判断处, 进行下一次循环
//		}
//		printf("%d ", i); //0 1 2 3 4
//		i++;
//	}
//	return 0;
//}
