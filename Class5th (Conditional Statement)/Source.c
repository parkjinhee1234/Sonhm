#include <stdio.h>

void main()
{
#pragma region ���ǹ�
	// � ������ �־��� �� �ش� ���ǿ� ����
	// ������ �����ϵ��� �����ϴ� ��ɹ��Դϴ�.
#pragma region ���� ������
	// �� ���� �ǿ������� ���� ���Ͽ� �� �����
	// 0 �Ǵ� 1�̶�� ������ ��Ÿ���� �������Դϴ�.

	int result = 0;

	result = 10 > 5;

	printf("result ������ �� : %d\n", result);

	result = 5 < 4; // 0

	printf("result ������ �� : %d\n", result);

	result = 5 >= 1; // 1

	printf("result ������ �� : %d\n", result);

	result = 3 <= 1; // 0

	printf("result ������ �� : %d\n", result);

	result = 10 == 10; // 1

	printf("result ������ �� : %d\n", result);

	result = 10 != 10; // 0

	printf("result ������ �� : %d\n", result);
	// ���� �����ڴ� ������ ���� �� 1�̶�� ������
	// ��ȯ�ϸ�, ������ Ʋ�� �� 0�̶�� ������ ��ȯ�մϴ�.
#pragma endregion

#pragma region if��
	// � Ư���� ������ ���Ͽ� ������ �´ٸ�
	// ����Ǵ� ��ɹ��Դϴ�.

	int count = 5;

	if (count == 5)
	{
		printf("if���� ������ '��'�Դϴ�.");
	}
	// if���� ������ 1�� �� ����Ǹ�, 0�� �� ������� �ʽ��ϴ�.
#pragma region else if��
	// if���� ������ Ʋ�� �� else if���� ������
	// �´ٸ� ����Ǵ� ��ɹ��Դϴ�.

	// int level = 99;

	// if (level == 81)
	// { 	
	//	printf("1�� ����\n");
	// }
	//else if (level == 99)
	// {
		//printf("2�� ����\n");
	// }
#pragma region else��
	// if���� else if ���� ������ �� Ʋ����
	// ����Ǵ� ��ɹ��Դϴ�.

	// int health = 100;

	// if (health == 50)
	// { 
	//	printf("Warning\n");
	// }
	// else
	// {
		// printf("Exist Game Obhect");
	// }



	// if���� ����� ��� ���ǹ��� ������ ���ٸ�
	// ���� ���� �ִ� ���ǹ��� ����˴ϴ�.
#pragma region switch��
	// � ����� ���� �� ������� ����Ǵ� ��ɹ��Դϴ�.
	char grade = 'A';


	switch (grade)
	{
	case 'A': printf("A ���\n");
		break;
	case 'B': printf("B ���\n");
		break;
	case 'C': printf("C ���\n");
		break;
	case 'D': printf("D ���\n");
		break;
	default: printf("�ش��ϴ� ������ ���� �ƴմϴ� \n");
		break;
	}

	// switch������ ���ǽ����� �Ǽ��� ������ �Ǽ��� �����
	// ����� �� �����ϴ�.


	//	int stage = 1;

//	switch (stage)
//	{
//	case 1: printf("Ÿ��Ʋ\n");
//	case 2: printf("����\n");
//	case 3: printf("����\n");
//	case 4: printf("������\n");
   // }

	// switch���� ��� ���ǿ� �ش��ϴ� ���� ����
	// ������ ��ġ�� �̵��մϴ�.

	// switch ���� �ش� ������ �Ϸ�Ǿ��� ��, break
	// ���� ������ ������ �ؿ� �ִ� case ������ ���
	// �����Ű�ٰ� �����մϴ�
/*
	// AND �� ������
	int flag = 1;
	int damage = 10;
	char blood = '0';

	if (damage == 10 && blood == '0')
	{
		printf("AND �� ������\n");
	}
	if (damage == 10 || blood == '0')
	{
		printf("0 �� ������\n");
	}
	if (!flag)
	{
		printf("NOT �� ������\n");
	}
	*/

#pragma region ��и�
	int x = 10;
	int y = -5;

	if (x > 0 && y > 0)
	{
		printf("�� 1 ��и�\n");
	}
	else if (x < 0 && y > 0)
	{
		printf("�� 2 ��и�\n");
	}
	else if (x < 0 && y < 0)
	{
		printf("�� 3 ��и�\n");
	}
	else if (x > 0 && y < 0)
	{
		printf("�� 4 ��и�\n");
	}
	else if (x && y == 0)
	{
		printf("x ����\n");
	}
	else if (x == 0 && y)
	{
		printf("y ����\n");
	}
	else
	{
		printf("����\n");
	}

}


