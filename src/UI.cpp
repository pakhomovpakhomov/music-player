#include "UI.h"
#include <iostream>
#include <string>

#include "Player.h"


void inputPath()
{
    std::wstring path;
    std::cout << "Path: ";
    std::wcin >> path;
    setPath(path);
}
