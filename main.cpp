#include <Windows.h>

int CALLBACK WinMain( HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow )
{
	HWND hwnd = FindWindow( NULL, "Starcraft II" );

	if ( hwnd == 0 )
		hwnd = FindWindow( NULL, "StarCraft II Beta" );

	if ( hwnd == 0 )
		return 0;

	RECT rect;
	GetWindowRect( hwnd, &rect );

	rect.right  = rect.left + 1920;
	rect.bottom = rect.top + 1080;

	if ( AdjustWindowRect( &rect, WS_OVERLAPPEDWINDOW, FALSE ) )
		MoveWindow( hwnd, rect.left, rect.top, rect.right - rect.left, rect.bottom - rect.top, TRUE );

	return 0;
}
