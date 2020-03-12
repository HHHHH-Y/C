#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//int main() {
//	printf("Hello, bit!\n"); //打印函数-用来在屏幕上打印数据-输出
//
//	return 0;
//}


// main函数-主函数-程序的入口
// main函数有且仅有一个
//int main() {
//	printf("hehe\n");
//	printf("hehe\n");
//	printf("hehe\n");
//	printf("hehe\n");
//	printf("hehe\n");
//
//	return 0;
//}

//int main() {
//	int age = 0;
//	// 输入一个数字到age
//	scanf("%d", &age); // 输入: 100
//	// scanf 和 printf 是一对
//	printf("age = %d\n", age); //输出: 100
//	return 0;
//}

// 身高 - 180 - 整型
// 体重 - 49.5 - 小数 - 浮点型
//int main() {
//	float weight = 49.5f; // 默认是double类型,如果要是float类型的话,得在后面加上f
//	printf("weight = %f\n", weight); // int类型在打印时使用%d, float类型在打印时应该使用%f
//	int hight = 180;
//	return 0;
//}


// sizeof是用来求大小的
//int main() {
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//
//	double salary = 10000.0; // 8个字节 - salary变量向内存申请8个字节的空间, 用来存放10000.0
//	short age = 10; // 向内存申请2个字节的空间
//	short num = 10; // 2个字节
//	return 0;
//}



//int b = 1000; // 全局变量
//
//void test() {
//	int c = 0; // 局部变量
//	printf("%d\n", c);
//}
//
//int main() {
//	//{ } 一个代码块
//	// 在代码块内部定义的变量 -- 局部变量
//	// 在代码块外部定义的变量 -- 全局变量
//	int a = 10; // 局部变量
//
//	printf("%d\n", a);
//	test(); // 调用test()函数
//	return 0;
//}

//int main() {
//	{
//		int a = 10;
//		printf("1 --> a = %d\n", a); // 10
//	} // 出了大括号之后, 局部变量生命周期结束,
//	printf("2 --> b = %d\n", a); // a就是未声明的标识符
//
//	return 0;
//}


//int a = 10000;
//int main() {
//	int a = 10;
//	printf("a = %d\n", a); // 10
//	// 局部变量和全局变量名字冲突的情况下, 局部变量优先
//	return 0;
//}



//// 两个数字之和
//int main() {
//	// 定义并初始化两个变量
//	int num1 = 0; 
//	int num2 = 0;
//	// 输入两个数字
//	scanf("%d%d", &num1, &num2); // 10 20
//	// 将两个数字相加
//	int sum = num1 + num2;
//	// 打印和
//	printf("sum = %d\n", sum);
//
//	return 0;
//}



// 局部变量
// 局部变量的作用域为其所在的局部范围 - 代码块
//int main() {
//	{
//		int a = 10
//	}
//	printf("%d\n", a); // a 为未声明的标识符
//	return 0;
//}


// 全局变量
// 全局变量的作用域为整个工程
//int num = 1000;
//void test() {
//	printf("3: num = %d\n", num); // 1000
//}
//int main() {
//	printf("1: num = %d\n", num); // 1000
//	{
//		printf("2: num = %d\n", num); // 1000
//	}
//	test();
//	return 0;
//}


//// 声明一个外部标识符
//extern int g_val; // 相当于是一个全局变量
//int main() {
//
//	printf("g_val = %d\n", g_val); 
//	return 0;
//}


// 生命周期

int main() {

	{
		int a = 10;
		printf("a = %d\n", a); // 10
	} // 在这个大括号的时候, a 的生命周期已到, 生命结束, 不可再被使用
	// a 不能使用
	printf("a = %d\n", a);
	return 0;
}