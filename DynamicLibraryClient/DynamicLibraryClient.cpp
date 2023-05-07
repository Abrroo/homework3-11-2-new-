#include <string>
#include <iostream>
#include "LeaverDynamicLib.h"

int main()
{
    std::string name;
    std::cout << "Napishite Imya: ";
    std::cin >> name;
    Leaver message;
    message.leave(name);
    return 0;
}
