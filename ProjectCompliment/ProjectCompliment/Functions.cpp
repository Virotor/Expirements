#include "Functions.h"
#include <vector>

#include <ctime>
#include <sstream>
#include <conio.h>
#include <Windows.h>
#include <iostream>



std::string GetCompliment()
{
	std::string adjectives[3]{ "Лучший", "Крутой", "Забивной" };
	std::string nouns[3]{ "Виктор", "Виктор", "Виктор" };
	std::string additions[3]{ "я в шоке просто", "как копировать в буфер", "помогите" };

	return adjectives[rand() % 3] + " " + nouns[rand() % 3] + ", " + additions[rand() % 3];
}



void writeClipdoard(std:: string data)
{
	HWND s = NULL;
	HGLOBAL hgBuffer;
	if (!OpenClipboard(s))
	{
		return;
	}
	EmptyClipboard();
	char* chBuffer;
	hgBuffer = GlobalAlloc(GMEM_DDESHARE, data.size());
	chBuffer = (char*)GlobalLock(hgBuffer);
	strcpy(chBuffer, data.c_str());
	GlobalUnlock(hgBuffer);
	SetClipboardData(CF_TEXT, hgBuffer);
	CloseClipboard();

}

std:: string readClipboard()
{
	std::string dataFromClipboard;
	HWND s = NULL;
	if (!OpenClipboard(s))
	{
		return "";
	}
	HANDLE hData = GetClipboardData(CF_TEXT);
	char* chBuffer = (char*)GlobalLock(hData);
	dataFromClipboard = chBuffer;
	GlobalUnlock(hData);
	CloseClipboard;
	return dataFromClipboard;
	return "";
}
