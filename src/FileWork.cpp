#include <iostream>
#include <string>

#include <windows.h>

#include "FileWork.h"
#include "Player.h"

void LookAtFiles()
{
    std::wstring path = getPath() + L"\\*.wav";
    std::wstring pathToL;


    //convert string to wchar_t
    //for(int i = 0; i < path.length(); ++i)
    //    pathToL += wchar_t( path[i] );

    const wchar_t* Lpath = path.c_str();

    WIN32_FIND_DATAW wfd;

    HANDLE const hFind = FindFirstFileW(Lpath, &wfd);

    if (INVALID_HANDLE_VALUE != hFind)
    {
        do
        {
            std::wcout << &wfd.cFileName[0] << std::endl;

            //std::cout << "FILE GET" << std::endl;
        } while (NULL != FindNextFileW(hFind, &wfd));

        FindClose(hFind);
    }

    std::cout << std::endl;
}

void SaveFiles()
{
    std::wstring path = getPath() + L"\\*.wav";

    const wchar_t* Lpath = path.c_str();

    WIN32_FIND_DATAW wfd;

    HANDLE const hFind = FindFirstFileW(Lpath, &wfd);

    std::cout << std::endl << "TRACKS:" << std::endl;

    if (INVALID_HANDLE_VALUE != hFind)
    {
        do
        {
            addTrack(&wfd.cFileName[0]);
            std::wcout << &wfd.cFileName[0] << std::endl;
        } while (NULL != FindNextFileW(hFind, &wfd));

        FindClose(hFind);
    }

    std::cout << std::endl;
}

const char* stringConversionCC(std::string line)
{
    return line.c_str();
}
