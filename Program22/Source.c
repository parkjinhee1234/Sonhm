#include <stdio.h>
#include <stdlib.h>

int main()
{
#pragma region ���� �Ҵ�
	// ���α׷��� ���� �߿� �ʿ��� ��ŭ �޸𸮸�
	// �Ҵ��ϴ� �۾��Դϴ�.

//	int * ptr = (int *)malloc(sizeof(int));

	// ���� �Ҵ��� ���� �ð��� ���������� �޸���
	// ũ�⸦ �����ų �� ������, �������� �޸���
	// ũ�⸦ �Ҵ��� �� ����Ʈ ������ ��ȯ�մϴ�.
//	printf("ptr�� ����Ű�� �� : %d\n", *ptr);

//	*ptr = 100;

	//printf("ptr�� ����Ű�� �� : %d\n", *ptr);

	// �޸𸮸� ���� �Ҵ��� �� �ּҸ� ���� �����ͷ�
	// ��ȯ�ϱ� ������ �ڷ����� ��ȯ�� ���� �޸𸮿�
	// �Ҵ��ؾ� �մϴ�.

//	free(ptr);
//	free(ptr);

	// �������� �Ҵ��� �޸𸮴� �� ������ �����Ǿ� �����Ƿ�
	// ����� ������ ���� ��ü���־�� �մϴ�.
#pragma endregion

#pragma region ��۸� ������

	// �̹� ������ �޸� ������ ����Ű��
	// �������Դϴ�.

//	int* ptr1 = (int *)malloc(4);

//	*ptr1 = 100;

//	printf("ptr1�� ����Ű�� �� : %d\m", *ptr1);

//	free(ptr1);

	// ������ �޸� ������ �����ؼ� ���� �����Ͽ����ϴ�.
//	*ptr1 = 999;

//	printf("ptr1d�� ����Ű�� �� : %d\n", *ptr1);

#pragma endregion 

#pragma region ���� �迭

	int dyramicArraySize = 5;

	int* arrPtr = (int*)malloc(sizeof(int) * dyramicArraySize);

	int size = sizeof(int) * dyramicArraySize / sizeof(int);

	for (int i = 0; i < size; i++)
	{
		arrPtr[i] = i + 1;
		printf("arrPtr[%d] : %d\n", i, arrPtr[i]);
	}

	dyramicArraySize = 10;

	arrPtr = (int*)malloc(sizeof(int) * dyramicArraySize);

	size = sizeof(int) * dyramicArraySize / sizeof(int);

	printf("\n");

	for (int i = 0; i < size; i++)
	{
		arrPtr[i] = i + 1;
		printf("arrPtr[%d] : %d\n", i, arrPtr[i]);
	}

	return 0;

}