#include <stdio.h>
#include <>
#define SIZE 1000
void Load(const char* name)
{
	FILE* file = fopen(name, "r");

	char buffer[SIZE] = { 0, };

	fread(buffer, 1, SIZE, file);

	printf("%s", buffer);

	fclose(file);
}


int main()
{
#pragma region 파일 입출력
	// 파일 입출력을 위해서는 파일을 열고 닫는 과정이 필요합니다.
	// 파일을 열기 위해서는 fopen 함수를 사용합니다.
	// fopen 함수는 파일의 경로와 파일의 모드를 인자로 받습니다.
	// 파일의 경로는 파일의 경로를 문자열로 입력하면 됩니다.
#pragma region AS
	// r : 읽기 모드
	// w : 쓰기 모드
	// a : 추가 모드
	// r+ : 읽기/쓰기 모드
	// w+ : 읽기/쓰기 모드
	// a+ : 읽기/쓰기 모드

	// FILE* file = fopen("data.txt", "w");
	// 
	// fputs("Level : 5", file);
	// fputs("Stage : 3", file);
	// fputs("HP : 100", file);
	// 
	// fclose(file);

	// fclese 함수는 파일의 포인터를 인자로 받습니다.
	// 파일을 닫으면 파일의 포인터가 NULL로 초기화됩니다.
	// 파일을 닫지 않으면 파일이 계속 열려있게 되어 

	// FILE* file = fopen("data.txt", "r");
	// 
	// char buffer[SIZE] = { 0, };
	// 
	// fread(buffer, 1, SIZE, file);
	// 
	// printf("%s", buffer);
	// 
	// fclose(file);

	// 파일의 내용을 읽어서 buffer에 저장합니다.

	// fread 함수는 파일의 포인터, 읽을 데이터의 크기,
	// 읽을 데이터의 개수, 파일의 포인터를 인자로 받습니다.
#pragma endregion


	while (1)
	{
		Load("Res data.txt");

		system("cls");
	}




	return 0;
}
