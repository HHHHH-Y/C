#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdio.h>
#include <windows.h>
// �۰���ҵ��㷨
//int main() {
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9,10 };
//	int ret = 17;
//	int left = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int right = sz - 1;
//	while (left <= right) {
//		int mid = (left + right) / 2;
//		if (ret > arr[mid]) {
//			left = mid + 1;
//		} else if (ret < arr[mid]) {
//			right = mid - 1;
//		} else {
//			printf("�ҵ���, �±���: %d\n", mid);
//			break;
//		}
//	}
//	if (left > right) {
//		printf("�Ҳ���\n");
//	}
//	return 0;
//}

// ��д����, ��ʾ����ַ��������ƶ�, ���м���
// Welcome to China!!!!!!!!
// ########################
// W######################!
// We####################!!
// ...
// Welcome to China!!!!!!!!
int main() {
	// ���������ַ���
	char arr1[] = "Welcome to China!!!!!!!!";
	char arr2[] = "########################";
	int left = 0;
	int right = strlen(arr1) - 1;    
	// Ҳ����ʹ��sizeof, �������ڳ�ʼ������һ���ַ���, �ַ����Ľ�����־Ϊ'\0'
	// ���, ��ʹ��sizeof��ʱ�������'\0'��, ���Ӧ����sizeof(arr) / sizeof(arr[0]) - 2
	while (left <= right) {
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		Sleep(1000);
		system("cls"); // ������Ļ��Ϣ
		left++;
		right--;
	}
	printf("%s\n", arr2); // ��ӡ�ַ���Ӧ��ʹ�� %s
	return 0;
}


// ����������Լ�������ͷ�ļ�, ��Ӧ����"".  ��: #include "stdio.h"
// ��������õĿ⺯����ͷ�ļ�, ��Ӧ����<>.  ��: #include <stdio.h>

// goto���
// goto������Ƶ����ʹ��, ����ʹ�ý϶�����ҳ���Ա��˼ά, ��������ɺܶ���鷳
// �ڴ󲿷������, goto��䶼���Ա�C�����е���������滻
// goto����ʹ��

// ��while����滻goto���