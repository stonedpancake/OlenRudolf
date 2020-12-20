#include <iostream>
#include <windows.h>
using namespace std;

int main() {
	COORD scrn;
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

	while (1) {

		if (GetKeyState(38)) {
			cout << "URA";
		}

		SetConsoleTextAttribute(h, 1);
		scrn.X = 50; scrn.Y = 12;

		SetConsoleCursorPosition(h, scrn);
		scrn.Y = 13;
		cout << " \\ / ";

		SetConsoleCursorPosition(h, scrn);
		scrn.Y = 14;
		cout << " F F";

		SetConsoleCursorPosition(h, scrn);
		scrn.Y = 15;
		cout << "\\/ \\/ ";

		SetConsoleCursorPosition(h, scrn);
		scrn.Y = 16;
		cout << " \\ / ";

		SetConsoleCursorPosition(h, scrn);
		scrn.Y = 17;
		cout << " / \\ ";

		SetConsoleCursorPosition(h, scrn);
		cout << "/   \\ ";

		scrn.X = 0;  scrn.Y = 18;
		SetConsoleCursorPosition(h, scrn);
		cout << "------------------------------------------------------------------------------------------------------------------------";

		Sleep(500);
	}


	// дальше просто для удобства, чтоб надпись о завершении не портила жизнь

	SetConsoleTextAttribute(h, 0x00);
	scrn.X = 0; scrn.Y = 0;
	SetConsoleCursorPosition(h, scrn);
	system("pause");
}
