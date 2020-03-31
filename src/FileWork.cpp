#include <iostream>
#include <string>

#include <windows.h>

void LookAtFiles()
{
    std::cout << "Enter Path" << std::endl;

    std::string path;
    std::wstring pathToL;

    std::cin >> path;
    path = path + "\\*";

    //convert string to wchar_t
    for(int i = 0; i < path.length(); ++i)
        pathToL += wchar_t( path[i] );

    const wchar_t* Lpath = pathToL.c_str();

    WIN32_FIND_DATAW wfd;

    HANDLE const hFind = FindFirstFileW(Lpath, &wfd);

    if (INVALID_HANDLE_VALUE != hFind)
    {
        do
        {
            std::wcout << &wfd.cFileName[0] << std::endl;
        } while (NULL != FindNextFileW(hFind, &wfd));

        FindClose(hFind);
    }

    std::cout << std::endl;

}
