#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
// ��ӡһ������ÿһλ
// �ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ
 //Print(123)
 //Print(12) + 3
 //Print(1) + 2 + 3
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
//// �ǵݹ�
//int fac(int n) {
//	int i = 0;
//	int mul = 1;
//	for (i = 1; i <= n; i++) {
//		mul = mul * i;
//	}
//	return mul;
//}
//int main() {
//	int num = 0;
//	scanf("%d", &num);
//	int ret = fac(num);
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
// strlen ���������ַ����ĳ��ȵ�
// �ǵݹ�
//int Strlen(char* p) {
//	int count = 0;
//	while (*p != '\0') {
//		count++;
//		p++; // ��ַ++
//	} 
//	return count;
//}
//int main() {
//	char arr[] = "kris"; // ���ַ����ĳ���Ϊ3
//	int len = Strlen(arr); // ���鴫��ʱ, ����ȥ������Ԫ�صĵ�ַ
//	printf("len = %d\n", len);
//	return 0;
//}
// �ݹ�
//int Strlen(char* p) {
//	if (*p != '\0') {
//		return 1 + Strlen(p + 1);
//	} else {
//		return 0;
//	}
//}
//int main() {
//	char arr[] = "kris";
//	int len = Strlen(arr);
//	printf("len = %d\n", len);
//	return 0;
//}

// �ַ�������
// ��дһ������ reverse_string(char * string)���ݹ�ʵ�֣�
// ʵ�֣��������ַ����е��ַ���������
// Ҫ�󣺲���ʹ��C�������е��ַ�����������
void reverse_string(char* arr) {
    int len = strlen(arr);
    char tmp = *arr;  // ����һ����ʱ�����������Ԫ��
    *arr = *(arr + len - 1); // �����һ���ַ�ȥ�������ַ�
    *(arr + len - 1) = '\0';  // �����һ���ַ���� \0
    if (strlen(arr + 1) >= 2) {
        reverse_string(arr + 1);
    } else {
        *(arr + len - 1) = tmp; // ��tmp�д�ŵ�ֵ�Ž����һ���ַ��ĵط�
    }
}
int main() {
    char arr[] = "abcd";
    reverse_string(arr);
    printf("%s\n", arr);
    return 0;
}


// ����һ������ÿλ֮�ͣ��ݹ�ʵ�֣�
// дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮��
// ���磬����DigitSum(1729)����Ӧ�÷���1 + 7 + 2 + 9�����ĺ���19
// ���룺1729�������19
//int DigitSum(int n) {
//		if (n > 9) {
//			DigitSum(n / 10);
//			return (DigitSum(n / 10) + n % 10);
//		} else {
//			return (n % 10);
//		}
//}
//int main() {
//	int num = 0;
//	scanf("%d", &num);
//	int sum = DigitSum(num);
//	printf("sum = %d\n", sum);
//	return 0;
//}

// �ݹ�ʵ��n��k�η�
// ��дһ������ʵ��n��k�η���ʹ�õݹ�ʵ��
// n^k = n^(k - 1) * n
//int times(int x, int y) {
//    if (y == 0) {
//        return 1;
//    }else if (y > 1) {
//        return x * times(x, y - 1);
//    } else {
//        return x;
//    }
//}
//int main() {
//    int n = 0;
//    int k = 0;
//    scanf("%d%d", &n, &k);
//    int ret = times(n, k);
//    printf("ret = %d\n", ret);
//    return 0;
//}

// ����쳲�������
// 1 1 2 3 5 8 13 21 34 ...
// �ݹ�ͷǵݹ�ֱ�ʵ�����n��쳲�������
// ���磺
// ���룺5  �����5
// ���룺10�� �����55
// ���룺2�� �����1
// �ݹ�
//int Fib(int n) {
//    if (n <= 2) {
//        return 1;
//    } else {
//        return Fib(n - 1) + Fib(n - 2);
//    }
//}
//int main() {
//    int n = 0;
//    scanf("%d", &n);
//    int ret = Fib(n);
//    printf("ret = %d\n", ret);
//    return 0;
//}
//// �ǵݹ�
//int Fib(int n) {
//    int a = 1;
//    int b = 1;
//    int c = 0;
//    while (n > 2) {
//        c = a + b;
//        a = b;
//        b = c;
//        n--;
//    }
//    return c;
//}
//int main() {
//    int n = 0;
//    scanf("%d", &n);
//    int ret = Fib(n);
//    printf("ret = %d\n", ret);
//    return 0;
//}