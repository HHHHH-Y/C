#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
// strcpy����
// strcpy --> string copy --> �ַ�������
// char* strcpy(char* destination, const char* source);
//int main() {
//	char str1[20] = "##########";
//	char str2[] = "kris";
//	strcpy(str1, str2);  // ��str2������str1��
//	printf("%s\n", str1); // kris
//	return 0;
//}

// memset����
// memset --> memory set --> �ڴ�����
// void * memset ( void * ptr, int value, size_t num );
//int main() {
//	char arr[] = "Hello, kris";
//	memset(arr, '*', 5);
//	printf("%s\n", arr); // *****, kris
//	return 0;
//}

// �ú��������������еĽϴ�ֵ 
// �������ҳ����ֵ����û�иı�ʵ�ε�ֵ, ���Ӧ��ʹ�ô�ֵ����
//int get_max(int x, int y) {
//	// return (x > y ? x : y);
//	if (x > y) {
//		return x;
//	} else {
//		return y;
//	}
//}
//int main() {
//	int a = 10;
//	int b = 20;
//	int max = get_max(a, b);
//	printf("max = %d\n", max);
//	return 0;
//}

// �ú���ʵ���������Ľ���
// �����������н���, ʵ�ε�ֵ�ᷢ���ı�. ���Ӧ�ò��ô�ַ����
// �����������н�������, ����Ҫ����ʲô. ���, �����ķ�������Ӧ��Ϊvoid����
//// err
//void Swap1(int x, int y) {  // a �� b ��û�ý��н���
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//}
//// ok
//void Swap2(int* pa, int* pb) {  // ���������ǵ�ַ, ��Ӧ����ָ��������
//	int tmp = 0;
//	tmp = *pa; // *pa = a
//	*pa = *pb; // *pb = b
//	*pb = tmp;
//}
//int main() {
//	int a = 10;
//	int b = 20;
//	printf("a = %d b = %d\n", a, b);
//	//Swap1(a, b);  // ��Swap����ʵ��a��b�Ľ���
//	Swap2(&a, &b);  // ��ַ����, ���ľ��ǵ�ַ        
//	printf("a = %d b = %d\n", a, b);
//	return 0;
//}

// �ú����ж�����
// ʵ��һ������, �ж�һ�����ǲ������� (ֻ��Ҫ�ж�, ����Ҫ�ı�ʵ�ε�ֵ, ���ô�ֵ���ü���)
// ��������ʵ�ֵĺ�����ӡ100 - 200 ֮�������
//#include <stdio.h>
//#include <math.h>
//int is_prime(int x) {
//	int j = 0;
//	for (j = 2; j <= sqrt(x); j++) {
//		if (x % j == 0) {
//			return 0;
//		}
//	}
//	return 1;
//}
//
//int main() {
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++) {
//		int ret = is_prime(i);
//		if (ret == 1) {
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}

// ʹ�ú����ж����� (ֻ���ж�, ����ʹ�ô�ֵ���ü���)
// ʵ�ֺ����ж�year�ǲ�������
//#include <stdio.h>
//int is_leap_year(int y) {
//	if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0) {
//		return 1;
//	} else {
//		return 0;
//	}
//}
//int is_leap_year(int y) {
//	return ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0); // ʹ�����߼������, ��1��0
//}
//int main() {
//	int year = 0;
//	scanf("%d", &year);
//	int ret = is_leap_year(year); // ������ͷ���1, ��������ͷ���0
//	if (ret == 1) {
//		printf("%d��������\n", year);
//	}
//	return 0;
//}

 дһ������, ʵ��һ��������������Ķ��ֲ���
#include <stdio.h>

int Binary_search(int arr[], int k, int sz) {
	int left = 0;
	//int right = sizeof(arr) / sizeof(arr[0]) - 1; // int right = 4 / 4 - 1 = 0
	int right = sz - 1;
	while (left <= right) {
		int mid = (left + right) / 2;
		if (arr[mid] > k) {
			right = mid - 1;
		} else if (arr[mid] < k) {
			left = mid + 1;
		} else {
			return mid;
		}
	}
	return -1;
}
int main() {
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int k = 0;
	scanf("%d", &k);
	int sz = sizeof(arr) / sizeof(arr[0]); // ����ĳ���
	// ���ú���ʵ�ֶ��ֲ���
	// ���鴫��ʱ, ����ȥ����һ��������, �������ϴ���ȥ������������Ԫ�صĵ�ַ &arr[0]
	// Ҳ����: ���鴫��ʱ�ᷢ������ --> �����Ԫ�ص�ַ
	int ret = Binary_search(arr, k, sz); // �ҵ��˾ͷ��������±�, �Ҳ����ͷ���-1
	if (ret == -1) {
		printf("�Ҳ���\n");
	} else {
		printf("�ҵ���, �±���%d\n", ret);
	}
	return 0;
}

// �˷��ھ���
// ʵ��һ������, ��ӡ�˷��ھ���, �ھ���������������Լ�ָ��
// �磺����9�����9*9�ھ������12�����12*12�ĳ˷��ھ���
//#include <stdio.h>
// void multiplication_table(int x) { 
//	int i = 0;
//	int mul = 0;
//	for (i = 1; i <= x; i++) {
//		int j = 0;
//		for (j = 1; j <= i; j++) {
//			mul = i * j;
//			printf("%-2d*%d=%-2d  ", i, j, mul);
//		}
//		printf("\n");
//	}
//}
//int main() {
//	int x = 0;
//	scanf("%d", &x);
//	multiplication_table(x);
//	return 0;
//}

// дһ������, ÿ����һ���������, �ͻὫnum��ֵ����1
// ���ú�����, num��ֵ�ᷢ���ı�, ���Ӧ�ò��ô�ַ����
//#include <stdio.h>
//void Add(int* p) {  // *p = num
//	(*p)++;
//}
//int main() {
//	int num = 0;
//	Add(&num);
//	printf("num = %d\n", num);
//	Add(&num);
//	printf("num = %d\n", num);
//	return 0;
//}

// ��������ʽ����(��һ�������ķ���ֵ��Ϊ��һ�������Ĳ���
//int main() {
//	int len = strlen("kris");
//	printf("len = %d\n", len); // len = 4
//	// ��strlen�����ķ���ֵ��Ϊprintf�����Ĳ���
//	printf("len = %d\n", strlen("kris")); // len = 4
//	return 0;
//}
//int main() {
//	// printf�����ķ���ֵӦΪ: the total number of characters written is returned(��д�������ַ��ĸ���)
//	printf("%d", printf("%d", printf("%d", 43))); // 4321
//	return 0;
//}