#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
// �ݹ�
// �ݹ�����Լ������Լ�
//int main() {  // ��������ѭ����
//	main();
//	return 0;
//}  

// ����Ĵ����ͳ�ʼ��
// һά����Ĵ���
// ��ʽ: Ԫ������  ������ [����Ĵ�С --> ����]
//int n = 10;
//char arr[100];
//int arr[10];
//int arr[20 + 5];

// һά����ĳ�ʼ��
//int main() {
	//int arr[100] = { 0 };
	//int arr[10] = { 1, 2, 3 }; // ����Ĳ���ȫ��ʼ�� - ֻ��ʼ����ǰ����Ԫ��, �����Ԫ��ȫ��Ĭ�ϳ�ʼ��Ϊ0
	//int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 }; // �������ȫ��ʼ��
	// �����[]��û��ָ��Ԫ��, �������Ĵ�С��Ҫ���ݳ�ʼ��������������
	//int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };  
	//char arr1[] = { 'a', 'b', 'c' };  // ����Ҳ���Դ���ַ�
	//char arr1[20] = { 'a', 98, 'c' }; // ���ַ�������, Ҳ���Դ������
	//char arr2[] = "kris"; // �ַ��������������ʾ�ַ���
	// strlen �������������ַ����ĳ���
	//printf("%d\n", strlen(arr1)); // ���ֵ
	//printf("%d\n", strlen(arr2)); // 4
	// sizeof ������������Ĵ�С
	//printf("%d\n", sizeof(arr1)); // 3
	//printf("%d\n", sizeof(arr2)); // 5
	//return 0;
//}

// ������±��Ǵ�0��ʼ��
// ��ӡ�����е�ÿһ��Ԫ��
//int main() {
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int i = 0;
//	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

// ��ӡ������ÿһ��Ԫ�صĵ�ַ
//int main() {
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int i = 0;
//	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
//		printf("&arr[%d] = %p\n", i, &arr[i]);
//	}
//	return 0;
//}

// �õ�ַ��Ѱ�������е�ÿһ��Ԫ��
int main() {
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int i = 0;
	int* p = arr;
	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
		printf("%d ", *p);
		p++;
	}
	return 0;
}

// ��λ����Ĵ���
//int arr[3][4];

// ��ά����ĳ�ʼ��
//int arr[3][4] = { 1, 2, 3, 4, 5 }; // ��������
//int arr[][4] = { {1,2}, {3, 4} };