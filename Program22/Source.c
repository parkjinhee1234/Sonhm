#include <stdio.h>
#include <conio.h>
#include <windows.h>

#define UP 72
#define LEFT 75
#define RIGHT 77
#define DOWN 80

// void GotoXY(int x, int y)
// {
// 	// x��� y�� ��ǥ ����
// 	COORD position = { x, y };
// 
// 	// Ŀ�� �̵� �Լ�
// 	// SetConsoleCursoRosition(GetStdHandle(STD_OUTRUT_HANDLE), position);
// 
// 	// GetStdHandle(STD_OUTRUT_HANDLE) : ǥ�� ��� �ڵ��� �����ɴϴ�.
// 	// SetConsoleCursorPosition : �ܼ�â�� Ŀ���� �̵��մϴ�.
// }
// 
// void gotoxy(int x, int y) {
//     printf("\x1b[%d;%df", y, x);
// }
// int main()
// {
//   
//     int x = 1, y = 1; // �ʱ� ��ġ
//     char input;
//     gotoxy(x, y);
//     while (1) {
//         
//         printf("��");
// 
//         input = _getch(); // Ű �Է� �ޱ�
// 
//         // �Էµ� Ű�� ���� ��ġ �̵�
//         switch (input) {
//         case 'w':
//             y--;
//             break;
//         case 's':
//             y++;
//             break;
//         case 'a':
//             x--;
//             break;
//         case 'd':
//             x++;
//             break;
//         case 'q': // q�� ������ ����
//             return 0;
//         }
//         gotoxy(x, y);
//         printf("��");
//     }
//      
//     return 0;
// }
    
 
