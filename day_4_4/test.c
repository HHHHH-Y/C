#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// ����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Զ�����ˮ
// 20 + 10 + 5 + 2 + 1 + 1
// ����20Ԫ����20ƿ, ����20����ƿ. 
// 20����ƿ�ֿ��Ի�10ƿ. ����10����ƿ
// 10����ƿ���Ի�5ƿ, ����5����ƿ
// 5����ƿ���Ի�2ƿ, ��ʣ��1����ƿ. ����2����ƿ
// 3����ƿ���Ի�1ƿ. ʣ��1����ƿ,����1����ƿ
// 2����ƿ��1ƿ, ����1����ƿ.��ʱ��ƿ�޷��ټ�������ˮ
//int main() {
//	int money = 0;
//	scanf("%d", &money); // 20;
//	int count = 0;
//	int empty = 0;
//	int i = 0;
//	// 20Ԫ��20ƿ��ˮ
//	for (i = 0; i < money; i++) {
//		count++; // 20
//		empty++; // 20
//	}
//	// ���п�ƿ������ˮ
//	while (empty > 1) {
//		count += empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//	// empty <= 1
//	printf("count = %d\n", count);
//	return 0;
//}

// ����ָ��
//int main() {
//	int a = 0;
//	printf("%d\n", a); // 0
//	int* pa = &a; // һ��ָ��
//	*pa = 20;
//	//printf("%d\n", a); // 20
//	int** ppa = &pa; // ����ָ��
//	**ppa; // *ppa --> pa --> *pa --> a = 20
//	printf("%d\n", a); // 20
//	return 0;
//}

// ָ������
// ָ�����鱾������˵��һ������, �����ŵ���ָ�����͵�Ԫ��
//int main() {
//	//int* arr[10]; // arr����������10��int*���͵�Ԫ��
//	int a = 0;
//	int b = 1;
//	int c = 2;
//	int* arr1[3] = { &a, &b, &c };
//	int i = 0;
//	for (i = 0; i < 3; i++) {
//		printf("%p ", arr1[i]);
//	}
//	return 0;
//}

// �ṹ�������, ����, ��ʼ���Լ��ṹ���Ա�ķ���
// ����һ��ѧ����: ���� + ѧ�� + ���� + �Ա�
// �ṹ�������, ����
//struct Stu {
//    char name[20];
//    char id[18];
//    short age;
//    char sex[5];
//};
// �ṹ��ĳ�ʼ��, �ṹ���Ա����
// �ṹ���Ա���������ַ�ʽ:
// 1. �ṹ����� . ��Ա��
// 2. �ṹ��ָ�� -> ��Ա��
// 3. (*�ṹ��ָ��).��Ա��
//int main() {
//    struct Stu s = {"����", "41909020231", 21, "��"}; // ����ṹ���������ʼ��
//    printf("%s\n", s.name); // ����
//    printf("%s\n", s.id);  // 41909020231
//    printf("%d\n", s.age); // 21
//    printf("%s\n", s.sex); // ��
//    struct Stu* p = &s;
//    printf("%s\n", p->name);
//    printf("%s\n", p->id);
//    printf("%d\n", p->age);
//    printf("%s\n", p->sex);
//    printf("%s\n", (*p).name);
//    printf("%s\n", (*p).id);
//    return 0;
//}

// typedef - ���Ͷ���/�����ض���
// ʹ��typedef��struct Stu���������ض���ΪS
//typedef struct Stu {
//	char name[20];
//	char id[18];
//	short age;
//	char sex[5];
//}S;
//int main() {
//	S s = { "����", "41909020231", 21, "��" };
//	printf("%s\n", s.name);
//	printf("%s\n", s.id);
//	return 0;
//}

// �ṹ�崫��
struct Stu {
	char name[20];
	char id[18];
	short age;
	char sex[5];
};
void print(struct Stu tmp) {
	printf("%s\t%s\t%d\t%s\n", tmp.name, tmp.id, tmp.age, tmp.sex);
}
void print1(struct Stu* tmp) {
	printf("%s\t%s\t%d\t%s\n", tmp->name, tmp->id, tmp->age, tmp->sex);
}
int main() {
	struct Stu s = { "����", "41909020231", 21, "��" };
	print(s);
	print1(&s); // ���
	return 0;
}

// �������ε�ʱ��, ��������Ҫѹջ��. 
// �������һ���ṹ������ʱ��, �ṹ�����,����ѹջ��ϵͳ�����ͻ�Ƚϴ�, ���Իᵼ�������½�
// ����ڽ��нṹ�崫�ε�ʱ��, �����ܵĴ��ݵ�ַ