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


void main()
{
#pragma region ��� �Լ�
	// � �Լ����� �ڽ��� �ٽ� ȣ���Ͽ� �۾���
	// �����ϴ� �Լ��Դϴ�.

	// Awake();

	// ��� �Լ��� �Լ��� ��� ȣ���ϱ� ������
	// ���� ������ �޸𸮰� ��� ���̰� �ǹǷ�
	// ���� �����÷ο찡 �߻��մϴ�.

	Recursive(3);

	// ��� �Լ��� ��� Ư���� �������� �Լ���
	// ��ȯ�ؾ� �ϸ�, ��������� ȣ���� �Լ���
	// ���� �����ӿ� ���� �������� ȣ��� �Լ�
	// ���� ���ʴ�� ���� �������� �����˴ϴ�.
}

#pragma endregion