#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//#define MAX 100

 �ؼ��� static ��ʹ����ϰ
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

// �ַ���(��'\0'Ϊ������־)
//int main() {
//	// "abc" --> �ַ���
//	char arr1[] = "abc";
//	char arr2[] = { 'a', 'b', 'c' };
//	// 1. �鿴�ַ���������(ֻ���ӡ�ַ�������)
//	//printf("%s\n", arr1); // abc
//	//printf("%s\n", arr2); // abc���������abc
//	// 2. �����ַ����ĳ���
//	printf("%d\n", strlen(arr1)); //3
//	printf("%d\n", strlen(arr2)); // ���ֵ
//
//	return 0;
//}

// sizeof(��������ĳ����������͵Ĵ�С)
//int main() {
//	int a = 10;
//	int arr[6] = { 0 };
//	printf("%d\n", sizeof(a)); // 4
//	printf("%d\n", sizeof(arr)); //24
//	return 0;
//}

// ~: ��һ�����Ķ����ư�λȡ��
//int main() {
//	int a = 10;
//	// int ռ 4 ���ֽ�, ռ 32 �� bit
//	//00000000000000000000000000001010
//	// ~a
//	//11111111111111111111111111110101
//	printf("%d\n", ~a); // -11
//	return 0;
//}

// ++, -- ���÷�
//int main() {
	// ǰ��++
	//int a = 0;
	//int b = ++a;
	//printf("b = %d, a = %d\n", b, a); // 1 , 1
	// ����++  
	//int a = 10;
	//int b = a++;
	//printf("b = %d, a = %d\n", b, a); // 10, 11
	// ǰ��--
	//int a = 10;
	//int b = --a;
	//printf("b = %d, a = %d\n", b, a); // 9, 9
	// ����--
//	int a = 10;
//	int b = a--;
//	printf("b = %d, a = %d\n", b, a); // 10, 9
//	return 0;
//}

// ǿ������ת��  ( )
//int main() {
//	int num = 3.14; // 3.14 Ϊ double ����
//	// ǿ������ת��
//	int num = (int)3.14; // �� double ����ת����Ϊ int ����
//	return 0;
//}

// �߼�������: &&, ||
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

// ���������� / ��Ŀ������
// ����Ŀ�������ķ�ʽ, ��������������ϴ�ֵ
//int main() {
//	int a = 10;
//	int b = 20;
//	int max = 0;
//	max = a > b ? a : b;
//	printf("max = %d\n", max); // max = 20
//	return 0;
//}

// �±����ò����� [ ]
//int main() {
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", arr[6]); // 7
//	return 0;
//}

// �������ò����� ( )
// �ú������õķ�ʽ, ��������������ϴ�ֵ
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

// typedef�ؼ���  ���Ͷ��� / ����������
//typedef unsigned int uint;
//int main() {
//	// ����һ���������
//	unsigned int age1;
//	uint age2;
//	return 0;
//}

// register(�Ĵ���) 
// �������Ὠ�齫Ƶ������ʹ�õı��������Ĵ�����
//int mian() {
//	register int a = 0; // ����a����δ��Ƶ��������ʹ��, ��������Ὠ�����register�ؼ���
//	int b = 10;
//	return 0;
//}

// static�ؼ��ֵ�����

// 1. ���ξֲ�����: �޸��˾ֲ���������������, ����˸�����������
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

// 2. ����ȫ�ֱ���: �޸���ȫ�ֱ�����������, ֻ�����Լ����ڵ�Դ�ļ���ʹ��, ���ܿ��ļ�ʹ��
//    extern ���������ⲿ����
//extern int g_val;
//int main() {
//	printf("%d\n", g_val); 
//	return 0;
//}

// 3. ���κ���: �޸��˺�����������, ֻ�����Լ����ڵ�Դ�ļ���ʹ��, ���ܿ��ļ�ʹ��
//extern int sum(int x, int y);
//int main() {
//	int a = 10;
//	int b = 20;
//	int c = 0;
//	c = sum(a, b);
//	printf("%d\n", c);
//	return 0;
//}

// strlen �� sizeof ������
// 1. ������ʵû���κι���
// 2. strlen ��һ���⺯��, ֻ���������ַ����ĳ���
//   ( ���ַ�����ʼ�ĵط�������ַ��ĸ���, ֱ������'\0'Ϊֹ, �����в�����'\0' )
// 3. sizeof ��һ��������, ��������ĳ������������͵Ĵ�С��, ��λ���ֽ�)

// #define ���峣��

//int main() {
//	int a = MAX;
//	printf("%d\n", a); // 100
//	return 0;
//}

// #define �����
// ͨ����������ʽ������������еĽϴ�ֵ
//#define MAX(X, Y) ((X) > (Y) ? (X) : (Y))
//int main() {
//	int a = 10;
//	int b = 20;
//	int max = 0;
//	max = MAX(a, b);
//	printf("%d\n", max);
//	return 0;
//}

// ָ��
// ָ�����ֻ�洢��ֵַ
//int main() {
//	int a = 10;
//	printf("%p\n", &a); // a �ĵ�ַ
//	int* p = &a;
//	printf("%p\n", p); // a �ĵ�ַ
//	return 0;
//}

//int main() {
//	int a = 10;
//	int* pa = &a;
//	char c = '0';
//	char* pc = &c;
//	return 0;
//}

// * ��ӷ��ʲ����� / �����ò�����
//int main() {
//	int a = 10;
//	int* pa = &a;
//	*pa = 20; // *pa ���൱�� a
//	printf("%d\n", a); // 20;
//	return 0;
//}

//int main() {
//	char c = 'a';
//	char* pc = &c;
//	*pc = 'w'; // *pc ���൱�� c
//	printf("%c\n", c);
//	return 0;
//}

// ָ��Ĵ�С
// ָ���� 32 λƽ̨���� 4 ���ֽ�, �� 64 λƽ̨���� 8 ���ֽ�
// ����ָ��Ĵ�С
//int main() {
//	int a = 10;
//	int* pa = &a;
//	char c = '0';
//	char* pc = &c;
//	printf("%d\n", sizeof(pa)); // 4
//	printf("%d\n", sizeof(pc)); // 4
//	return 0;
//}

