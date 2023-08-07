#include <Windows.h>
#include "ControlButtons.h"
#include "Calculations.h"
#include "WndProc.h"

int main(HINSTANCE hInstance, HINSTANCE prevInstance, PSTR args, int showCmd) {
	WNDCLASSW wc = {0};

	wc.hbrBackground = (HBRUSH)COLOR_WINDOW;
	wc.lpszClassName = L"MyClass";
	wc.hCursor = LoadCursor(0,IDC_ARROW);
	wc.hInstance = hInstance;
	wc.lpfnWndProc = WndProc;

	if (!RegisterClass(&wc))
		return -1;

	CreateWindowW(L"MyClass", L"Calculator", WS_VISIBLE | WS_CAPTION | WS_SYSMENU | WS_MINIMIZEBOX, 100, 100, 300, 504, 0, 0, 0, 0);

	MSG msg = { 0 };

	while (GetMessage(&msg, 0, 0, 0)) {
		TranslateMessage(&msg);
		DispatchMessage(&msg);
	}

	return 0;
}


