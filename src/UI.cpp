#include "UI.h"
#include <iostream>
#include <string>

#include "Player.h"
#include "FileWork.h"


void inputPath()
{
    std::wstring path;
    std::cout << "Path: ";
    std::wcin >> path;
    setPath(path);
    SaveFiles();
}

void inputTrack()
{
    //void Play(std::wstring name);
    std::cout << "Enter TrackName: ";
    std::wstring name;
    std::wcin >> name;
    Play(name);
}

