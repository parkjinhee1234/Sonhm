#include <stdio.h>

void Awake()
{
	printf("Awake\n");

	Awake();
}

void Recursive(int count)
{
	if (count <= 0)
	{
		return;
	}

	printf("count ������ �� : %d\n", count);


	Recursive(count - 1);
}

inline void Process(int data)
{
	printf("%d%%��ŭ �����Ͱ� ó���Ǿ����ϴ�.", data);

	// �ζ��� �Լ��� ������ ������ Ȯ��Ǹ�, ������ ��
	// �¶��� �Լ��� �����ϴ��� ��Ȳ�� ���� �Ϲ� �Լ�
	// �� ��ȯ�Ǳ⵵ �մϴ�.
}

void main()
{

#pragma region ��� �Լ�
	// � �Լ����� �ڽ��� �ٽ� ȣ���Ͽ� �۾���
	// �����ϴ� �Լ��Դϴ�.

	// Awake();

	// ��� �Լ��� �Լ��� ��� ȣ���ϱ� ������
	// ���� ������ �޸𸮰� ��� ���̰� �ǹǷ�
	// ���� �����÷ο찡 �߻��մϴ�.

	//Recursive(3);

	// ��� �Լ��� ��� Ư���� �������� �Լ���
	// ��ȯ�ؾ� �ϸ�, ��������� ȣ���� �Լ���
	// ���� �����ӿ� ���� �������� ȣ��� �Լ�
	// ���� ���ʴ�� ���� �������� �����˴ϴ�.


#pragma endregion

#pragma region �ִ񰪰� �ּڰ�

//int array[5] = { 6,11,1,2,8 };

//int max = array[0];
//int min = array[0];

//for (int i = 1; i < 5; i++)
	{
		//if (max < array[i])
		//{
		//	max = array[i];
		//}

	}
	//printf("�ִ� : %d\n", max);
	//printf("�ּڰ� : %d\n", min);
#pragma endregion
#pragma region �ζ��� �Լ�
	// �Լ��� ȣ���ϴ� ��� �Լ��� ȣ��Ǵ� ��ġ����
	// �Լ��� �ڵ带 �����Ͽ� �����ϴ� ����� �Լ��Դϴ�.

	Process(75);

	// �ζ��� �Լ��� �Լ��� ȣ���ϴ� ������ �����Ƿ�
	// ó�� �ӵ��� ��������, �ζ��� �Լ��� ���� ����ϰ�
	// �Ǹ� �Լ��� �ڵ尡 ����Ǳ� ������ ���� ������
	// ũ�Ⱑ Ŀ���� �˴ϴ�.

	for (int i = 2; i <= select; i++)
	{
		if (select % i == 0)
		{
			flag++;
		}
}

	if (flag == 1)
	{
		printf("Prime Number");
	}
	else
	{
		printf()
	}
#pragma endregion


}