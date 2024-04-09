#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void ViewHP(int health)
{
	for (int i = 0; i < health; i++)
	{
		printf("w");
	}
	printf("\n");
}

int main()
{
#pragma region Rand()함수
	// time(NULL) : UCT 기준으로 1970년 1월 1일 0시 0분 0초부터
	// 경과된 시간을 초(sec)로 변환하는 함수입니다.
	// int computer = 0;
	// int answer = 0;
	// int life = 5;
	// srand(time(NULL));
	// 
	// computer = rand() % 31;
	// 
	// 
	// while (life > 0)
	// {
	// 	ViewHP(life);
	// 	
	// 	printf("입력 : ");
	// 	scanf_s("%d", &answer);
	// 
	// 	syestem("cls");
	// 
	// 		printf("\n");
	// 	if (answer < computer)
	// 	{
	// 		printf("컴퓨터가 가지고 있는 값보다 적습니다.\n");
	// 		life--;
	// 	}
	// 	else if (answer > computer)
	// 	{
	// 		printf("컴퓨터가 가지고 있는 값보다 큽니다\n");
	// 			life--;
	// 
	// 	}
	// 	system("cls");
	// }
	// if (life <= 0)
	// {
	// 	printf("패배하였습니다.\n");
	// }
	// else
	// {
	// 	printf("승리하였습니다.\n");
	// }
	// 

// 	srand(time(NULL)); // 난수 발생기를 초기화하는 함수입니다.
// 
// int result = rand(); // 0 ~ 32767 사이의 난수를 생성하는 함수입니다.
// 
// 
// printf("result 변수의 값 : %d\n", result);
// 
// int random_number = rand() % 10 + 1; // 0 이상 10 미만의 값을 얻기 위해 10으로 나눔
// 
// printf("Random number: %d\n", random_number);
// 
// return 0;


#pragma region UP = DOWN GAME




#pragma endregion


}