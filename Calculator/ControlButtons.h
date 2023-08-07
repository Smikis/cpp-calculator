#pragma once
#include <Windows.h>

#define ZERO_PRESSED 0
#define ONE_PRESSED 17
#define TWO_PRESSED 2
#define THREE_PRESSED 3
#define FOUR_PRESSED 4
#define FIVE_PRESSED 5
#define SIX_PRESSED 6
#define SEVEN_PRESSED 7
#define EIGHT_PRESSED 8
#define NINE_PRESSED 9
#define DOT_PRESSED 10
#define ENTER_PRESSED 11
#define PLUS_PRESSED 12
#define MINUS_PRESSED 13
#define MULTIPLY_PRESSED 14
#define DIVIDE_PRESSED 15
#define DEL_PRESSED 19

#define OUTPUT_BOT 20
#define OUTPUT_TOP 21
#define OUTPUT_MID 22

HWND hOutputTop, hOutputBot, hOperator;
void AddControls(HWND hWnd) {

	HFONT hFontBot;
	hOutputBot = CreateWindowW(L"Edit", L"", WS_VISIBLE | WS_CHILD | ES_RIGHT | ES_READONLY| ES_AUTOHSCROLL | ES_NUMBER, 0, 50, 275, 50, hWnd, (HMENU)OUTPUT_BOT, 0, 0);
	hFontBot = CreateFont(50, 0, 0, 0, FW_DONTCARE, FALSE, FALSE, FALSE, ANSI_CHARSET, OUT_DEFAULT_PRECIS, CLIP_DEFAULT_PRECIS, DEFAULT_QUALITY, DEFAULT_PITCH | FF_SWISS, 0);
	SendMessage(hOutputBot, WM_SETFONT, WPARAM(hFontBot), TRUE);

	hOperator = CreateWindowW(L"Edit", L"", WS_VISIBLE | WS_CHILD | ES_RIGHT | ES_READONLY | ES_AUTOHSCROLL | ES_NUMBER, 0, 30, 275, 20, hWnd, (HMENU)OUTPUT_MID, 0, 0);

	HFONT hFontTop;
	hOutputTop = CreateWindowW(L"Edit", L"", WS_VISIBLE | WS_CHILD | ES_RIGHT| ES_READONLY | ES_AUTOHSCROLL | ES_NUMBER, 0, 0, 275, 30, hWnd, (HMENU)OUTPUT_TOP, 0, 0);
	hFontTop = CreateFont(30, 0, 0, 0, FW_DONTCARE, FALSE, FALSE, FALSE, ANSI_CHARSET, OUT_DEFAULT_PRECIS, CLIP_DEFAULT_PRECIS, DEFAULT_QUALITY, DEFAULT_PITCH | FF_SWISS, 0);
	SendMessage(hOutputTop, WM_SETFONT, WPARAM(hFontTop), TRUE);
	   
                                                        // x    y    W   H
	
	CreateWindowW(L"Button", L"0",     WS_VISIBLE | WS_CHILD,     0,   396, 144,72,  hWnd, (HMENU)ZERO_PRESSED,     0, 0);
	CreateWindowW(L"Button", L".",     WS_VISIBLE | WS_CHILD,     144, 396, 72, 72,  hWnd, (HMENU)DOT_PRESSED,      0, 0);
	CreateWindowW(L"Button", L"=",     WS_VISIBLE | WS_CHILD,     216, 324, 72, 144, hWnd, (HMENU)ENTER_PRESSED,    0, 0);
	CreateWindowW(L"Button", L"+",     WS_VISIBLE | WS_CHILD,     216, 180, 72, 144, hWnd, (HMENU)PLUS_PRESSED,     0, 0);
	CreateWindowW(L"Button", L"-",     WS_VISIBLE | WS_CHILD,     216, 108, 72, 72,  hWnd, (HMENU)MINUS_PRESSED,    0, 0);
	CreateWindowW(L"Button", L"×",     WS_VISIBLE | WS_CHILD,     144, 108, 72, 72,  hWnd, (HMENU)MULTIPLY_PRESSED, 0, 0);
	CreateWindowW(L"Button", L"÷",     WS_VISIBLE | WS_CHILD,     72,  108, 72, 72,  hWnd, (HMENU)DIVIDE_PRESSED,   0, 0);
	CreateWindowW(L"Button", L"DEL",   WS_VISIBLE | WS_CHILD,     0,   108, 72, 72,  hWnd, (HMENU)DEL_PRESSED,      0, 0);
	CreateWindowW(L"Button", L"9",     WS_VISIBLE | WS_CHILD,     144, 180, 72, 72,  hWnd, (HMENU)NINE_PRESSED,     0, 0);
	CreateWindowW(L"Button", L"8",     WS_VISIBLE | WS_CHILD,     72,  180, 72, 72,  hWnd, (HMENU)EIGHT_PRESSED,    0, 0);
	CreateWindowW(L"Button", L"7",     WS_VISIBLE | WS_CHILD,     0,   180, 72, 72,  hWnd, (HMENU)SEVEN_PRESSED,    0, 0);
	CreateWindowW(L"Button", L"6",     WS_VISIBLE | WS_CHILD,     144, 252, 72, 72,  hWnd, (HMENU)SIX_PRESSED,      0, 0);
	CreateWindowW(L"Button", L"5",     WS_VISIBLE | WS_CHILD,     72,  252, 72, 72,  hWnd, (HMENU)FIVE_PRESSED,     0, 0);
	CreateWindowW(L"Button", L"4",     WS_VISIBLE | WS_CHILD,     0,   252, 72, 72,  hWnd, (HMENU)FOUR_PRESSED,     0, 0);
	CreateWindowW(L"Button", L"3",     WS_VISIBLE | WS_CHILD,     144, 324, 72, 72,  hWnd, (HMENU)THREE_PRESSED,    0, 0);
	CreateWindowW(L"Button", L"2",     WS_VISIBLE | WS_CHILD,     72,  324, 72, 72,  hWnd, (HMENU)TWO_PRESSED,      0, 0);
	CreateWindowW(L"Button", L"1",     WS_VISIBLE | WS_CHILD,     0,   324, 72, 72,  hWnd, (HMENU)ONE_PRESSED,      0, 0);
}
