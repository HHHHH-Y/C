#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
// ��ϵ������: ==  !=  >=  <=  >  <

// �߼�������
// &&(��): �мپ�Ϊ��, ȫ��Ϊ���Ϊ��
// ||(��): ��������, ȫ��Ϊ�ٲ�Ϊ��
// ע��: ��Ҫ���߼���������λ����������
// λ�������ǻ��ڶ��������н��е�, ���߼��������Ƕ�������������ٽ��е�
//int main() {
//	int a = 1 && 2;
//	printf("%d\n", a); // 1
//	int b = 0 && 3;
//	printf("%d\n", b); // 0
//	int c = 0 || 2;
//	printf("%d\n", c); // 1
//	int d = 0 || 0;
//	printf("%d\n", d); // 0
//	return 0;
//}

//int main() {
//	//int i = 0, a = 0, b = 2, c = 3, d = 4;
//	int i = 0, a = 1, b = 2, c = 3, d = 4;
//	//i = a++ && ++b && d++;
//	i = a++ || ++b || d++;
//	//printf("a = %d b = %d c = %d d = %d\n", a, b, c, d); //1 2 3 4
//	//printf("a = %d b = %d c = %d d = %d\n", a, b, c, d); // 2 3 3 5
//	//printf("a = %d b = %d c = %d d = %d\n", a, b, c, d); // 1 3 3 4
//	printf("a = %d b = %d c = %d d = %d\n", a, b, c, d); // 2 2 3 4
//	return 0;
//}

// ����������/��Ŀ������
// exp1 ? exp2 : exp3
//int main() {
//	int a = 3;
//	int b = 5;
//	int max = 0;
//	if (a > b) {
//		max = a;
//	} else if (a < b) {
//		max = b;
//	}
//	printf("%d\n", max); // 5
//	return 0;
//}
//int main() {
//	int a = 3;
//	int b = 5;
//	int max = 0;
//	max = (a > b ? a : b);
//	printf("%d\n", max); // 5
//}

// ���ű��ʽ
// �����ö��Ÿ����Ķ�����ʽ. ���ű��ʽ, ������������ִ��. �������ʽ�Ľ�������һ�����ʽ�Ľ��
//int main() {
//	int a = 1;
//	int b = 2;
//	int c = (a > b, a = b + 10, a, b = a + 1);
//	printf("%d\n", c); // 13
//	return 0;
//}
//a = get_val();
//count_val(a);
//while (a > 0) {
//  ҵ����
//	a = get_val();
//	count_val(a);
//}
// ���ö��ű��ʽ, ��Ϊ:
//while(a = get_val(), count_val(a), a > 0){
//      ҵ����
//}

// �±����ò�����[]
// ��Ҫ����������
//int main() {
//	int arr[10] = { 0 }; // ����һ������, []��Ϊ����ĳ���
//	printf("%d\n", arr[2]); // []��Ϊ������±�, arr[2]��ָ�������±�Ϊ2��Ԫ��
//	return 0;
//}

// �������ò�����()
//void Print(int arr[], int sz) {
//	int i = 0;
//	for (i = 0; i < sz; i++) {
//		printf("%d ", arr[i]);
//	}
//}
//int main() {
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Print(arr, sz); // ()���Ǻ�������ʱ��Ҫ���ݵĲ���
//	return 0;
//}

// �ṹ��
// ���Ӷ��� - ���� - ��������
// ����һ��ѧ���Ľṹ��: ����+�绰+����+�Ա�
//struct stu {
//	char name[20];
//	char tel[15];
//	int age;
//	char sex[5];
//};
// ���ڷ���һ���ṹ�����: 1. �ṹ��.��Ա��;   2. �ṹ��ָ�� -> ��Ա��
//int main() {
//	struct stu s = { "Wuyifan", "15930697091", 18, "��" }; // s ��һ���ṹ�����
//	strcpy(s.name, "Wuyifan");
//	printf("%s\n", s.name);
//	struct stu* p = &s;
//	strcpy(p->sex, "��");
//	printf("%s\n", p->sex);
//	return 0;
//}

// ���ʽ��ֵ: ��ʽ����ת��,  ����ת��
// ��ʽ����ת�� -> ��������: ���ʽ�е��ַ��Ͷ����β�������ʹ��֮ǰ��ת��Ϊ��ͨ����

// ����ת��: int -> unsigned int -> long int -> unsigned long int -> float -> double -> long double
// �������ֲ�ͬ������, �Ͱ�������ת���е����ͽ���ת��