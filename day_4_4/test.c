#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以多少汽水
// 20 + 10 + 5 + 2 + 1 + 1
// 先用20元买到了20瓶, 产生20个空瓶. 
// 20个空瓶又可以换10瓶. 产生10个空瓶
// 10个空瓶可以换5瓶, 产生5个空瓶
// 5个空瓶可以换2瓶, 还剩余1个空瓶. 产生2个空瓶
// 3个空瓶可以换1瓶. 剩余1个空瓶,产生1个空瓶
// 2个空瓶换1瓶, 产生1个空瓶.这时空瓶无法再继续换汽水
//int main() {
//	int money = 0;
//	scanf("%d", &money); // 20;
//	int count = 0;
//	int empty = 0;
//	int i = 0;
//	// 20元买20瓶汽水
//	for (i = 0; i < money; i++) {
//		count++; // 20
//		empty++; // 20
//	}
//	// 进行空瓶交换汽水
//	while (empty > 1) {
//		count += empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//	// empty <= 1
//	printf("count = %d\n", count);
//	return 0;
//}

// 二级指针
//int main() {
//	int a = 0;
//	printf("%d\n", a); // 0
//	int* pa = &a; // 一级指针
//	*pa = 20;
//	//printf("%d\n", a); // 20
//	int** ppa = &pa; // 二级指针
//	**ppa; // *ppa --> pa --> *pa --> a = 20
//	printf("%d\n", a); // 20
//	return 0;
//}

// 指针数组
// 指针数组本质上来说是一个数组, 里面存放的是指针类型的元素
//int main() {
//	//int* arr[10]; // arr数组里存放了10个int*类型的元素
//	int a = 0;
//	int b = 1;
//	int c = 2;
//	int* arr1[3] = { &a, &b, &c };
//	int i = 0;
//	for (i = 0; i < 3; i++) {
//		printf("%p ", arr1[i]);
//	}
//	return 0;
//}

// 结构体的声明, 定义, 初始化以及结构体成员的访问
// 定义一个学生类: 姓名 + 学号 + 年龄 + 性别
// 结构体的声明, 定义
//struct Stu {
//    char name[20];
//    char id[18];
//    short age;
//    char sex[5];
//};
// 结构体的初始化, 结构体成员访问
// 结构体成员访问有三种方式:
// 1. 结构体变量 . 成员名
// 2. 结构体指针 -> 成员名
// 3. (*结构体指针).成员名
//int main() {
//    struct Stu s = {"张三", "41909020231", 21, "男"}; // 定义结构体变量并初始化
//    printf("%s\n", s.name); // 张三
//    printf("%s\n", s.id);  // 41909020231
//    printf("%d\n", s.age); // 21
//    printf("%s\n", s.sex); // 男
//    struct Stu* p = &s;
//    printf("%s\n", p->name);
//    printf("%s\n", p->id);
//    printf("%d\n", p->age);
//    printf("%s\n", p->sex);
//    printf("%s\n", (*p).name);
//    printf("%s\n", (*p).id);
//    return 0;
//}

// 结构体传参