#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// ð������
// ʵ��һ�������������ð������
// ��10 9 8 7 6 5 4 3 2 1����ð������, �ų�1 2 3 4 5 6 7 8 9 10
//void BubbleSort(int arr[], int sz) {
//	// ȷ���ܹ��ж�����ð������
//	int i = 0;
//	for (i = 0; i < sz - 1; i++) {
//		// һ��ð������
//		int flag = 1;
//		int j = 0;
//		// һ��ð������Ҫ�ȽϵĴ���
//		for (j = 0; j <= sz - 1 - i ; j++) {
//			if (arr[j] > arr[j + 1]) {
//				// ��������Ԫ��
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;
//			}
//		}
//		if (flag == 1) {
//			break;
//		}
//	}
//}
//void PrintArr(int arr[], int sz) {
//	int i = 0;
//	for (i = 0; i < sz; i++) {
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//int main() {
//	int arr[] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
//	int sz = sizeof(arr) / sizeof(arr[0]); // �����е�Ԫ�ظ���
//	PrintArr(arr, sz);
//	BubbleSort(arr, sz);
//	PrintArr(arr, sz);
//	return 0;
//}

// �������
// ����һ���������飬��ɶ�����Ĳ���
// ʵ�ֺ���init() ��ʼ������Ϊȫ0
// ʵ��print()  ��ӡ�����ÿ��Ԫ��
// ʵ��reverse()  �����������Ԫ�ص�����
// Ҫ���Լ�������Ϻ����Ĳ���������ֵ
//void Init(int arr[]) {
//	
//}
//void Init(int arr1[], int sz) {
//	int i = 0;
//	for (i = 0; i <= sz - 1; i++) {
//		arr1[i] = 0;
//	}
//}
//void Print(int arr[], int sz) {
//	int i = 0;
//	for (i = 0; i <= sz - 1; i++) {
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//void Reverse(int arr[], int sz) {
//	int left = 0;
//	int right = sz - 1;
//	while (left < right) {
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//int main() {
//	int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//	//int arr[10];
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//Init(arr, sz);
//	Print(arr, sz);
//	Reverse(arr, sz);
//	Print(arr, sz);
//	return 0;
//}

// ��������
// ������A�е����ݺ�����B�е����ݽ��н���(����һ����)
void Exchange(int arrA[], int arrB[], int sz) {
	int i = 0;
	for (i = 0; i < sz; i++) {
		int tmp = arrA[i];
		arrA[i] = arrB[i];
		arrB[i] = tmp;
	}
}
void Print(int arr[], int sz) {
	int i = 0;
	for (i = 0; i < sz; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}
int main() {
	int arrA[4] = { 1, 2, 3, 4 };
	int arrB[4] = { 5, 6, 7, 8 };
	int sz = sizeof(arrA) / sizeof(arrA[0]);
	Exchange(arrA, arrB, sz);
	Print(arrA, sz);
	Print(arrB, sz);
	return 0;
}