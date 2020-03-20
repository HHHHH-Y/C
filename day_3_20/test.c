#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// static �ؼ��ֵ��÷�
void test() {
	static int num = 10; // static�ؼ������ξֲ�����, �ı���������������
	num++;
	printf("%d\n", num); // 11
}
int main() {
	while (1) {
		test();
	}
	return 0;
}

// ָ����÷�
//int main() {
//	int a = 10;
//	printf("%d\n", a); // 10
//	printf("%p\n", &a); // a �ĵ�ַ
//	int* pa = &a; // pa��ָ�����, ���ڴ洢 a �ĵ�ַ
//	*pa = 20; // * - �����ò�����
//	printf("%d\n", a); // 20
//	printf("%p\n", pa);
//	return 0;
//}


// ָ��Ĵ�С(��32λƽ̨��ռ4���ֽ�, ��64λƽ̨��ռ8���ֽ�)
//int main() {
//	printf("%d\n", sizeof(int*)); // 4
//	printf("%d\n", sizeof(char*)); // 4
//	printf("%d\n", sizeof(double*)); // 4
//
//	return 0;
//}

// �Լ�����������--�Զ�������(�ṹ��)
// ����һ���������
// 1, ��������
//struct Book {
//	// ������Ա����
//	char name[30]; // ����
//	double price;  // ���� 
//	char id[30];   // ���
//};

// Ҫ���ʹ�ýṹ��ĳ�Ա��Ϣ, �����·���:
// 1. �ṹ�����.��Ա��
//int main() {
//	// ����һ����
//	struct Book b1 = { "������", 32.65,"ISBN-100909900" };
//	printf("%s\n", b1.name);
//	printf("%lf\n", b1.price);
//	printf("%s\n", b1.id);
//	return 0;
//}

// 2. (�ṹ��ָ��).��Ա��
//int main() {
//	struct Book b2 = { "������", 32.65, "ISBN-100909900" };
//	struct Book* pb = &b2;
//	printf("%s\n", (*pb).name);
//	printf("%lf\n", (*pb).price);
//	printf("%s\n", (*pb).id);
//	return 0;
//}

// 3. �ṹ��ָ��->��Ա��
//int main() {
//	struct Book b2 = { "������", 32.65, "ISBN-100909900" };
//	struct Book* pb = &b2;
//	printf("%s\n", pb->name);
//	printf("%lf\n",pb->price);
//	printf("%s\n", pb->id);
//	return 0;
//}
// ��Щд����ȫ�ȼ�

// C ��������һ���ֺ� : �����ľ���һ�����
//int main() {
//	; // �����
//	return 0;
//}

// if ���(����֧���, ���֧���)
//int main() {
//	int age = 10;
//	if (age < 18) {
//		printf("δ����\n");
//		printf("����̸����\n");
//	} else if (age >= 18 && age < 30) {
//		printf("����\n");
//	} else if (age >= 30 && age < 60) {
//		printf("������\n");
//	} else if (age >= 60 && age < 90) {
//		printf("����\n");
//	} else {
//		printf("�ϲ���\n");
//	}
//	return 0;
//}

// C ���Ը�ʽ����Ҫ��
//int main() {
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//		if (b == 2)
//			printf("hehe\n");
//	else
//		printf("haha\n");
//	return 0;
//}
// �������������Ϊ��������ӡ����haha. 
// else ������� if ����ƥ��
//int main() {
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//		if (b == 2)
//			printf("hehe\n");
//		else
//			printf("haha\n");
//	return 0;
//}

// �Ƚϳ����ͱ�����ֵ�Ƿ����ʱ, �ѳ����������
//int main() {
//	int age = 10;
//	if (5 == age) {
//		printf("hehe\n");
//	}
//	return 0;
//}

// ���1 - 100 ֮�������(���ַ���)
//int main() {
//	int i = 1;
//	while (i <= 100) {
//		if (i % 2 == 1) {
//			printf("%d ", i);
//		}
//		i++;
//	}
//	return 0;
//}
//int main() {
//	int i = 1;
//	while (i <= 100) {
//		printf("%d ", i);
//		i = i + 2;
//	}
//	return 0;
//}

// switch �����÷�
// ����һ������, �Ӷ��ж������ڼ�
//int main() {
//	int day = 0;
//	scanf("%d", &day);
//	switch (day) {  // switch �����( )��Ӧ��Ѱ��һ�����ͱ���(char short int long longlong) 
//	case 1:
//		printf("����һ\n");
//		break;
//	case 2:
//		printf("���ڶ�\n");
//		break;
//	case 3:
//		printf("������\n");
//		break;
//	case 4:
//		printf("������\n");
//		break;
//	case 5:
//		printf("������ \n");
//		break;
//	case 6:
//		printf("������\n");
//		break;
//	case 7:
//		printf("������\n");
//		break;
//	default: // default ΪĬ��ѡ��,�����ܱ�case��������
//		break;
//	}
//	return 0;
//}

// ������1 - 5�������"weekday", ����6 - 7���"weekend"
//int main() {
//	int day = 0;
//	scanf("%d", &day);
//	switch (day) {  // switch �����( )��Ӧ��Ѱ��һ�����ͱ���(char short int long longlong) 
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("weekday \n");
//		break;
//	case 6:
//	case 7:
//		printf("weekend\n");
//		break;
//  default:
//      break;
//	}
//	return 0;
//}


// switch����Ƕ���÷�
//int main() {
//	int n = 1;
//	int m = 2;
//	switch (n) {  // n = 1
//	case 1:
//		m++;  // m = 3
//	case 2:
//		n++;  // n = 2
//	case 3:
//		switch (n) {  // n = 2
//		case 1:
//			n++;
//		case 2:
//			m++; // m = 4
//			n++; // n = 3
//			break; // ������Ƕ��switch���
//		}
//	case 4:
//		m++; // m = 5
//		break; // �����ⲿ��switch���
//	default:
//		break;
//	}
//	printf("m = %d, n = %d\n", m, n);  // m = 5, n = 3
//	return 0;
//}

// ��ѭ��
//int main() {
//	while (1) {
//		printf("hehe\n");
//	}
//	return 0;
//}

// ��ӡ0 - 9
// whileѭ����break���÷�: ������ֹѭ��
//int main() {
//	int i = 0;
//	while (i < 10) {
//		if (i == 5) {
//			break;
//		}
//		printf("%d ", i); // 0 1 2 3 4
//		i++;
//	}
//	return 0;
//}
// whileѭ����continue���÷�: ��������ѭ����ߵĴ���, ֱ��ȥ�жϲ���, ������һ��ѭ��������ж�
//int main() {
//	int i = 0;
//	while (i < 10) {
//		if (i == 5) {
//			continue; // ���ڴ���continue, ����ֱ����������ѭ��,ֱ�ӵ�ѭ�������жϴ�, ������һ��ѭ��
//		}
//		printf("%d ", i); //0 1 2 3 4
//		i++;
//	}
//	return 0;
//}
