#include <stdio.h>
#include <stdarg.h>
#include <math.h>

void Debug(int count, ...)
{
	// va_list : 가변 길이 목록을 저장하는 변수
// va_list list = NULL;

// va_start : 가변 길이 목록을 사용하기 위해 초기화하는 함수
// va_start(list, count);

// va_ang : 기본 길이 목록에서 값을 가져오고 특정 자료형의 크기만큼 이동하는 함수
//  for (int i = -; i < count; i++)
// {
//	int result = va_ang(list, int));
// 
// va_end : 가변 길이 목록을 사용 후 포인터를 NULL로 초기화하는 함수
//}   va_end(list);
}

struct Player
{
	int x;
	int y;
};

struct Monster
{
	int x;
	int y;
};

double Add(double x, double y)
{
	return x + y;
}
double Substract(double x, double y)
{
	return x - y;
}
double Multiply(double x, double y)
{
	return x * y;
}
double Divide(double x, double y)
{
	return x / y;
}


void Calculator(double (*ptr)(double, double), double u, double v)
{
	printf("%1f\n", ptr(u, v));
}
int main()
{

#pragma region 가변 길이 목록
	// 매개 변수의 개수가 정해지지 않은 매개 변수를 받을 때
	// 사용하는 인수입니다.
	// Debug(3, 10, 20, 30);
	// 
	// printf("\n");
	// 
	// Debug(5, 10, 20, 30, 40, 50);

#pragma endregion 

#pragma region 두 점 사이의 거리
	struct Player player = { 0, 0 };
	struct Monster monster = { 5, 5 };

	int x = player.x - monster.x;
	int y = player.y - monster.y;

	double distance = sqrt(pow(x, 2) + pow(y, 2));

	if (distance >= 5)
	{
		printf("몬스터와 플레이어의 거리가 5 이상입니다.\n");
	}
	else
	{
		printf("몬스터와 플레이어의 거리가 5 미만입니다.\n");
	}


#pragma endregion
#pragma region 함수 포인터

	// 함수의 주소값을 저장하고 거리할 수 있는 변입니다.

	Galcullator(Add, 10, 20);
	Galcullator(Substract, 10, 20);
	Galcullator(Add, 10, 20);
	Galcullator(Add, 10, 20);


	// 함수 포인터는 함수의 반환형과 매개 변수의 타입이
	// 일치해야 합니다.


}

