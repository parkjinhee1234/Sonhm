#include <stdio.h>

#define SIZE 5

void main()
{
#pragma region �ڷ��� ��ȯ
	// ���� �ٸ� �ڷ����� ������ �ִ� ��������
	// ������ �̷���� �� ������ �����ߴ� �ڷ�����
	// �ٸ� �ڷ������� ��ȯ�ϴ� �����Դϴ�.
#pragma region ��ũ��

#pragma region ���� �� ���
	// ù ��° ������ ���� �����ϱ⿡ �������
	// ������ �� ��° �ȼ��� ����ϴ� �κ���
	// �������� ���� ����Դϴ�.

//	int x = 1;
//	int y = 2;

//	if (x == 1 && y++)
//	{
//		printf("AND�� ������ '��'�Դϴ�.\n");
//	}

	// printf("y�� �� : %d\n", y);






#pragma endregion


   // ���α׷� ������ Ư���� �����Ͱ� ���ڿ��� ����
   // �ǰ� ó���ϴ� �����Դϴ�.

	printf("SIZE ��ũ���� �� : %d\n", SIZE);

	// ��ũ���� ��� �ڷ����� �������� �����Ƿ� �޸�
	// ������ ������ ���� �ʽ��ϴ�.

	// ��ũ���� ������ ������ ������ ����Ǹ�, �� ��ũ�ΰ�
	// ����� �� ��ũ���� ��ü ����� �־�� �ϹǷ� ���α׷���
	// ũ�Ⱑ Ŀ���� �˴ϴ�.
#pragma endregion �Ϲ��� ����ȯ
	// ���� �ٸ� �ڷ������� ������ �̷���� ��
	// �ڷ����� ũ�Ⱑ ū �ڷ������� ��ȯ�Ǵ� �����Դϴ�.

	//	int data = 10;

	//   float storage = 7.5f;

	//	printf("data + storage�� ������ �� : %f", data + storage);

	//	data = storage;

	//	printf("data�� �� : %d\n", data);

#pragma #region Star


	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			printf("*");
		}

		printf("\n");
	}



#pragma endregion


#pragma region �����
	// ǥ�� ������ ���� �����Ϳ� ǥ�� ������ ū �����͸� �����ϰ�
	// �Ǹ� �Ϲ������� ������ �ս��� �߻��մϴ�.

	int health = 10;
	int armor = 3;

	float result = health / armor;

	printf("result XXX X : %f\n", result);

	// ������ �������� ������ �����ϰ� �Ǹ� ������
	// ��� ���� ���� �� �ֽ��ϴ�.

#pragma endregion



}

