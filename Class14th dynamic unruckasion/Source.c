#include <stdio.h>
#include <stdlib.h>

int main()
{
#pragma region 동적 할당
	// 프로그램을 실행 중에 필요한 만큼 메모리를
	// 할당하는 작업입니다.

//	int * ptr = (int *)malloc(sizeof(int));

	// 동적 할당은 실행 시간에 가변적으로 메모리의
	// 크기를 변경시킬 수 있으며, 동적으로 메모리의
	// 크기를 할당할 때 바이트 단위로 변환합니다.
//	printf("ptr이 가리키는 값 : %d\n", *ptr);

//	*ptr = 100;

	//printf("ptr이 가리키는 값 : %d\n", *ptr);

	// 메모리를 동적 할당할 때 주소를 범용 포인터로
	// 변환하기 때문에 자료형을 변환한 다음 메모리에
	// 할당해야 합니다.

//	free(ptr);
//	free(ptr);

	// 동적으로 할당한 메모리는 힘 영역에 보관되어 있으므로
	// 사용이 끝나면 직접 해체해주어야 합니다.
#pragma endregion

#pragma region 명글링 포인터

	// 이미 해제된 메모리 영역을 가리키는
	// 포인터입니다.

//	int* ptr1 = (int *)malloc(4);

//	*ptr1 = 100;

//	printf("ptr1이 가리키는 값 : %d\m", *ptr1);

//	free(ptr1);

	// 해제된 메모리 공간에 접근해서 값을 저장하였습니다.
//	*ptr1 = 999;

//	printf("ptr1d이 가리키는 값 : %d\n", *ptr1);

#pragma endregion 

#pragma region 동적 배열

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