#include <iostream>

#include <windows.h>

#include "Player.h"
#include "FileWork.h"
#include "UI.h"

#include "DATA.h"

int main()
{
    setlocale(LC_ALL, "Russian");
    int n = 4;

    while (n != 182)
    {
        std::cout << "0 - Play" << std::endl
            << "1 - Next" << std::endl
            << "2 - Stop" << std::endl
            << "3 - Play another track" << std::endl
            << "4 - Enter Path" << std::endl
            << "You: ";

        std::cin >> n;

        switch(n) {
        case 0 : Play();
                break;
        case 1 : Next();
                break;
        case 2 : Stop();
                break;
        case 3 : inputTrack();
                break;
        case 4 : inputPath();
                break;
        case 182 : return 0;
                break;
        }
    }

    std::cin >> n;

    return 0;
}
