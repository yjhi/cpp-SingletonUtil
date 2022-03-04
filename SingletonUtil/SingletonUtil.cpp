// SingletonUtil.cpp : 定义 DLL 的导出函数。
//

#include "pch.h"
#include "framework.h"
#include "SingletonUtil.h"

SINGLETONUTIL_API bool __stdcall SetSingleApp(const char * lock)
{

	HANDLE hSem = CreateSemaphore(NULL, 1, 1, lock);


	if (GetLastError() == ERROR_ALREADY_EXISTS)
	{
		return false;
	}

	return true;
}


SINGLETONUTIL_API bool __stdcall SetSingleAndTopApp(const char * lock, const char *data, int type)
{
	HANDLE hSem = CreateSemaphore(NULL, 1, 1, lock);

	if (GetLastError() == ERROR_ALREADY_EXISTS)
	{
		HWND h = NULL;

		if (type == 1)
		{
			h = ::FindWindow(NULL, data);
		}
		else {
			h = ::FindWindow(data, NULL);
		}

		if (h)
		{
			ShowWindow(h, SW_SHOWNORMAL | SW_NORMAL | SW_RESTORE);
			SetForegroundWindow(h);
		}

		return false;

	}

	return true;


}