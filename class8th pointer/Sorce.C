#include <stdio.h>



void main()
{
#pragma region �ּ� ������
	// ������ �ּҰ��� ��ȯ�ϴ� �������Դϴ�.

//	int data = 10;

	// % : ������ �ּҸ� ����ϴ� ���� ������
//	printf("data ������ �ּ� : %p", &data);

	// �������� �ּҰ��� �ش� �����Ͱ� ����� �޸�
	// ���� �ּҸ� �ǹ��ϸ�, �޸��� ������ 1 byte
	// �� ũ��� ������ ǥ���մϴ�.




#pragma region sizeof() ������
// ������ �޸� ũ�⸦ ��ȯ�ϴ� �������Դϴ�.

	float health = 100.0f;
	printf("int ������ �޸� ũ�� : %u\n", sizeof(int));
	printf("float ������ �޸� ũ�� : %u\n", sizeof(health));

#pragma endregion

#pragma region ������
	// �޸��� �ּҰ��� ������ �� �ִ� �����Դϴ�.

	int value = 100;

	int* ptr = NULL;

	ptr = &value;

	//	printf("ptr�� �� : %p\n", ptr);
	//	printf("ptr�� �޸� �ּ� : %p\n", &ptr);
	//	printf("value�� �޸� �ּ� : %p\n", &value);

		// ������ ������ �ڽ��� �޸� ������ ������ ������,
		// ������ ������ ������ �ּҸ� �����ϰ� �Ǹ� �ش�
		// ������ ���� �ּҸ� ����Ű�� �˴ϴ�.

	//	int attack = 50;

	//	int* iptr = &attack;

	//	printf("attack�� �� : %d\n, attack");

	//	*iptr = 99;

		// printf("attack�� �� : %d\n", attack);

		// ������ �ּҴ� ���α׷��� ����� ������ ����Ǹ�,
		// �����Ͱ� ����Ű�� �޸� ������ �ڷ����� �� ��
		// �����Ƿ� �����Ͱ� ����Ű�� �޸��� �ڷ�����
		// �������־�� �մϴ�.

		// float damage = 7.5f;

	//	int* ptrl = &damage;

		//	printf("ptrl ������ ����Ű�� �� : %f\n", *ptrl);


		// ������ ������ �����ϱ� ���� �ּ� ���� ������ ������
		// �ڷ����� ������ ������ �ڷ����� ��ġ�ؾ� �մϴ�.

	//	float* fptr = NULL;

	//	printf("fptr ������ ������ �޸� ũ�� : %d\n", sizeof(fptr));

	//	float x = 0.0f;
		// float y = 0.0f;

		// fptr = &x;

		// *fptr = 66.75f;

		// printf("x ������ �� : %f\n", x);

	//	fptr = 8y;
	//	*fptr = 99.825f;

	//	printf("y ������ �� : %f\n", y);


		// ������ ������ ũ��� �߾� ó�� ��ġ�� �� ���� ó��
		// �� �� �ִ� ũ��� ��������, �� ���� ó���� �� �ִ�
		// ũ��� �ü���� ���� ũ�Ⱑ �����˴ϴ�.
#pragma endregion

#pragma region ��� ���� ������
	// ������ ������ ����� �����Ͽ�, ������ ������
	// ����Ű�� �ִ� �ּҿ� �����ϴ� ���� ������ ��
	// ������ ������ �� �ֽ��ϴ�.

int a = 10;
int b = 20;

const int* cptr = NULL;

cptr = &a;

printf("cptr�� �� : %p\n", cptr);
// *cptr = 99;

cptr = 8;

printf("cptr�� �� : %p\n", cptr);
// *cptr = 99;

// ����� ������ �����ʹ� �ش� ������ ���� ������ ��
// ������, �ٸ� ������ �ּҴ� ����ų �� �ֽ��ϴ�.

#pragma endregion

#pragma region ������ ���ȭ

int v = 10;
int w = 20;

int* const reference = &v;

*reference = 100;

printf("v ������ �� : %b\n", v);

// referenne = &v;

// ������ ���ȸ�� ���ο� �޸��� �ּҸ�
// ������ �� �ֽ��ϴ�.

#pragma endregion  

}

int array[5];



//for (int i = 0; i < 5; i++)
//{
//	array[i] = (i + 1) * 10;

// printf("array[%d]�� �� : %d\n", i, array[i]);
// }
// �迭�� ��� ù ��° ���Ҵ� 0���� �����մϴ�.
// int size = 5;
// int room[size];
// 
// �迭�� ���ϴ� ���ҿ� ���� ������ �� ������, �迭�� ũ���
// �������� �Ǵ� �������� ������ �޸� ������ ������ �˴ϴ�.

// char string[ ] = { 'A','B','C','D', 'E', 'F' };

// printf("string �迭�� ũ�� : %d\n", sizeof(string));

// �迭�� �������� �޸� ������ ������, �迭�� �̸���
// �迭�� ���� �ּҸ� ����ŵ�ϴ�.
int list[5];

// printf("list�� �ּ� : %p\n", list);
// printf("list[0]�� �ּ� : %\n", &list[0]);

// int* ptr = NULL;

// ptr = list;

// *ptr = 10;

// printf("list[0]�� �� : %d\n", list[0]);

//ptr = ptr + 1;

//printf("list[1]�� �� : %d\n", list[1]);
// �迭�� ũ��� ������ �� ������, �ʱ�ȭ ��Ͽ��� ������
// ��ҿ� ���� �迭�� ũ�Ⱑ �����˴ϴ�.
#pragma endregion