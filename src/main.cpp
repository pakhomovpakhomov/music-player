#include <iostream>

#include <windows.h>

#include "..\libs\curses.h"
#include "FileWork.h"

int main()
{
    LookAtFiles();

    std::string path;
    std::cin >> path;

    const char* CCpath = path.c_str();
    PlaySound(CCpath, NULL, SND_ASYNC | SND_FILENAME);

    int n = 0;

    std::cout << "Enter to exit";
    std::cin >> n;

    return 0;
}
