#include <stdio.h>

int level = 1;

void Stage()
{
	level += 1;
}
int itemcode;



int main()
{
#pragma region ���� ����
	// �Լ� ���ο��� ����� ������ { } �������� ����
	// �� �� ������, { }�� ����� �޸𸮿��� �������
	// Ư¡�� ������ �ֽ��ϴ�.

//	int data = 100;
//	{
//		int data = 200;

		// ���� ����� ��ġ�� �ִ� data ������ �����մϴ�. 
//		printf("data ������ �� : %\n", data);
//	}
//	printf("data ������ �� : %d\n", data);

#pragma endregion

#pragma region ���� ����
// �Լ� �ܺο� ����� ������, ��𿡼����� ������ �����ϸ�,
// ���α׷��� ����� �� �����ǰ� ���α׷��� ����� �� �޸�
// ���� �����Ǵ� Ư¡�� ������ �ִ� �����Դϴ�.

//	Stage();

	// printf("level ������ �� : %d\n", level);
	// printf("itemCode ������ �� : %d\n", itemCode); 
#pragma endregion 
#pragma region ���� ����
	// static�̶�� Ű���带 ����ϰ� ���� ������ Ư���� �����鼭,
	// ���� ������ Ư¡�� ������ �ִ� �����Դϴ�.
//	static int score = 0;

//	score++;

//	printf("score ������ �� : %d\n", score);
	
	// score
#pragma endregion
	// static�̶�� Ű���带 ����ϰ� ���� ������ Ư���� �����鼭, ���� ������ Ư¡�� ������
	// �ִ� �����Դϴ�.

#pragma region ���μ� ����
	int n = 1;
	
	printf("n�� ���� �� �Է� : ");
	scanf_s("%d", &n);

	for (int i = 2; i <= n; i++)
	{
		if (n % i == 0)
		{
			n /= i;

			printf("%d ", i);

			i--;
        }
	}

#pragma endregion	
	return 0;
}




