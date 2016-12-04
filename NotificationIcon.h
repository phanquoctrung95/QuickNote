#pragma once
#include"resource.h"
class NotificationIcon
{
	NOTIFYICONDATA	niData;
public:
	NotificationIcon();
	NotificationIcon(HWND hWnd, HINSTANCE hInstance);
	virtual ~NotificationIcon();
	// Forward declarations of functions included in this code module:
	BOOL				InitInstance(HINSTANCE, int);
	BOOL				OnInitDialog(HWND hWnd, HINSTANCE hInst);
	void				ShowContextMenu(HWND hWnd);
	ULONGLONG			GetDllVersion(LPCTSTR lpszDllName);
	BOOL Create(HWND hWnd, HINSTANCE hInstance);
};

