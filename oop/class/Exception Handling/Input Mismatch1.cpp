// Input Mismatch
#include <iostream>

int main()
{
    int no;

    try
    {
        std::cout << "Input No:";
        std::cin >> no;
        if (std::cin.fail())
            throw "Input must be integer.";
    }
    catch (const char *msg)
    {
        std::cout << "Error: " << msg << std::endl;
    }

    return 0;
}
