#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// strlen�����ֱ�ʾ�÷�

// ����һ: ֱ�ӵ��ÿ⺯���е�strlen����
//#include <string.h>
//int main() {
//	char str[] = "abcdef";
//	int len = strlen(str);
//	printf("%d\n", len);
//	return 0;
//}

// ������: ���ü������ķ�ʽ
//int my_strlen(char* str) {
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

// ����3: �ݹ�
//int my_strlen(char* str) {
//	if (*str != '\0') {
//		return 1 + my_strlen(str+1);
//	} else {
//		return 0;
//	}
//}
//int main() {
//	char str[] = "abcdef";
//	int len = my_strlen(str);
//	printf("%d\n", len);
//	return 0;
//}

// ����4: ָ�� - ָ��
int my_strlen(char* str) {
	char* start = str;
	char* end = str;
	while (*end != '\0') {
		end++;
	}
	return end - start;
}
int main() {
	char str[] = "abcdef";
	int len = my_strlen(str);
	printf("%d\n", len);
	return 0;
}
