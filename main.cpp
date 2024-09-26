#include <windows.h>

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nShowCmd) {
    MessageBox(NULL, "It's OK", "Notification", MB_OK | MB_ICONINFORMATION);
    return 0;
}