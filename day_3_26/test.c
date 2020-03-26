#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
// 打印一个数的每一位
// 递归方式实现打印一个整数的每一位
 //Print(123)
 //Print(12) + 3
 //Print(1) + 2 + 3
//void Print(int n) {   // 打印 n 的每一位数字
//	if (n > 9) {
//		Print(n / 10); // 打印 n/10 的每一位数字
//	}
//	printf("%d ", n % 10); 
//}
//int main() {
//	int num = 0;
//	scanf("%d", &num);
//	Print(num); 
//	return 0;
//}

// 求阶乘
// 递归和非递归分别实现求n的阶乘
// n! = n*(n-1)*(n-2)*...*2*1
//// 非递归
//int fac(int n) {
//	int i = 0;
//	int mul = 1;
//	for (i = 1; i <= n; i++) {
//		mul = mul * i;
//	}
//	return mul;
//}
//int main() {
//	int num = 0;
//	scanf("%d", &num);
//	int ret = fac(num);
//	printf("ret = %d\n", ret);
//	return 0;
//}
// 递归
// n! = (n-1)! * n
//int fac(int n) {  
//	if (n > 1) {
//		return (n * fac(n - 1));
//	} else {
//		return 1;
//	}
//}
//int main() {
//	int num = 0;
//	scanf("%d", &num);
//	int ret = fac(num);
//	printf("ret = %d\n", ret);
//	return 0;
//}

// strlen的模拟
// 递归和非递归分别实现strlen
// strlen 是用于求字符串的长度的
// 非递归
//int Strlen(char* p) {
//	int count = 0;
//	while (*p != '\0') {
//		count++;
//		p++; // 地址++
//	} 
//	return count;
//}
//int main() {
//	char arr[] = "kris"; // 该字符串的长度为3
//	int len = Strlen(arr); // 数组传参时, 传过去的是首元素的地址
//	printf("len = %d\n", len);
//	return 0;
//}
// 递归
//int Strlen(char* p) {
//	if (*p != '\0') {
//		return 1 + Strlen(p + 1);
//	} else {
//		return 0;
//	}
//}
//int main() {
//	char arr[] = "kris";
//	int len = Strlen(arr);
//	printf("len = %d\n", len);
//	return 0;
//}

// 字符串逆序
// 编写一个函数 reverse_string(char * string)（递归实现）
// 实现：将参数字符串中的字符反向排列
// 要求：不能使用C函数库中的字符串操作函数
void reverse_string(char* arr) {
    int len = strlen(arr);
    char tmp = *arr;  // 创建一个临时变量来存放首元素
    *arr = *(arr + len - 1); // 让最后一个字符去覆盖首字符
    *(arr + len - 1) = '\0';  // 让最后一个字符变成 \0
    if (strlen(arr + 1) >= 2) {
        reverse_string(arr + 1);
    } else {
        *(arr + len - 1) = tmp; // 将tmp中存放的值放进最后一个字符的地方
    }
}
int main() {
    char arr[] = "abcd";
    reverse_string(arr);
    printf("%s\n", arr);
    return 0;
}


// 计算一个数的每位之和（递归实现）
// 写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和
// 例如，调用DigitSum(1729)，则应该返回1 + 7 + 2 + 9，它的和是19
// 输入：1729，输出：19
//int DigitSum(int n) {
//		if (n > 9) {
//			DigitSum(n / 10);
//			return (DigitSum(n / 10) + n % 10);
//		} else {
//			return (n % 10);
//		}
//}
//int main() {
//	int num = 0;
//	scanf("%d", &num);
//	int sum = DigitSum(num);
//	printf("sum = %d\n", sum);
//	return 0;
//}

// 递归实现n的k次方
// 编写一个函数实现n的k次方，使用递归实现
// n^k = n^(k - 1) * n
//int times(int x, int y) {
//    if (y == 0) {
//        return 1;
//    }else if (y > 1) {
//        return x * times(x, y - 1);
//    } else {
//        return x;
//    }
//}
//int main() {
//    int n = 0;
//    int k = 0;
//    scanf("%d%d", &n, &k);
//    int ret = times(n, k);
//    printf("ret = %d\n", ret);
//    return 0;
//}

// 计算斐波那契数
// 1 1 2 3 5 8 13 21 34 ...
// 递归和非递归分别实现求第n个斐波那契数
// 例如：
// 输入：5  输出：5
// 输入：10， 输出：55
// 输入：2， 输出：1
// 递归
//int Fib(int n) {
//    if (n <= 2) {
//        return 1;
//    } else {
//        return Fib(n - 1) + Fib(n - 2);
//    }
//}
//int main() {
//    int n = 0;
//    scanf("%d", &n);
//    int ret = Fib(n);
//    printf("ret = %d\n", ret);
//    return 0;
//}
//// 非递归
//int Fib(int n) {
//    int a = 1;
//    int b = 1;
//    int c = 0;
//    while (n > 2) {
//        c = a + b;
//        a = b;
//        b = c;
//        n--;
//    }
//    return c;
//}
//int main() {
//    int n = 0;
//    scanf("%d", &n);
//    int ret = Fib(n);
//    printf("ret = %d\n", ret);
//    return 0;
//}