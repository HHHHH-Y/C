#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <math.h>
//int main()
//{
//	int a = 0, b = 0;
//	for (a = 1, b = 1; a <= 100; a++)
//	{
//		if (b >= 20) break;
//		if (b % 3 == 1)
//		{
//			b = b + 3;
//			continue;
//		}
//		b = b - 5;
//	}
//	printf("%d\n", a);
//	return 0;
//}

// ��д������һ�� 1�� 100 �����������г��ֶ��ٸ�����9
//int main() {
//	int i = 1;
//	int count = 0;
//	for (; i <= 100; i++) {
//		if (i % 10 == 9) {
//			count++;
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}

// ����1/1-1/2+1/3-1/4+1/5 ���� + 1/99 - 1/100 ��ֵ����ӡ�����
int main() {
	int n = 1;
	double sum = 0.0;
	double num = 0.0;
	for (n = 1; n <= 100; n++) {
			num = pow(-1.0, (n - 1.0));  // ��C������, ȡ�η��ĺ���Ϊ double pow(doublex, double y), ͷ�ļ�Ϊ<math.h>
			sum = sum + (num * (1.0 / n)); // ֻҪ��һ�����Ǹ�����, ��ô�������������Ǹ�����
	}
	printf("%lf\n", sum);
	return 0;
}

// ��10 �����������ֵ
//int main() {
//	int arr[10] = { 0 };
//	int i = 0;
//	int max = arr[0];
//	for (i = 0; i < 10; i++) {  // ����10������
//		scanf("%d", &arr[i]);
//		if (max < arr[i]) {
//			max = arr[i];
//		}
//	}
//	printf("max = %d\n", max);
//	return 0;
//}

// ����Ļ�����9*9�˷��ھ���
//int main() {
//	int i = 1;
//	int j = 1;
//	int mul = 0;
//	for (i = 1; i <= 9; i++) {
//		for (j = i; j <= 9; j++) {
//			mul = i * j;
//			printf("%d*%d=%d ", i, j, mul);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main() {
//	int i = 0;
//	for (i = 0; i < 10; i++) {
//		if (i = 5) {
//			printf("%d ", i); // 5 ��ѭ��
//		}
//	}
//	return 0;
//}

//int func(int a) {  // a = 1
//    int b;
//    switch (a) {
//    case 1: b = 30;
//    case 2: b = 20;
//    case 3: b = 16;
//    default: b = 0;
//    }
//    return b;
//}
//int main() {
//    int ret = func(1);
//    printf("ret = %d\n", ret); // 0
//    return 0;
//}

//int main() {
//	int x = 3;
//	int y = 3;
//	switch (x % 2) {  // 1
//	case 1:
//		switch (y){ // 3
//		case 0:
//			printf("first");
//		case 1:
//			printf("second");
//			break;
//		default: printf("hello"); // hello
//		}
//	case 2:
//		printf("third"); // third
//	}
//	return 0;
//}

// д���뽫���������Ӵ�С���
// 10 20 30
//int main() {
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c); // ������������
//	if (a < b) {
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	// 20 10 30
//	if (a < c) {
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	// 30 10 20
//	if (b < c) {
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}

// дһ�������ӡ1-100֮������3�ı���������
//int main() {
//	int i = 1;
//	for (; i <= 100; i++) {
//		if (i % 3 == 0) {
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

// ���������������������������Լ��
// ���Լ���������ܳ������н�С���Ǹ���
// ����1(ʹ��ѭ��, ������Ѱ�����Լ��)
//int main() {
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n); // ���� m �� n ��ֵ
//	// Ѱ�����н�С����
//	int min = (m > n ? n : m);
//	while (1) {
//		if (m % min == 0 && n % min == 0) {
//			break;
//		}
//		min--;
//	}
//	printf("���Լ��Ϊ: %d\n", min);
//	return 0;
//}
// ����2: շת�����
//int main() {
//	int m = 24;
//	int n = 18;
//	int r = 0;
//	while (r = m % n) {  // �� r == 0 �� ʱ������
//		m = n;
//		n = r;
//	}
//	printf("���Լ��Ϊ: %d\n", n);  
//	return 0;
//}

// ��ӡ1000�굽2000��֮�������
//int main() {
//	int year = 1000;
//	int count = 0;
//	while (year <= 2000) {
//		if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
//			printf("%d ", year);
//			count++;
//		}
//		year++;
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}

// дһ�����룺��ӡ100~200֮�������(����1������������, ���ܱ�����������)
// �Գ���
// ����һ:
//int main() {
//	int i = 100;
//	int j = 2; // �Գ�����(2 -> ����-1)
//	int count = 0;
//	while (i <= 200) { // 100 �� 200 ֮�������
//		for (j = 2; j < i; j++) {
//			if (i % j == 0) {  // ˵��iһ����������
//				break;
//			}
//		}
//		
//		// ����ѭ�����������: 1.��������; 2. �ж���������֮��ȷ��������
//		// �жϳ������������
//		if (j == i) {
//			printf("%d ", i);
//			count++;
//		}
//		i++;
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}
// ������:(ÿ���������Ա�ʾ��: num = a * b; �����ܻ���һ������ <= num �Ŀ�ƽ����)
//int main() {
//	int i = 100;
//	int j = 2;
//	int count = 0;
//	while (i <= 200) {
//		for (j = 2; j <= sqrt(i); j++) {  // ��C������,��ƽ������Ϊ sqrt(), ������ͷ�ļ�Ϊ <math.h>
//			if (i % j == 0) {
//				break;
//			}
//		}
//		if (j > sqrt(i)) {
//			printf("%d ", i);
//			count++;
//		}
//		i++;
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}
// ������:(ż������������)
//int main() {
//	int i = 101;
//	int j = 2;
//	int count = 0;
//	while (i <= 200) {
//		for (j = 2; j <= sqrt(i); j++) {  // ��C������,��ƽ������Ϊ sqrt(), ������ͷ�ļ�Ϊ <math.h>
//			if (i % j == 0) {
//				break;
//			}
//		}
//		if (j > sqrt(i)) {
//			printf("%d ", i);
//			count++;
//		}
//		i += 2;
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}

// ��������ʼ�������
// �޷��ƿر�����ֵ, Ҳ�ò���������Ԥ�ڵ�ֵ
//int main() {
//	int a;
//	printf("%d\n", a);
//	a++;
//	return 0;
//}

//int main() {
//	int ch = 0;
//	while ((ch = getchar()) != EOF) {  // EOF �ļ�������־, һ������ļ�ĩβ
//		putchar(ch);
//	}
//	return 0;
//}

// getchar()  putchar() ��Ӧ��
// getchar()-->��ȡ�ַ�,  putchar()-->��ӡ�ַ�
// �ڽ��м�������ʱ, ��Ҫ�ûس�(\n)ʱ, ���ܴ�������ȥ��ȡ�ַ�
// ��scanf�õ���Ҫ��ֵ֮��, �������뻺����ʣ��һ��\n,
// ��ʱ, getchar()�������뻺�����в���Ϊ��, �ͻ��Զ���ȡ�������е�����, ��������֮����ж�
//int main() {
//	int ch = 0;
//	char input[20] = { 0 }; // ����һ���ַ�������, ��������ַ���
//	printf("����������: \n");
//	scanf("%s", input);  // 123456
//	printf("��ȷ������(Y/N): ");
//	ch = getchar();
//	if (ch == 'Y') {
//		printf("ȷ�ϳɹ�!\n");
//	} else {
//		printf("ȷ��ʧ��!\n");
//	}
//	return 0;
//}

// ��ʱ,����Ҫһ��getchar()���������е�\n���
//int main() {
//	int ch = 0;
//	char input[20] = { 0 }; // ����һ���ַ�������, ��������ַ���
//	printf("����������: \n");
//	scanf("%s", input);  // 123456
//	printf("��ȷ������(Y/N): "); // Y �� N �����ַ�
//	getchar();
//	ch = getchar();
//	if (ch == 'Y') {
//		printf("ȷ�ϳɹ�!\n");
//	} else {
//		printf("ȷ��ʧ��!\n");
//	}
//	return 0;
//}

// ����ʱ������� 123456 ABCDE\n
// scanf�ڶ�ȡ���ո�ʱ�ͻ�ֹͣ, ���Ǻ��滹�кܶ��ַ�, ��ʱ����gerchar()��ȡ�ַ���Ȼ���鷳
// ���ʱ��, ��õķ�ʽ����������뻺����
//int main() {
//	int ch = 0;
//	char input[20] = { 0 }; // ����һ���ַ�������, ��������ַ���
//	printf("����������: \n");
//	scanf("%s", input);  // 123456
//	printf("��ȷ������(Y/N): "); // Y �� N �����ַ�
//	// ��ջ�����
//	while ((ch = getchar()) != '\n') {
//		;
//	}
//	ch = getchar();
//	if (ch == 'Y') {
//		printf("ȷ�ϳɹ�!\n");
//	} else {
//		printf("ȷ��ʧ��!\n");
//	}
//	return 0;
//}


// whileѭ���Ĳ���
//int mian() {
//	int a = 0; // ��ʼ��
//	while (a < 10) { // �����ж�
//		a++; // ����
//	}
//	return 0;
//}
// ��Ȼ, while�����, ��ʼ�����, �����ж����,������䶼�Ƿֿ���
// һ����������������, �����׺��Ի�����©

// forѭ���Ĳ���
//int main() {
//	int i = 0;
//	for (i = 0; i < 10; i++) {
//		printf("hehe\n");
//	}
//	return 0;
//}
// �ɴ˿ɼ�,for��������Ҫ���Ǽ��з��õ�, ��������©, ���, ��ѭ����, ���Ƽ�for��� 

// for�����, ��ʼ�����, �����ж����, ������䶼�ǿ���ʡ�Ե�
// ���жϲ��ֱ�ʡ��ʱ��ζ���жϲ��ֺ�Ϊ��
//int main() {
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int i = 0;
//	for (; i < 10; i++) {
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//int main() {
//	int i = 0;
//	for (;;) {
//		printf("hehe\n");
//	}
//	return 0;
//}

//for�����break��continue���÷�
//��forѭ�������, break������ֹѭ��
//int main() {
//	int i = 0;
//	for (i = 0; i < 10; i++) {
//		if (i == 5) {
//			break;
//		}
//		printf("%d ", i); // 0 1 2 3 4
//	}
//	return 0;
//}
// forѭ������е�continue������������ѭ��, ֱ�ӵ���������
//int main() {
//	int i = 0;
//	for (i = 0; i < 10; i++) {
//		if (i == 5) {
//			continue;
//		}
//		printf("%d ", i); // 0 1 2 3 4 6 7 8 9 
//	}
//	return 0;
//}

// do ... while ���
// do ... while �������ѭ�� 1 ��
//int main() {
//	int i = 0;
//	do {
//		printf("%d ", i); // 0 1 2 3 4 5 6 7 8 9
//		i++;
//	}while (i < 10);
//	return 0;
//}

// do ... while ����е�break��continue���÷�
// do ... while ����е�break��continue���÷���while ����е��÷���ͬ
//int main() {
//	int i = 0;
//	do {
//		if (i == 5) {
//			break;
//		}
//		printf("%d ", i); // 0 1 2 3 4 
//		i++;
//	} while (i < 10);
//	return 0;
//}
//int main() {
//	int i = 0;
//	do {
//		if (i == 5) {
//			continue;
//		}
//		printf("%d ", i); // 5 �����һ����ѭ��
//		i++;
//	} while (i < 10);
//	return 0;
//}

// ���� n �Ľ׳�
// 5 �Ľ׳�: 5 * 4 * 3 * 2 * 1
//int main() {
//	int n = 0; 
//	scanf("%d", &n); // ����һ��ֵ
//	int i = 1;
//	int ret = 1;
//	for (i = 1; i <= n; i++) {
//		ret = ret * i;
//	}
//	printf("ret = %d\n", ret);
//	return 0;
//}

// ���� 1! + 2! + 3! + ... + 10!
// 1! + 2! + 3! = 1 + 2 + 6 = 9
//int main() {
//	// �����ÿ�����Ľ׳�, Ȼ�����
//	int i = 1;
//	int sum = 0;
//	int ret = 1;
//	for (i = 1; i <= 10; i++) {
//		ret = ret * i; // �����ÿ�����Ľ׳�
//		sum = sum + ret;
//	}
//	printf("sum = %d\n", sum);
//	return 0;
//}



