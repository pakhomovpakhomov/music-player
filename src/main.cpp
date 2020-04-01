#include <iostream>

#include <windows.h>

#include "..\libs\curses.h"

#include "Player.h"
#include "FileWork.h"


#include "DATA.h"

int main()
{
    inputPath();

    std::cout << "Name: ";
    std::string name;
    std::cin >> name;

    Play(name);

    int n = 0;
    std::cout << "Enter to exit";
    std::cin >> n;

    return 0;
}

