#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <math.h>
//int main()
//{
//	int a = 0, b = 0;
//	for (a = 1, b = 1; a <= 100; a++)
//	{
//		if (b >= 20) break;
//		if (b % 3 == 1)
//		{
//			b = b + 3;
//			continue;
//		}
//		b = b - 5;
//	}
//	printf("%d\n", a);
//	return 0;
//}

// 编写程序数一下 1到 100 的所有整数中出现多少个数字9
//int main() {
//	int i = 1;
//	int count = 0;
//	for (; i <= 100; i++) {
//		if (i % 10 == 9) {
//			count++;
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}

// 计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值，打印出结果
int main() {
	int n = 1;
	double sum = 0.0;
	double num = 0.0;
	for (n = 1; n <= 100; n++) {
			num = pow(-1.0, (n - 1.0));  // 在C语言中, 取次方的函数为 double pow(doublex, double y), 头文件为<math.h>
			sum = sum + (num * (1.0 / n)); // 只要有一个数是浮点型, 那么整个计算结果就是浮点型
	}
	printf("%lf\n", sum);
	return 0;
}

// 求10 个整数中最大值
//int main() {
//	int arr[10] = { 0 };
//	int i = 0;
//	int max = arr[0];
//	for (i = 0; i < 10; i++) {  // 输入10个整数
//		scanf("%d", &arr[i]);
//		if (max < arr[i]) {
//			max = arr[i];
//		}
//	}
//	printf("max = %d\n", max);
//	return 0;
//}

// 在屏幕上输出9*9乘法口诀表
//int main() {
//	int i = 1;
//	int j = 1;
//	int mul = 0;
//	for (i = 1; i <= 9; i++) {
//		for (j = i; j <= 9; j++) {
//			mul = i * j;
//			printf("%d*%d=%d ", i, j, mul);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main() {
//	int i = 0;
//	for (i = 0; i < 10; i++) {
//		if (i = 5) {
//			printf("%d ", i); // 5 死循环
//		}
//	}
//	return 0;
//}

//int func(int a) {  // a = 1
//    int b;
//    switch (a) {
//    case 1: b = 30;
//    case 2: b = 20;
//    case 3: b = 16;
//    default: b = 0;
//    }
//    return b;
//}
//int main() {
//    int ret = func(1);
//    printf("ret = %d\n", ret); // 0
//    return 0;
//}

//int main() {
//	int x = 3;
//	int y = 3;
//	switch (x % 2) {  // 1
//	case 1:
//		switch (y){ // 3
//		case 0:
//			printf("first");
//		case 1:
//			printf("second");
//			break;
//		default: printf("hello"); // hello
//		}
//	case 2:
//		printf("third"); // third
//	}
//	return 0;
//}

// 写代码将三个数按从大到小输出
// 10 20 30
//int main() {
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c); // 输入三个数字
//	if (a < b) {
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	// 20 10 30
//	if (a < c) {
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	// 30 10 20
//	if (b < c) {
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}

// 写一个代码打印1-100之间所有3的倍数的数字
//int main() {
//	int i = 1;
//	for (; i <= 100; i++) {
//		if (i % 3 == 0) {
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

// 给定两个数，求这两个数的最大公约数
// 最大公约数绝不可能超过其中较小的那个数
// 方法1(使用循环, 倒过来寻找最大公约数)
//int main() {
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n); // 输入 m 和 n 的值
//	// 寻找其中较小的数
//	int min = (m > n ? n : m);
//	while (1) {
//		if (m % min == 0 && n % min == 0) {
//			break;
//		}
//		min--;
//	}
//	printf("最大公约数为: %d\n", min);
//	return 0;
//}
// 方法2: 辗转相除法
//int main() {
//	int m = 24;
//	int n = 18;
//	int r = 0;
//	while (r = m % n) {  // 当 r == 0 的 时候跳出
//		m = n;
//		n = r;
//	}
//	printf("最大公约数为: %d\n", n);  
//	return 0;
//}

// 打印1000年到2000年之间的闰年
//int main() {
//	int year = 1000;
//	int count = 0;
//	while (year <= 2000) {
//		if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
//			printf("%d ", year);
//			count++;
//		}
//		year++;
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}

// 写一个代码：打印100~200之间的素数(除了1和它本身以外, 不能被其他数整除)
// 试除法
// 方法一:
//int main() {
//	int i = 100;
//	int j = 2; // 试除的数(2 -> 该数-1)
//	int count = 0;
//	while (i <= 200) { // 100 到 200 之间的数字
//		for (j = 2; j < i; j++) {
//			if (i % j == 0) {  // 说明i一定不是素数
//				break;
//			}
//		}
//		
//		// 跳出循环有两种情况: 1.不是素数; 2. 判断完所有数之后确定是素数
//		// 判断出是素数的情况
//		if (j == i) {
//			printf("%d ", i);
//			count++;
//		}
//		i++;
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}
// 方法二:(每个数都可以表示成: num = a * b; 其中总会有一个数是 <= num 的开平方的)
//int main() {
//	int i = 100;
//	int j = 2;
//	int count = 0;
//	while (i <= 200) {
//		for (j = 2; j <= sqrt(i); j++) {  // 在C语言中,开平方函数为 sqrt(), 函数的头文件为 <math.h>
//			if (i % j == 0) {
//				break;
//			}
//		}
//		if (j > sqrt(i)) {
//			printf("%d ", i);
//			count++;
//		}
//		i++;
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}
// 方法三:(偶数都不是素数)
//int main() {
//	int i = 101;
//	int j = 2;
//	int count = 0;
//	while (i <= 200) {
//		for (j = 2; j <= sqrt(i); j++) {  // 在C语言中,开平方函数为 sqrt(), 函数的头文件为 <math.h>
//			if (i % j == 0) {
//				break;
//			}
//		}
//		if (j > sqrt(i)) {
//			printf("%d ", i);
//			count++;
//		}
//		i += 2;
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}

// 变量不初始化的情况
// 无法掌控变量的值, 也得不到我们所预期的值
//int main() {
//	int a;
//	printf("%d\n", a);
//	a++;
//	return 0;
//}

//int main() {
//	int ch = 0;
//	while ((ch = getchar()) != EOF) {  // EOF 文件结束标志, 一般放于文件末尾
//		putchar(ch);
//	}
//	return 0;
//}

// getchar()  putchar() 的应用
// getchar()-->获取字符,  putchar()-->打印字符
// 在进行键盘输入时, 需要敲回车(\n)时, 才能触发函数去读取字符
// 而scanf得到想要的值之后, 会在输入缓冲区剩余一个\n,
// 这时, getchar()发现输入缓冲区中并非为空, 就会自动读取缓冲区中的内容, 进而进行之后的判断
//int main() {
//	int ch = 0;
//	char input[20] = { 0 }; // 创建一个字符串数组, 用来存放字符串
//	printf("请输入密码: \n");
//	scanf("%s", input);  // 123456
//	printf("请确认密码(Y/N): ");
//	ch = getchar();
//	if (ch == 'Y') {
//		printf("确认成功!\n");
//	} else {
//		printf("确认失败!\n");
//	}
//	return 0;
//}

// 这时,就需要一个getchar()将缓冲区中的\n清空
//int main() {
//	int ch = 0;
//	char input[20] = { 0 }; // 创建一个字符串数组, 用来存放字符串
//	printf("请输入密码: \n");
//	scanf("%s", input);  // 123456
//	printf("请确认密码(Y/N): "); // Y 和 N 都是字符
//	getchar();
//	ch = getchar();
//	if (ch == 'Y') {
//		printf("确认成功!\n");
//	} else {
//		printf("确认失败!\n");
//	}
//	return 0;
//}

// 若此时输入的是 123456 ABCDE\n
// scanf在读取到空格时就会停止, 但是后面还有很多字符, 这时采用gerchar()读取字符显然很麻烦
// 这个时候, 最好的方式就是清空输入缓冲区
//int main() {
//	int ch = 0;
//	char input[20] = { 0 }; // 创建一个字符串数组, 用来存放字符串
//	printf("请输入密码: \n");
//	scanf("%s", input);  // 123456
//	printf("请确认密码(Y/N): "); // Y 和 N 都是字符
//	// 清空缓冲区
//	while ((ch = getchar()) != '\n') {
//		;
//	}
//	ch = getchar();
//	if (ch == 'Y') {
//		printf("确认成功!\n");
//	} else {
//		printf("确认失败!\n");
//	}
//	return 0;
//}


// while循环的步骤
//int mian() {
//	int a = 0; // 初始化
//	while (a < 10) { // 条件判断
//		a++; // 调整
//	}
//	return 0;
//}
// 显然, while语句中, 初始化语句, 条件判断语句,调整语句都是分开的
// 一旦代码过长的情况下, 很容易忽略或者遗漏

// for循环的步骤
//int main() {
//	int i = 0;
//	for (i = 0; i < 10; i++) {
//		printf("hehe\n");
//	}
//	return 0;
//}
// 由此可见,for语句的三个要素是集中放置的, 不容易遗漏, 因此, 在循环中, 更推荐for语句 

// for语句中, 初始化语句, 条件判断语句, 调整语句都是可以省略的
// 当判断部分被省略时意味着判断部分恒为真
//int main() {
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int i = 0;
//	for (; i < 10; i++) {
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//int main() {
//	int i = 0;
//	for (;;) {
//		printf("hehe\n");
//	}
//	return 0;
//}

//for语句中break和continue的用法
//在for循环语句中, break用于终止循环
//int main() {
//	int i = 0;
//	for (i = 0; i < 10; i++) {
//		if (i == 5) {
//			break;
//		}
//		printf("%d ", i); // 0 1 2 3 4
//	}
//	return 0;
//}
// for循环语句中的continue用于跳出本次循环, 直接到调整部分
//int main() {
//	int i = 0;
//	for (i = 0; i < 10; i++) {
//		if (i == 5) {
//			continue;
//		}
//		printf("%d ", i); // 0 1 2 3 4 6 7 8 9 
//	}
//	return 0;
//}

// do ... while 语句
// do ... while 语句至少循环 1 次
//int main() {
//	int i = 0;
//	do {
//		printf("%d ", i); // 0 1 2 3 4 5 6 7 8 9
//		i++;
//	}while (i < 10);
//	return 0;
//}

// do ... while 语句中的break和continue的用法
// do ... while 语句中的break和continue的用法和while 语句中的用法相同
//int main() {
//	int i = 0;
//	do {
//		if (i == 5) {
//			break;
//		}
//		printf("%d ", i); // 0 1 2 3 4 
//		i++;
//	} while (i < 10);
//	return 0;
//}
//int main() {
//	int i = 0;
//	do {
//		if (i == 5) {
//			continue;
//		}
//		printf("%d ", i); // 5 会产生一个死循环
//		i++;
//	} while (i < 10);
//	return 0;
//}

// 计算 n 的阶乘
// 5 的阶乘: 5 * 4 * 3 * 2 * 1
//int main() {
//	int n = 0; 
//	scanf("%d", &n); // 输入一个值
//	int i = 1;
//	int ret = 1;
//	for (i = 1; i <= n; i++) {
//		ret = ret * i;
//	}
//	printf("ret = %d\n", ret);
//	return 0;
//}

// 计算 1! + 2! + 3! + ... + 10!
// 1! + 2! + 3! = 1 + 2 + 6 = 9
//int main() {
//	// 先算出每个数的阶乘, 然后相加
//	int i = 1;
//	int sum = 0;
//	int ret = 1;
//	for (i = 1; i <= 10; i++) {
//		ret = ret * i; // 计算出每个数的阶乘
//		sum = sum + ret;
//	}
//	printf("sum = %d\n", sum);
//	return 0;
//}



