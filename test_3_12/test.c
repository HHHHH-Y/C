#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//int main() {
//	printf("Hello, bit!\n"); //��ӡ����-��������Ļ�ϴ�ӡ����-���
//
//	return 0;
//}


// main����-������-��������
// main�������ҽ���һ��
//int main() {
//	printf("hehe\n");
//	printf("hehe\n");
//	printf("hehe\n");
//	printf("hehe\n");
//	printf("hehe\n");
//
//	return 0;
//}

//int main() {
//	int age = 0;
//	// ����һ�����ֵ�age
//	scanf("%d", &age); // ����: 100
//	// scanf �� printf ��һ��
//	printf("age = %d\n", age); //���: 100
//	return 0;
//}

// ��� - 180 - ����
// ���� - 49.5 - С�� - ������
//int main() {
//	float weight = 49.5f; // Ĭ����double����,���Ҫ��float���͵Ļ�,���ں������f
//	printf("weight = %f\n", weight); // int�����ڴ�ӡʱʹ��%d, float�����ڴ�ӡʱӦ��ʹ��%f
//	int hight = 180;
//	return 0;
//}


// sizeof���������С��
//int main() {
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//
//	double salary = 10000.0; // 8���ֽ� - salary�������ڴ�����8���ֽڵĿռ�, �������10000.0
//	short age = 10; // ���ڴ�����2���ֽڵĿռ�
//	short num = 10; // 2���ֽ�
//	return 0;
//}



//int b = 1000; // ȫ�ֱ���
//
//void test() {
//	int c = 0; // �ֲ�����
//	printf("%d\n", c);
//}
//
//int main() {
//	//{ } һ�������
//	// �ڴ�����ڲ�����ı��� -- �ֲ�����
//	// �ڴ�����ⲿ����ı��� -- ȫ�ֱ���
//	int a = 10; // �ֲ�����
//
//	printf("%d\n", a);
//	test(); // ����test()����
//	return 0;
//}

//int main() {
//	{
//		int a = 10;
//		printf("1 --> a = %d\n", a); // 10
//	} // ���˴�����֮��, �ֲ������������ڽ���,
//	printf("2 --> b = %d\n", a); // a����δ�����ı�ʶ��
//
//	return 0;
//}


//int a = 10000;
//int main() {
//	int a = 10;
//	printf("a = %d\n", a); // 10
//	// �ֲ�������ȫ�ֱ������ֳ�ͻ�������, �ֲ���������
//	return 0;
//}



//// ��������֮��
//int main() {
//	// ���岢��ʼ����������
//	int num1 = 0; 
//	int num2 = 0;
//	// ������������
//	scanf("%d%d", &num1, &num2); // 10 20
//	// �������������
//	int sum = num1 + num2;
//	// ��ӡ��
//	printf("sum = %d\n", sum);
//
//	return 0;
//}



// �ֲ�����
// �ֲ�������������Ϊ�����ڵľֲ���Χ - �����
//int main() {
//	{
//		int a = 10
//	}
//	printf("%d\n", a); // a Ϊδ�����ı�ʶ��
//	return 0;
//}


// ȫ�ֱ���
// ȫ�ֱ�����������Ϊ��������
//int num = 1000;
//void test() {
//	printf("3: num = %d\n", num); // 1000
//}
//int main() {
//	printf("1: num = %d\n", num); // 1000
//	{
//		printf("2: num = %d\n", num); // 1000
//	}
//	test();
//	return 0;
//}


//// ����һ���ⲿ��ʶ��
//extern int g_val; // �൱����һ��ȫ�ֱ���
//int main() {
//
//	printf("g_val = %d\n", g_val); 
//	return 0;
//}


// ��������

int main() {

	{
		int a = 10;
		printf("a = %d\n", a); // 10
	} // ����������ŵ�ʱ��, a �����������ѵ�, ��������, �����ٱ�ʹ��
	// a ����ʹ��
	printf("a = %d\n", a);
	return 0;
}