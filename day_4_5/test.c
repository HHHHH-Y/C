#define _CRT_SECURE_NO_WARNINGS
// Debug�ǿ��Ե��Եİ汾, Release�ǲ����Ե��Եİ汾
// ����ԱҪ��Ҫ���Դ���, ����Ҫ��Debug�汾�н��е���0
#include <stdio.h>
#include <string.h>
#include <assert.h>

//int test(int x, int y) {
//	int z = x + y;
//	return z;
//}
//int main() {
//	int arr[20] = { 0 };
//	int i = 0;
//	int sum = test(2, 3);
//	for (i = 0; i < 10; i++) {
//		arr[i] = i;
//	}
//
//	for (i = 10; i < 20; i++) {
//		arr[i] = i; // �ϵ�
//	}
//	return 0;
//}

//void test2() {
//	printf("hehe\n");
//}
//void test1() {
//	test2();
//}
//void test() {
//	test1();
//}
//
//int main() {
//	test();
//	return 0;
//}

// 1! + 2! + 3! + ... + n!
//int main() {
//	int n = 0;
//	scanf("%d", &n); // 3
//	int i = 0;
//	int ret = 1;
//	int j = 0;
//	int sum = 0;
//	for (j = 1; j <= n; j++) {
//		ret = 1;
//		for (i = 1; i <= j; i++) {
//			ret *= i;   // n!
//		}
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//int main() {
//	int n = 0;
//	scanf("%d", &n); // 3
//	int i = 0;
//	int ret = 1;
//	int j = 0;
//	int sum = 0;
//	for (j = 1; j <= n; j++) {
//		ret *= j;  // n!
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//int main() {
//	int i = 0;
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	for (i = 0; i <= 12; i++) {
//		arr[i] = 0;
//		printf("hehe\n");
//	}
//	return 0;
//}

// ģ��ʵ�ֿ⺯��strcpy
//void my_strcpy(char* dest, char* src) {
//	while (*src != '\0') {
//		*dest = *src;
//		dest++;
//		src++;
//	} 
//	// *src == '\0'
//	*dest = *src;
//}

// �Ż�1:
//void my_strcpy(char* dest, char* src) {
//	while (*src != '\0') {
//		*dest++ = *src++;
//	}
//	// *src == '\0'
//	*dest = *src;
//}
//void my_strcpy(char* dest, char* src) {
//	while (*dest++ = *src++) { // *srcΪ\0ʱ, ��������*dest, ��ʱ, *dest�Ѿ��ı�Ϊ\0,Ȼ���ٽ��������ж�
//		;
//	}
//}

// �Ż�2:
// Ϊ�˷�ֹ���ݹ�����ָ����Ч, Ӧ�ü�����������, ���ƴ��ݹ�����ָ��Ϊ��Ч��ָ��
//void my_strcpy(char* dest, char* src) {
//	// ���ַ���ֻ�ǹ��������, ���ǲ�û��ָ����������
//	if ((dest != NULL) && (src != NULL)) {
//		while (*dest++ = *src++) {
//			;
//		}
//	}
//}
//void my_strcpy(char* dest, char* src) {
//	assert(dest != NULL); // ����
//	assert(src != NULL); // ����
//		while (*dest++ = *src++) { 
//			;
//		}
//}

// const����ָ��
// 1. const���� * �����, ������ָ����ָ�������(*p), ʹ��ָ����ָ������ݲ�����ͨ��p���иı���
// 2. const���� * ���ұ�, ������ָ���������(p), ʹ��ָ����������ܱ��޸�
//int main() {
//	const int num = 10;
//	int n = 100;
//	printf("%d\n", num);
//	//const int* p = &num; // const����*���, ������*p, ���ǲ�Ӱ��p����
//	//p = &n; // p���Ա��޸�
//	//*p = 20;
//	int* const p = &num; // const����*�ұ�, ������p����, ���ǲ���Ӱ��*p
//	//*p = 20; 
//	p = &n;
//	printf("%d\n", num);
//	return 0;
//}

// �Ż�3:
// arr2�ڽ��д��ݺ�, ���ʹ�����ݲ��ٷ����Ķ�
//void my_strcpy(char* dest, const char* src) {
//	assert(dest != NULL); // ����
//	assert(src != NULL); // ����
//	while (*dest++ = *src++) { // *srcΪ\0ʱ, ��������*dest, ��ʱ, *dest�Ѿ��ı�Ϊ\0,Ȼ���ٽ��������ж�
//		;
//	}
//}
//int main() {
//	char arr1[] = "##########";
//	char arr2[] = "abcdef";
//	my_strcpy(arr1, arr2); // ��arr2�����ݿ�����arr1��
//	printf("%s\n", arr1);
//	return 0;
//}

// �Ż�4:
//char*  my_strcpy(char* dest, const char* src) {
//	assert(dest != NULL); // ����
//	assert(src != NULL); // ����
//	char* ret = dest; // ��dest�ĵ�ַ����ret��
//	// ��srcָ����ַ���������destָ��Ŀռ���, ����'\0'
//	while (*dest++ = *src++) {  
//		;
//	}
//	return ret;
//}
//
//int main() {
//	char arr1[] = "##########"; 
//	char arr2[] = "abcdef"; 
//	printf("%s\n", my_strcpy(arr1, arr2)); // ��������ʽ����
//	return 0;
//}
//
// ģ��ʵ�ֿ⺯��strlen
//int main() {
//	char str[] = "abcdef";
//	int len = strlen(str);
//	printf("%d\n", len);
//	return 0;
//}

//int my_strlen(const char* str) {
//	assert(str != NULL);
//	int count = 0;
//	while (*str != '\0') {
//		count++;
//		str++;
//	}
//	return count;
//}
//int main() {
//	char str[] = "abcdef";
//	int len = my_strlen(str);
//	printf("%d\n", len);
//	return 0;
//}

// ����һ����������
// ʵ��һ������, �����������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣�����ż��λ������ĺ�벿
void Change(int arr1[], int arr2[], int sz) {
	int left = 0;
	int right = sz - 1;
	int i = 0; 
	while (left < right) {
		for (i = 0; i < sz; i++) {
			if (arr1[i] % 2 == 1) {
				arr2[left] = arr1[i];
				left++;
			} else {
				arr2[right] = arr1[i];
				right--;
			}
		}
	}
}
int main() {
	int arr1[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int arr2[10] = { 0 };
	int sz = sizeof(arr1) / sizeof(arr1[0]);
	Change(arr1, arr2, sz);
	int i = 0;
	for (i = 0; i < sz; i++) {
		printf("%d ", arr2[i]);
	}
	return 0;
}
// �ڱ�д����ʱ, ���Ǿ����������Ĵ���. ͨ�����ǻ�����⼸�����͵Ĵ���
// 1. �������/�﷨����
//    ֱ�ӿ�������ʾ��Ϣ(˫��),���ڽ��
// 2. �����ʹ���
//    ��������ʾ��Ϣ, ��Ҫ�ڴ������ҵ�������Ϣ�еı�ʶ��, Ȼ��λ��������. һ���Ǳ�ʶ���������ڻ���ƴд����
// 3. ����ʱ����
//    ��������, �𲽶�λ����
