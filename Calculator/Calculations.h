#pragma once
#include <cmath>
#include <Windows.h>
#include <limits>
#include "ControlButtons.h"
#include <sstream>

void multiply() {
	WCHAR A[20], B[20];

	GetWindowText(hOutputBot, A, 20);
	GetWindowText(hOutputTop, B, 20);

	double Aa = std::stof(A);
	double Bb = std::stof(B);
	
	double Res = Bb * Aa;

	std::wstringstream ss;  ss << Res;
	std::wstring s;         ss >> s; 

	LPCWSTR str = s.c_str();

	SetWindowTextW(hOutputBot, str);
}

void add() {

	double Res;
	WCHAR A[20], B[20];

	GetWindowText(hOutputBot, A, 20);
	GetWindowText(hOutputTop, B, 20);

	double Aa = std::stof(A);
	double Bb = std::stof(B);

	Res = Aa + Bb;

	std::wstringstream ss;  ss << Res;
	std::wstring s;         ss >> s;

	LPCWSTR str = s.c_str();

	SetWindowTextW(hOutputBot, str);

}

void minus() {
	double Res;
	WCHAR A[20], B[20];

	GetWindowText(hOutputBot, A, 20);
	GetWindowText(hOutputTop, B, 20);

	double Aa = std::stof(A);
	double Bb = std::stof(B);

	Res = Bb - Aa;

	std::wstringstream ss;  ss << Res;
	std::wstring s;         ss >> s;

	LPCWSTR str = s.c_str();

	SetWindowTextW(hOutputBot, str);
}

void divide() {
	double Res;
	WCHAR A[20], B[20];

	GetWindowText(hOutputBot, A, 20); 
	GetWindowText(hOutputTop, B, 20);

	double Aa = std::stof(A);
	double Bb = std::stof(B);

	Res = Bb / Aa;

	std::wstringstream ss;  ss << Res;
	std::wstring s;         ss >> s;

	LPCWSTR str = s.c_str();

	SetWindowTextW(hOutputBot, str);
}