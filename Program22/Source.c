#include <stdio.h>
#include <string.h>


struct Goblin
{
	char grade;
	int health;
	const char* name;
};

struct GameObject
{
	int x;
	double y;
	short z;
};

int main()
{
#pragma region ����ó
	// ���� ���� ������ �ϳ��� �������� ����ȭ��
	// ���� �ϳ��� ��ü�� �����ϴ� ���Դϴ�.

//	struct Goblin goblin1;

//	goblin1.grade = 'A';
//	goblin1.health = 100;
//	goblin1.name = "������ ���";

//	printf("goblin1�� �ּ� : %p\n", &goblin1);
	
//	printf("goblin1.grade�� �� : % d\n",goblin1.grade);
//	printf("goblin1.health�� �� : %d\n", goblin1.health);
//	printf("goblin1.name�� �� : %p\n", &goblin1.name);

//	struct Goblin goblin2 = {'S',200, "��ȭ�� ���"};
	
//	    printf("goblin1.grade�� �� : % d\n", goblin2.grade);
//		printf("goblin1.health�� �� : %d\n", goblin2.health);
//		printf("goblin1.name�� �� : %p\n", &goblin2.name);

	// ����ü�� �����͸� �ʱ�ȭ�� �� �ʱ�ȭ ����Ʈ�� ����Ͽ�
	// �ʱ�ȭ�� �� ������, ���ʿ��� ���������� �ʱ�ȭ�մϴ�.

	// ����ü�� �����ϱ� ���� ����ü�� �޸� ������
	// �������� �����Ƿ�, ����ü ���ο� �ִ� �����͸�
	// �ʱ�ȭ�� �� �ֽ��ϴ�.

#pragma region ����Ʈ �е�
	// ��� ������ �޸𸮿��� CPU�� ���� �� �� ���� ���� ��
	// �ֵ���, �����Ϸ��� ������Ÿ�� ��Ͽ� ���߾� ����Ʈ��
	// �е����ִ� ����ȭ �۾��Դϴ�.

	// struct GameObject gameObject;

	// printf("GameObject�� ũ�� : %d\n", sizeof(gameObject));

	// ����ü�� ũ��� ����ü�� �����ϴ� ��� �߿��� ũ�Ⱑ
	// ���� ū �ڷ����� ����� �ǵ��� �����մϴ�.

#pragma region ȸ��
	const char* string = "Level";

	int size = strlen(string);

	printf("size�� �� : %d\n", size);

#pragma #endrigion
}