#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <Windows.h>

// �ж�һ�����Ƿ�Ϊ����
// ( 0 ��һ��ż�� )
//int main() {
//	int num = 0;
//	scanf("%d", &num); // ����һ����
//	if (num % 2 != 0) {
//		printf("����һ������\n");
//	}
//	else {
//		printf("�ⲻ��һ������\n");
//	}
//	return 0;
//}

// ��� 1 - 100 ֮�������
//int main() {
//	int num = 1;
//	while (num <= 100) {
//		if (num % 2 != 0) {
//			printf("%d\n", num);
//		}
//		num++;
//	} // �� num > 100 ʱ����ѭ��
//	return 0;
//}

// ���� n �Ľ׳�
//int main() {
//	int i = 1;
//	int n = 0;
//	int acc = 1;
//	scanf("%d", &n); // ����һ������
//	while (i <= n) {
//		acc *= i; // acc = acc * i;
//		i++;
//	} // �� i > n ��ʱ������ѭ��
//	printf("acc = %d\n", acc);
//	return 0;
//}

// ����1! + 2! + 3! +  ... + 10!
// �ȼ�������еĽ׳�, Ȼ�����
//int main() {
//	int acc = 1;
//	int i = 1;
//	int sum = 0;
//	while (i <= 10) {
//		acc *= i;
//		sum = sum + acc;
//		i++;
//	}
//	printf("sum = %d\n", sum);
//	return 0;
//}

// ��д����, ��ʾ����ַ��������ƶ�, ���м���
 //***********
 //H*********d
 //He*******ld
 //...
 //Hello,World
// ��Windows����ϵͳ��,sleep()������Ҫһ���Ժ���Ϊ��λ�Ĳ�������������ʱ��(1s = 1000ms)
// Sleep��������ʹ���������������ߣ�ʹ����һ��ʱ���ڴ��ڷǻ״̬
int main() {
	char str1[] = "Hello,World";
	char str2[] = "***********";
	int left = 0;
	int right = strlen(str1) - 1;
	while (left <= right) {
		Sleep(1000);
		str2[left] = str1[left];
		str2[right] = str1[right];
		left++;
		right--;
		printf("%s\n", str2);
	} // �� left > right ��ʱ��, ����ѭ��
	return 0;
}

