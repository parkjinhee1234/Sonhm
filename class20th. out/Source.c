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
#pragma region ���� �����
	// ���� ������� ���ؼ��� ������ ���� �ݴ� ������ �ʿ��մϴ�.
	// ������ ���� ���ؼ��� fopen �Լ��� ����մϴ�.
	// fopen �Լ��� ������ ��ο� ������ ��带 ���ڷ� �޽��ϴ�.
	// ������ ��δ� ������ ��θ� ���ڿ��� �Է��ϸ� �˴ϴ�.
#pragma region AS
	// r : �б� ���
	// w : ���� ���
	// a : �߰� ���
	// r+ : �б�/���� ���
	// w+ : �б�/���� ���
	// a+ : �б�/���� ���

	// FILE* file = fopen("data.txt", "w");
	// 
	// fputs("Level : 5", file);
	// fputs("Stage : 3", file);
	// fputs("HP : 100", file);
	// 
	// fclose(file);

	// fclese �Լ��� ������ �����͸� ���ڷ� �޽��ϴ�.
	// ������ ������ ������ �����Ͱ� NULL�� �ʱ�ȭ�˴ϴ�.
	// ������ ���� ������ ������ ��� �����ְ� �Ǿ� 

	// FILE* file = fopen("data.txt", "r");
	// 
	// char buffer[SIZE] = { 0, };
	// 
	// fread(buffer, 1, SIZE, file);
	// 
	// printf("%s", buffer);
	// 
	// fclose(file);

	// ������ ������ �о buffer�� �����մϴ�.

	// fread �Լ��� ������ ������, ���� �������� ũ��,
	// ���� �������� ����, ������ �����͸� ���ڷ� �޽��ϴ�.
#pragma endregion


	while (1)
	{
		Load("Res data.txt");

		system("cls");
	}




	return 0;
}
