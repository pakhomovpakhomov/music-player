#include <iostream>
#include <string>
#include <vector>

#include <windows.h>

#include "Player.h"
#include "DATA.h"
#include "FileWork.h"

std::wstring PATHMUSIC = L"";

std::vector<std::wstring> arr;

int trackNum = 0;
//TODO: MaxTracks + functions

void Play()
{

    std::wstring path = (PATHMUSIC + L"/") + arr[trackNum];
    trackNum++;
    PlaySoundW(path.c_str(), NULL, SND_ASYNC | SND_FILENAME);
}

void Play(std::wstring name)
{
    trackNum = 0;
    std::wstring path = (PATHMUSIC + L"/") + name;
    PlaySoundW(path.c_str(), NULL, SND_ASYNC | SND_FILENAME);
}

void Pause()
{
    PlaySound(NULL, NULL, SND_ASYNC | SND_FILENAME);
}

void Next()
{
    Pause();
    Play();
}

void setPath(std::wstring path)
{
    PATHMUSIC = path;
}

std::wstring getPath()
{
    return PATHMUSIC;
}

void addTrack(std::wstring file)
{
   arr.push_back(file);
}
