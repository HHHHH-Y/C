#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// ��ӡһ������ÿһλ
// �ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ
// Print(123)
// Print(12) + 3
// Print(1) + 2 + 3
//void Print(int n) {   // ��ӡ n ��ÿһλ����
//	if (n > 9) {
//		Print(n / 10); // ��ӡ n/10 ��ÿһλ����
//	}
//	printf("%d ", n % 10); 
//}
//int main() {
//	int num = 0;
//	scanf("%d", &num);
//	Print(num); 
//	return 0;
//}

// ��׳�
// �ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳�
// n! = n*(n-1)*(n-2)*...*2*1
// �ǵݹ�
//int main() {
//	int num = 0;
//	scanf("%d", &num);
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= num; i++) {
//		ret = ret * i;
//	}
//	printf("ret = %d\n", ret);
//	return 0;
//}
// �ݹ�
// n! = (n-1)! * n
//int fac(int n) {  
//	if (n > 1) {
//		return (n * fac(n - 1));
//	} else {
//		return 1;
//	}
//}
//int main() {
//	int num = 0;
//	scanf("%d", &num);
//	int ret = fac(num);
//	printf("ret = %d\n", ret);
//	return 0;
//}

// strlen��ģ��
// �ݹ�ͷǵݹ�ֱ�ʵ��strlen
