#pragma once
#include <Windows.h>
#include <string>
#include "ControlButtons.h"
#include "Calculations.h"

std::wstring concatted_str = L"";
std::string op = "";
int dotPressed = 0, plusPressed = 0, minusPressed = 0, dividePressed = 0, multiplyPressed = 0;

LRESULT CALLBACK WndProc(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam) {
	switch (msg) {
	case WM_CREATE:
		AddControls(hWnd);
		break;
		// KEYBOARD INPUT
	case WM_KEYDOWN:
		switch (wParam) {
		case VK_NUMPAD0:
			SendMessage(hWnd, WM_COMMAND, ZERO_PRESSED, 0);
			break;
		case VK_NUMPAD1:
			SendMessage(hWnd, WM_COMMAND, ONE_PRESSED, 0);
			break;
		case VK_NUMPAD2:
			SendMessage(hWnd, WM_COMMAND, TWO_PRESSED, 0);
			break;
		case VK_NUMPAD3:
			SendMessage(hWnd, WM_COMMAND, THREE_PRESSED, 0);
			break;
		case VK_NUMPAD4:
			SendMessage(hWnd, WM_COMMAND, FOUR_PRESSED, 0);
			break;
		case VK_NUMPAD5:
			SendMessage(hWnd, WM_COMMAND, FIVE_PRESSED, 0);
			break;
		case VK_NUMPAD6:
			SendMessage(hWnd, WM_COMMAND, SIX_PRESSED, 0);
			break;
		case VK_NUMPAD7:
			SendMessage(hWnd, WM_COMMAND, SEVEN_PRESSED, 0);
			break;
		case VK_NUMPAD8:
			SendMessage(hWnd, WM_COMMAND, EIGHT_PRESSED, 0);
			break;
		case VK_NUMPAD9:
			SendMessage(hWnd, WM_COMMAND, NINE_PRESSED, 0);
			break;
		case VK_ESCAPE:
			SendMessage(hWnd, WM_COMMAND, DEL_PRESSED, 0);
			break;
		case VK_RETURN:
			SendMessage(hWnd, WM_COMMAND, ENTER_PRESSED, 0);
			break;
		case VK_ADD:
			SendMessage(hWnd, WM_COMMAND, PLUS_PRESSED, 0);
			break;
		case VK_SUBTRACT:
			SendMessage(hWnd, WM_COMMAND, MINUS_PRESSED, 0);
			break;
		case VK_DIVIDE:
			SendMessage(hWnd, WM_COMMAND, DIVIDE_PRESSED, 0);
			break;
		case VK_MULTIPLY:
			SendMessage(hWnd, WM_COMMAND, MULTIPLY_PRESSED, 0);
			break;
		case VK_DECIMAL:
			SendMessage(hWnd, WM_COMMAND, DOT_PRESSED, 0);
			break;
		}
		break;
		// BUTTON INPUT
	case WM_COMMAND:
		switch (wParam) {
		case ZERO_PRESSED:
			if (GetWindowTextLength(hOutputBot) == 0) {
				SetWindowTextW(hOutputBot, L"0.");
				concatted_str = L"0.";
				dotPressed = 1;
			}
			else {
				std::wstring NumberPressed(L"0");
				if (concatted_str == L"") concatted_str = NumberPressed;
				else concatted_str = concatted_str + NumberPressed;
				std::wstring mywstring(concatted_str);
				LPCWSTR concatted = concatted_str.c_str();
				SetWindowTextW(hOutputBot, concatted);
			}
			break;
		case ONE_PRESSED:
			if (GetWindowTextLength(hOutputBot) == 0) {
				SetWindowTextW(hOutputBot, L"1");
				concatted_str = L"1";
			}
			else {
				std::wstring NumberPressed(L"1");
				if (concatted_str == L"") concatted_str = NumberPressed;
				else concatted_str = concatted_str + NumberPressed;
				std::wstring mywstring(concatted_str);
				LPCWSTR concatted = concatted_str.c_str();
				SetWindowTextW(hOutputBot, concatted);
			}
			break;
		case TWO_PRESSED:
			if (GetWindowTextLength(hOutputBot) == 0) {
				SetWindowTextW(hOutputBot, L"2");
				concatted_str = L"2";
			}
			else {
				std::wstring NumberPressed(L"2");
				if (concatted_str == L"") concatted_str = NumberPressed;
				else concatted_str = concatted_str + NumberPressed;
				std::wstring mywstring(concatted_str);
				LPCWSTR concatted = concatted_str.c_str();
				SetWindowTextW(hOutputBot, concatted);
			}
			break;
		case THREE_PRESSED:
			if (GetWindowTextLength(hOutputBot) == 0) {
				SetWindowTextW(hOutputBot, L"3");
				concatted_str = L"3";
			}
			else {
				std::wstring NumberPressed(L"3");
				if (concatted_str == L"") concatted_str = NumberPressed;
				else concatted_str = concatted_str + NumberPressed;
				std::wstring mywstring(concatted_str);
				LPCWSTR concatted = concatted_str.c_str();
				SetWindowTextW(hOutputBot, concatted);
			}
			break;
		case FOUR_PRESSED:
			if (GetWindowTextLength(hOutputBot) == 0) {
				SetWindowTextW(hOutputBot, L"4");
				concatted_str = L"4";
			}
			else {
				std::wstring NumberPressed(L"4");
				if (concatted_str == L"") concatted_str = NumberPressed;
				else concatted_str = concatted_str + NumberPressed;
				std::wstring mywstring(concatted_str);
				LPCWSTR concatted = concatted_str.c_str();
				SetWindowTextW(hOutputBot, concatted);
			}
			break;
		case FIVE_PRESSED:
			if (GetWindowTextLength(hOutputBot) == 0) {
				SetWindowTextW(hOutputBot, L"5");
				concatted_str = L"5";
			}
			else {
				std::wstring NumberPressed(L"5");
				if (concatted_str == L"") concatted_str = NumberPressed;
				else concatted_str = concatted_str + NumberPressed;
				std::wstring mywstring(concatted_str);
				LPCWSTR concatted = concatted_str.c_str();
				SetWindowTextW(hOutputBot, concatted);
			}
			break;
		case SIX_PRESSED:
			if (GetWindowTextLength(hOutputBot) == 0) {
				SetWindowTextW(hOutputBot, L"6");
				concatted_str = L"6";
			}
			else {
				std::wstring NumberPressed(L"6");
				if (concatted_str == L"") concatted_str = NumberPressed;
				else concatted_str = concatted_str + NumberPressed;
				std::wstring mywstring(concatted_str);
				LPCWSTR concatted = concatted_str.c_str();
				SetWindowTextW(hOutputBot, concatted);
			}
			break;
		case SEVEN_PRESSED:
			if (GetWindowTextLength(hOutputBot) == 0) {
				SetWindowTextW(hOutputBot, L"7");
				concatted_str = L"7";
			}
			else {
				std::wstring NumberPressed(L"7");
				if (concatted_str == L"") concatted_str = NumberPressed;
				else concatted_str = concatted_str + NumberPressed;
				std::wstring mywstring(concatted_str);
				LPCWSTR concatted = concatted_str.c_str();
				SetWindowTextW(hOutputBot, concatted);
			}
			break;
		case EIGHT_PRESSED:
			if (GetWindowTextLength(hOutputBot) == 0) {
				SetWindowTextW(hOutputBot, L"8");
				concatted_str = L"8";
			}
			else {
				std::wstring NumberPressed(L"8");
				if (concatted_str == L"") concatted_str = NumberPressed;
				else concatted_str = concatted_str + NumberPressed;
				std::wstring mywstring(concatted_str);
				LPCWSTR concatted = concatted_str.c_str();
				SetWindowTextW(hOutputBot, concatted);
			}
			break;
		case NINE_PRESSED:
			if (GetWindowTextLength(hOutputBot) == 0) {
				SetWindowTextW(hOutputBot, L"9");
				concatted_str = L"9";
			}
			else {
				std::wstring NumberPressed(L"9");
				if (concatted_str == L"") concatted_str = NumberPressed;
				else concatted_str = concatted_str + NumberPressed;
				std::wstring mywstring(concatted_str);
				LPCWSTR concatted = concatted_str.c_str();
				SetWindowTextW(hOutputBot, concatted);
			}
			break;
		case DEL_PRESSED:
			SetWindowTextW(hOutputBot, L"");
			SetWindowTextW(hOperator, L"");
			SetWindowTextW(hOutputTop, L"");
			concatted_str = L"";
			dotPressed = 0;
			plusPressed = 0;
			minusPressed = 0;
			dividePressed = 0;
			multiplyPressed = 0;
			break;
		case DOT_PRESSED:
			if (GetWindowTextLength(hOutputBot) == 0) {
				SetWindowTextW(hOutputBot, L"0.");
				concatted_str = L"0.";
				dotPressed = 1;
			}
			else {
				if (dotPressed == 0) {
					dotPressed++;
					std::wstring NumberPressed(L".");
					concatted_str = concatted_str + NumberPressed;
					std::wstring mywstring(concatted_str);
					LPCWSTR concatted = concatted_str.c_str();
					SetWindowTextW(hOutputBot, concatted);
				}
			}
			break;
		case ENTER_PRESSED: // EQUALS SIGN
		{
			if (op == "+") {
				add();
			}
			if (op == "-") {
				minus();
			}
			if (op == "÷") {
				divide();
			}
			if (op == "×") {
				multiply();
			}
			SetWindowTextW(hOutputTop, L"");
			SetWindowTextW(hOperator, L"");
			concatted_str = L"";
			dotPressed = 0;
			plusPressed = 0;
			minusPressed = 0;
			dividePressed = 0;
			multiplyPressed = 0;
		}
		break;
		case PLUS_PRESSED:
			if (plusPressed == 0) {
				SetWindowTextW(hOperator, L"+");
				TCHAR botNumber[1024];
				GetWindowTextW(hOutputBot, botNumber, sizeof(botNumber));
				SetWindowTextW(hOutputTop, botNumber);
				SetWindowTextW(hOutputBot, L"");
				concatted_str = L"";
				dotPressed = 0;
				dotPressed = 0;
				minusPressed = 0;
				dividePressed = 0;
				multiplyPressed = 0;
				op = "+";
				plusPressed++;
			}
			break;
		case MINUS_PRESSED:
			if (minusPressed == 0) {
				SetWindowTextW(hOperator, L"-");
				TCHAR botNumber[1024];
				GetWindowTextW(hOutputBot, botNumber, sizeof(botNumber));
				SetWindowTextW(hOutputTop, botNumber);
				SetWindowTextW(hOutputBot, L"");
				concatted_str = L"";
				dotPressed = 0;
				dotPressed = 0;
				plusPressed = 0;
				dividePressed = 0;
				multiplyPressed = 0;
				op = "-";
				minusPressed++;
			}
			break;
		case DIVIDE_PRESSED:
			if (dividePressed == 0) {
				SetWindowTextW(hOperator, L"÷");
				TCHAR botNumber[1024];
				GetWindowTextW(hOutputBot, botNumber, sizeof(botNumber));
				SetWindowTextW(hOutputTop, botNumber);
				SetWindowTextW(hOutputBot, L"");
				concatted_str = L"";
				dotPressed = 0;
				dotPressed = 0;
				plusPressed = 0;
				minusPressed = 0;
				multiplyPressed = 0;
				op = "÷";
				dividePressed++;
			}
			break;
		case MULTIPLY_PRESSED:
			if (multiplyPressed == 0) {
				SetWindowTextW(hOperator, L"×");
				TCHAR botNumber[1024];
				GetWindowTextW(hOutputBot, botNumber, sizeof(botNumber));
				SetWindowTextW(hOutputTop, botNumber);
				SetWindowTextW(hOutputBot, L"");
				concatted_str = L"";
				dotPressed = 0;
				dotPressed = 0;
				plusPressed = 0;
				minusPressed = 0;
				dividePressed = 0;
				op = "×";
				multiplyPressed++;
			}
			break;
			SendMessage(hOutputBot, EM_SETSEL, 0, -1);
			SendMessage(hOutputBot, EM_SETSEL, -1, -1);
		}
		break;
	case WM_CLOSE:
		PostQuitMessage(0);
		break;
	default:
		return DefWindowProc(hWnd, msg, wParam, lParam);
		break;
	}
	::SetFocus(hWnd);
}