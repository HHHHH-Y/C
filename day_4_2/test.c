#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <math.h>
// ʹ��ָ���ӡ��������
// дһ��������ӡarr��������ݣ���ʹ�������±꣬ʹ��ָ��.arr��һ������һά����
//void Print(int* p, int sz) {
//	int i = 0;
//	for (i = 0; i < sz; i++) {
//		printf("%d ", *(p + i));
//	}
//}
//int main() {
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int* p = &arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Print(p, sz);
//	return 0;
//}

// �ַ�������
// дһ����������������һ���ַ���������
//void InputString(char str[]) {
//	scanf("%[^\n]", str); // %[] --> һ���ַ���, ����ɨ���ַ�����
//}
//void Reverse(char str[], int len) {
//	int left = 0;
//	int right = len - 1;
//	while (left < right) {
//		char tmp = str[left];
//		str[left] = str[right];
//		str[right] = tmp;
//		left++;
//		right--;
//	}
//}
//int main() {
//	char str[100];
//	InputString(str);
//	int len = strlen(str);
//	Reverse(str, len);
//	printf("%s\n", str);
//	return 0;
//}

// �������
// ��Sn=a+aa+aaa+aaaa+aaaaa��ǰ5��֮�ͣ�����a��һ������
// ���磺2 + 22 + 222 + 2222 + 22222
//int main() {
//	int i = 0;
//	int n = 0;
//	scanf("%d%d", &i, &n);
//	int j = 0;
//	int k = 0;
//	int sum = 0;
//	for (j = 0; j < n; j++) {
//		k = k * 10 + i;
//		sum = sum + k;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

// ��ӡˮ�ɻ���
// ���0��100000֮������С�ˮ�ɻ����������
//��ˮ�ɻ�������ָһ��nλ�������λ���ֵ�n�η�֮��ǡ�õ��ڸ�������
// ��:153��1 ^ 3��5 ^ 3��3 ^ 3����153��һ����ˮ�ɻ�����
//int main() {
//	int i = 0;
//	for (i = 0; i < 100000; i++) {
//		// �ж�������м�λ
//		int count = 1;
//		int tmp = i;
//		int sum = 0;
//		while (tmp / 10) {
//			count++;
//			tmp /= 10;
//		}
//		// ����nλ���������ֵ�n�η���
//		tmp = i;
//		while (tmp) {
//			sum = sum + pow((tmp % 10), count);
//			tmp /= 10;
//		}
//		// �����Ƿ�Ϊˮ�ɻ���
//		if (sum == i) {
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

// ��C��������Ļ���������ͼ����
 //      *              // ��ӡ6���ո�, 1��*
 //     ***             // ��ӡ5���ո�, 3��*
 //    *****            // ��ӡ4���ո�, 5��*
 //   *******           // ...
 //  *********
 // ***********         // ��ӡ1���ո�, 11��*
 //*************        // ����ӡ�ո�, ��ӡ13��*
 // ***********         // ��ӡ1���ո�, 11��*
 //  *********          // ��ӡ2���ո�, 9��*
 //   *******           // ��ӡ3���ո�, 7��*
 //    *****            // ...
 //     ***
 //      *              // ��ӡ6���ո�, 1��*
int main() {
	int line = 0;
	scanf("%d", &line); // 7
	// ��ӡ�ϰ벿��
	int i = 0;
	int j = 0;
	for (i = 0; i < line; i++) { // 0 - 6 ��
		// ��ӡһ��(i = 0)
		// ��ӡ�ո�
		for (j = 0; j < line - 1 - i; j++) {
			printf(" ");
		}
		// ��ӡ*
		for (j = 0; j < 2 * i + 1; j++) {
			printf("*");
		}
		printf("\n");
	}
	// ��ӡ�°벿��
	for (i = 0; i < line - 1; i++) {  // 0 - 5��
		// ��ӡһ��
		// ��ӡ�ո�
		for (j = 0; j <= i; j++) {
			printf(" ");
		}
		// ��ӡ*
		for (j = 0; j < 2 * (line - 1 - i) - 1; j++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}