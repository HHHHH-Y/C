#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
// 关系操作符: ==  !=  >=  <=  >  <

// 逻辑操作符
// &&(与): 有假就为假, 全部为真才为真
// ||(或): 有真则真, 全部为假才为假
// 注意: 不要将逻辑操作符与位操作符混淆
// 位操作符是基于二进制序列进行的, 而逻辑操作符是对于两个数的真假进行的
//int main() {
//	int a = 1 && 2;
//	printf("%d\n", a); // 1
//	int b = 0 && 3;
//	printf("%d\n", b); // 0
//	int c = 0 || 2;
//	printf("%d\n", c); // 1
//	int d = 0 || 0;
//	printf("%d\n", d); // 0
//	return 0;
//}

//int main() {
//	//int i = 0, a = 0, b = 2, c = 3, d = 4;
//	int i = 0, a = 1, b = 2, c = 3, d = 4;
//	//i = a++ && ++b && d++;
//	i = a++ || ++b || d++;
//	//printf("a = %d b = %d c = %d d = %d\n", a, b, c, d); //1 2 3 4
//	//printf("a = %d b = %d c = %d d = %d\n", a, b, c, d); // 2 3 3 5
//	//printf("a = %d b = %d c = %d d = %d\n", a, b, c, d); // 1 3 3 4
//	printf("a = %d b = %d c = %d d = %d\n", a, b, c, d); // 2 2 3 4
//	return 0;
//}

// 条件操作符/三目操作符
// exp1 ? exp2 : exp3
//int main() {
//	int a = 3;
//	int b = 5;
//	int max = 0;
//	if (a > b) {
//		max = a;
//	} else if (a < b) {
//		max = b;
//	}
//	printf("%d\n", max); // 5
//	return 0;
//}
//int main() {
//	int a = 3;
//	int b = 5;
//	int max = 0;
//	max = (a > b ? a : b);
//	printf("%d\n", max); // 5
//}

// 逗号表达式
// 就是用逗号隔开的多个表达式. 逗号表达式, 从左向右依次执行. 整个表达式的结果是最后一个表达式的结果
//int main() {
//	int a = 1;
//	int b = 2;
//	int c = (a > b, a = b + 10, a, b = a + 1);
//	printf("%d\n", c); // 13
//	return 0;
//}
//a = get_val();
//count_val(a);
//while (a > 0) {
//  业务处理
//	a = get_val();
//	count_val(a);
//}
// 若用逗号表达式, 则为:
//while(a = get_val(), count_val(a), a > 0){
//      业务处理
//}

// 下标引用操作符[]
// 主要用于数组中
//int main() {
//	int arr[10] = { 0 }; // 创建一个数组, []内为数组的长度
//	printf("%d\n", arr[2]); // []内为数组的下标, arr[2]是指数组中下标为2的元素
//	return 0;
//}

// 函数调用操作符()
//void Print(int arr[], int sz) {
//	int i = 0;
//	for (i = 0; i < sz; i++) {
//		printf("%d ", arr[i]);
//	}
//}
//int main() {
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Print(arr, sz); // ()中是函数调用时需要传递的参数
//	return 0;
//}

// 结构体
// 复杂对象 - 描述 - 复杂类型
// 创建一个学生的结构体: 姓名+电话+年龄+性别
//struct stu {
//	char name[20];
//	char tel[15];
//	int age;
//	char sex[5];
//};
// 用于访问一个结构体变量: 1. 结构体.成员名;   2. 结构体指针 -> 成员名
//int main() {
//	struct stu s = { "Wuyifan", "15930697091", 18, "男" }; // s 是一个结构体变量
//	strcpy(s.name, "Wuyifan");
//	printf("%s\n", s.name);
//	struct stu* p = &s;
//	strcpy(p->sex, "男");
//	printf("%s\n", p->sex);
//	return 0;
//}

// 表达式求值: 隐式类型转换,  算术转换
// 隐式类型转换 -> 整型提升: 表达式中的字符和短整形操作数在使用之前被转换为普通类型

// 算术转换: int -> unsigned int -> long int -> unsigned long int -> float -> double -> long double
// 若有两种不同的类型, 就按照算术转换中的类型进行转换