#include <stdio.h>

void main()
{

#pragma region ���� ������

	int attack = 10;
	int damage = ++attack;

	printf("damage ������ �� : %d\n", damage); // 5
	printf("damage ������ �� : %d\n", attack); // 6

	damage = --attack;

	printf("damage ������ �� : %d\n", damage); // 6
	printf("damage ������ �� : %d\n", attack); // 5

	int count = 5;
	int result = count++;

	printf("result ������ �� : %d\n", result);
	printf("count ������ �� : %d\n", count);
#pragma endregion

#pragma region for��
	// �ʱ���� �����Ͽ� ���ǽ��� ����� ���� Ư����
	// Ƚ����ŭ �ݺ��ϴ� �ݺ����Դϴ�.

//	for (int i = 0; i <= 5; i++)
//	{
//		printf("Warning\n");
//	}


	// for���� ��� ������ ������ ���¿� �ݴ�� �ʱ����
	// �����ϰ� �Ǹ� ������ ��ġ���� �ʾ� ��� �ݺ�������
	// ����Ǵ� ������ �߻��մϴ�.



#pragma endregion

#pragma region while��
	// Ư�� ������ ������ ������ ����ؼ� �־���
	// ��ɹ��� �����ϴ� �ݺ����Դϴ�.

	// while ���� ��� ������ �Ʒ��� ����Ǹ�, �Ʒ���
	// �ִ� ��ɹ��� ������ �� ������ �ٽ� ���� �ִ�
	// ��ɹ����� ���ư��� �ݺ��ϴ� �����Դϴ�.

	int energy = 5;

	while (energy > 0)
	{
		printf("energy�� �� : %d", energy);
		energy--;
	}

#pragma endregion 

#pragma region do while��
	// ���ǰ� ������� �� ���� �۾��� ������ ����
	// ���ǿ� ���� ��ɹ��� �����ϴ� �ݺ����Դϴ�.

	char alphabet = 'A';

	do
	{
		printf("alphabet ������ �� : %c\n", alphabet);
	} while (alphabet == 'B');
#pragma endregion


#pragma region coutinue��
	// �ش� ���ǹ��� �������� �ʰ�, �ݺ����� �̾
	// �����ϴ� ����Դϴ�.
//	for (int i = 1; i <= 5; i++)
//	{
		// if (i == 3)
		// {
	//		continue;
//		}

	//	printf("i�� �� : %d\n", i);
//	}

	// �ݺ������� continue���� ������ �Ǹ� �ٽ�
	// ���������� ���ʴ�� �����մϴ�.




#pragma rigion ��ø for��

	for (int i = 0; i < 3; i++)
	{
		printf("i�� �� : %d\n", i);

		for (int j = 0; j < 5; j++)
		{
			printf("j�� �� : %d\n", j);
		}
	}

#pragma endregion


}

