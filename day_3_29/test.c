#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// ���������������в�ͬλ�ĸ���
// ���ʵ�֣�����int��32λ������m��n�Ķ����Ʊ���У��ж��ٸ�λ(bit)��ͬ�� 
// ��������:
// 1999 2299
// ������� : 7
int main() {
	int m = 0;
	int n = 0;
	scanf("%d%d", &m, &n);
	 //������������^(���: ��ͬΪ0, �෴Ϊ1), Ȼ������������1�ĸ���
	int num = m ^ n;
	int count = 0;
	int i = 0;
	for (i = 0; i < 32; i++) {
		if (((num >> i) % 2) == 1) {
			count++;
		}
	}
	printf("count = %d\n", count);
	return 0;
}

// ����������ʱ������������������������
//int main() {
//	int a = 10;
//	int b = 20;
//	printf("a = %d b = %d\n", a, b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("a = %d b = %d\n", a, b);
//	return 0;
//}

// ͳ�ƶ�������1�ĸ���
// дһ���������ز����������� 1 �ĸ�����
// ���磺 15    0000 1111    4 �� 1
//int  NumberOf1(int n) {
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++) {
//		if (((n >> i) & 1) == 1) {
//			count++;
//		}
//	}
//	return count;
//}
//int main() {
//	int num = 0;
//	scanf("%d", &num);
//	int ret = NumberOf1(num);
//	printf("ret = %d\n", ret);
//	return 0;
//}

// ��ӡ���������Ƶ�����λ��ż��λ
// ��ȡһ���������������������е�ż��λ������λ���ֱ��ӡ������������
// ��: 1999
// 00000000000000000000011111001111
// ����λ: 0000000000111011
// ż��λ: 0000000000011011
//void Odd_bit(int n) {
//	int i = 30;
//	int j = 0;
//	for (i = 30; i >= 0; i -= 2) {
//		j = ((n >> i) & 1);
//		printf("%d", j);
//	}
//	printf("\n");
//}
//void Even_bit(int n) {
//	int i = 31;
//	int j = 0;
//	for (i = 31; i > 0; i -= 2) {
//		j = ((n >> i) & 1);
//		printf("%d", j);
//	}
//	printf("\n");
//}
//int main() {
//	int num = 0;
//	scanf("%d", &num);
//	Odd_bit(num);
//	Even_bit(num);
//	return 0;
//}