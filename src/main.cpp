#include <iostream>

#include <windows.h>


#include "Player.h"
#include "FileWork.h"
#include "UI.h"

#include "DATA.h"

int main()
{
    setlocale(LC_ALL, "Russian");
    int n;

    inputPath();

    SaveFiles();

    Play();

    Sleep(5000);

    Next();

    Sleep(5000);

    Play(L"atl.wav");

    std::cin >> n;

    return 0;
}

