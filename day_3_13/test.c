#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

 дһ������,���������Ľϴ�ֵ
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

 //#define MAX 1000 // ��ʱ MAX ��Ϊ��һ������, MAX Ϊ 1000, �����ٸı�

//����һ���Ա�ö������
//enum Sex {
//	MALE,
//	FEMALE,
//	SECRET,
//};

//int main() {
	// ����
// 1. ���泣��
	//300;
	//3.14;

// 2. const ���εĳ�����
	 //const int num = 10; // num �Ǳ���, ���������Ϊ��һ������
	 
// ����: ����֤�������ı�����Զ���Ǳ���, �������ǳ���
	//const int num = 20;
	//num = 30; // num�������ٽ��и�ֵ�ı�, �˴�����
	//printf("%d\n", num);

// 3. #define ����ı�ʶ������(#define ����ĺ�, ���ܼ�;)
	//int num = MAX;
	//printf("%d\n", MAX); // 1000
// 4. ö�ٳ���(enum)(ö��ĩβ�� ; һ�����ܶ�ʧ)
//    ö�� --> һһ�о�
//    ��: �Ա�: ��, Ů, ����
//        ��Ԫɫ: ��, ��, �� 

	//enum Sex s = MALE; // ʹ��ö��
	//printf("%d\n", MALE);   // 0
	//printf("%d\n", FEMALE); // 1
	//printf("%d\n", SECRET); // 2
	//
	//return 0;
//}

// %d ��ӡ����
// %f ��ӡ������
// %s ��ӡ�ַ���
// %c ��ӡ�ַ���
// %p ��ӡ��ַ
// �ַ���(��'\0'��Ϊ������־)
// "abc" �����ַ���
// ""  ���ַ���
// @%$& abc ABC �����ַ�, ��ACSII�ж��ж�Ӧ��������������б�ʾ

// �ַ���(��'\0'��Ϊ������־)
//int main() {
	// �����ַ��������Լ��鿴�ַ�����������ʲô
	//char arr1[] = "abc"; //(Ĭ����һ��'\0')
	//char arr2[] = { 'a', 'b', 'c' }; // ����ֻ��a, b, c�����ַ�, û��'\0'
	// �鿴�ַ���������
	//printf("%s\n", arr1); //abc
	//printf("%s\n", arr2); //abc���������abc

	// �鿴�ַ����ĳ���(strlen)
//	printf("%d\n", strlen(arr1)); // 3
//	printf("%d\n", strlen(arr2)); // ����3�������
//	return 0;
//}

// ת���ַ�
//int main() {
	//printf("c:\test\32\test.c");

	// ������ת���ַ�����������ַ����ĳ���
	//printf("%d\n", strlen("c:\test\32\test.c")); // 13

	// �ڴ���ת���ַ�����������ַ�������
	//printf("%c\n", '\32'); // ��8���Ƶ�32ת����10����������ΪASCII��ֵ������Ǹ��ַ�
//	return 0;
//}


// ����if����ʹ��
//int main() {
//	int input = 0;
//	printf("��Ҫ�ú�ѧϰ��?(0/1)\n");
//	scanf("%d", &input);
//	if (input == 1) {
//		printf("�õ�offer\n");
//	}
//	else {
//		printf("�ؼ�������\n");
//	}
//	return 0;
//}

// ����whileѭ������ʹ��
//int main() {
//	int line = 0;
//	while (line < 2000) {
//		printf("�����ô��� %d\n", line);
//		line++;
//    }
//	printf("�õ�offer\n");
//	return 0;
//}

// ����
// ��: f(x, y) = x + y;
// C�����еļӷ� Add(x, y)
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

// ���� --> ����������һ����ͬ���͵ı���
// ������±��Ǵ�0��ʼ,һֱ������ĳ��� - 1Ϊֹ
//int main() {
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	// ������Ԫ�ص��±�
	//printf("%d\n", arr[5]); // 6
	// ��������ÿ��Ԫ�ص��±�
//	int i = 0;
//	for (i = 0; i < 10; i++) {
//		printf("%d ", arr[i]); // 1 2 3 4 5 6 7 8 9 10
//	}
//	return 0;
//}

// ������
//int main() {
	//int a = 5;
	//int b = 2;
	// ����������( + - * / % )
	//int sum = a + b; // 7
	//printf("%d\n", sum);
	//int mod = a % b;
	//printf("%d\n", mod); // 1

    // λ������( & | ^ )
	//int num = a & b; 
	//printf("%d\n", num); // 0
	// 1001
	// 0010

	//int num = a | b;
	//printf("%d\n", num); // 7

	//int num = a ^ b; // ��ͬΪ0, �෴Ϊ1
	//printf("%d\n", num); // 7

	// ��ֵ������( = += -+ *= /= &= |= ^= )
	//num = num + 1  <--> num += 1
	//num = num * 1  <--> num *= 1
	//num = num & 1  <--> num &= 1
	
    // ��Ŀ������
	//sizeof ������������ͳ���
	// ��������Ԫ�صĸ���: sizeof(arr) / sizeof(arr[0])
	// ��������ĳ���
	//int arr[5] = { 0 };
	//printf("%d\n", sizeof(arr)); // 20

//	int arr[] = { 1,2,4,3,6,85,5,7,9,3,8,6,0,1 };
//	printf("%d\n", sizeof(arr) / sizeof(arr[0])); // 14
//
//	return 0;
//}
