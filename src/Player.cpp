#include <iostream>
#include <string>

#include <windows.h>

#include "Player.h"
#include "DATA.h"
#include "FileWork.h"

std::string PATHMUSIC = ":D";

void Play(std::string name)
{
    std::string path = (PATHMUSIC + "/" + name);
    //PlaySound(stringConversionCC(path), NULL, SND_ASYNC | SND_FILENAME);
    PlaySound(path.c_str(), NULL, SND_ASYNC | SND_FILENAME);
}

void inputPath()
{
    std::string path;
    std::cout << "Path: ";
    std::cin >> path;
    setPath(path);
}

void setPath(std::string path)
{
    PATHMUSIC = path;
}

