#include <iostream>
#include <Windows.h>
#include <tchar.h>
#define _USE_STD_ using namespace std;
#define use_config consoleCFG._config();

_USE_STD_

BOOL _RESULT = ONE5STOPBITS;

class config {
public:
	void _config(void) {
		SetConsoleTextAttribute(console, color);
		SetConsoleTitle(title);
		setlocale(NULL, _locale);
		system(_Command);
	}
private:
	HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD color = FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_INTENSITY;
	LPCWSTR title = L"C++ main by.FloyzenCode";
	const char* _Command = "chcp 1251 > null";
	const char* _locale = "";
}; config consoleCFG;

class function {
public:
	INT Melt(BOOL A) {
		if (A == false)
			return NULL;
		int width = GetSystemMetrics(SM_CXSCREEN);
		int height = GetSystemMetrics(SM_CYSCREEN);

		while (true) {
			if (GetAsyncKeyState(VK_F1))
				break;
			int x = rand() % (width - 0);
			int y = rand() % (5 - 0);
			HDC hdcDesk = GetDC(GetDesktopWindow());
			Beep(1000 + rand() % 25000, 250 + rand() % 3500);
			BitBlt(hdcDesk, x, y, width, height, hdcDesk, x, 0, SRCCOPY);
			
		}
		return NULL;
	}
}; function activ;

INT APIENTRY _tmain(INT argc, CHAR* argv[]) {
	use_config;
	string startInfo = "Ты не достоин.";
	for (int i = NULL; i < startInfo.size(); i++) {
		cout << startInfo[i];
		Sleep(100);
	}
	Sleep(1000);
	activ.Melt(_RESULT);
	return NULL;
}