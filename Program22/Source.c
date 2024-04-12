#include <stdio.h>
#include <conio.h>
#include <windows.h>

#define UP 72
#define LEFT 75
#define RIGHT 77
#define DOWN 80

// void GotoXY(int x, int y)
// {
// 	// x축과 y축 좌표 설정
// 	COORD position = { x, y };
// 
// 	// 커서 이동 함수
// 	// SetConsoleCursoRosition(GetStdHandle(STD_OUTRUT_HANDLE), position);
// 
// 	// GetStdHandle(STD_OUTRUT_HANDLE) : 표준 출력 핸들을 가져옵니다.
// 	// SetConsoleCursorPosition : 콘솔창의 커서를 이동합니다.
// }
// 
// void gotoxy(int x, int y) {
//     printf("\x1b[%d;%df", y, x);
// }
// int main()
// {
//   
//     int x = 1, y = 1; // 초기 위치
//     char input;
//     gotoxy(x, y);
//     while (1) {
//         
//         printf("★");
// 
//         input = _getch(); // 키 입력 받기
// 
//         // 입력된 키에 따라 위치 이동
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
//         case 'q': // q를 누르면 종료
//             return 0;
//         }
//         gotoxy(x, y);
//         printf("★");
//     }
//      
//     return 0;
// }
    
 
