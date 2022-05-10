#include <iostream>
#include <windows.h>
#include <cstdlib>
using namespace std;

int main()
{
	SYSTEMTIME st;
	while (true) 
	{
		GetLocalTime(&st);
		cout << "Days: " << st.wDay << "\n" << "Month: " << st.wMonth << "\n" << "Year: " << st.wYear << "\n";
		cout << "Hours: " << st.wHour << "\n" << "Minutes: " << st.wMinute << "\n" << "Seconds: " << st.wSecond << "\n";

		Sleep(1000);
		system("cls");

	}
}
