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
int MAXTRACKS = 0;

void Play()
{
    std::cout << "START PLAY()" << std::endl;
    //Stop();
    std::wstring path = (PATHMUSIC + L"/") + arr[trackNum];
    std::cout << "GOVNO FINISH" << std::endl;
    iteratorPlus();
    PlaySoundW(path.c_str(), NULL, SND_ASYNC | SND_FILENAME);
}

void Play(std::wstring name)
{
    Stop();
    trackNum = 0;
    std::wstring path = (PATHMUSIC + L"/") + name;
    PlaySoundW(path.c_str(), NULL, SND_ASYNC | SND_FILENAME);
}

void Stop()
{
    iteratorMinus();
    PlaySound(NULL, NULL, SND_ASYNC | SND_FILENAME);
}

void Next()
{
    Play();
}

void setPath(std::wstring path)
{
    trackNum = 0;
    PATHMUSIC = path;
}

std::wstring getPath()
{
    return PATHMUSIC;
}

void addTrack(std::wstring file)
{
    MAXTRACKS++;
    arr.push_back(file);
}

void iteratorPlus()
{
    if(trackNum < (MAXTRACKS - 1))
    {
        trackNum++;
    } else
        trackNum = 0;
}

void iteratorMinus()
{
    if(trackNum > 0)
    {
        trackNum--;
    }
}
