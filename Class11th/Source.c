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

printf("count 변수의 값 : %d\n", count);


Recursive(count - 1);
}


void main()
{
#pragma region 재귀 함수
	// 어떤 함수에서 자신을 다시 호출하여 작업을
	// 수행하는 함수입니다.

	// Awake();

	// 재귀 함수는 함수를 계속 호출하기 때문에
	// 스택 영역에 메모리가 계속 쌓이게 되므로
	// 스택 오버플로우가 발생합니다.

	Recursive(3);

	// 재귀 함수의 경우 특정한 시점에서 함수를
	// 반환해야 하며, 재귀적으로 호출한 함수는
	// 스택 프레임에 의해 마지막에 호출된 함수
	// 부터 차례대로 스택 영역에서 해제됩니다.
}

#pragma endregion