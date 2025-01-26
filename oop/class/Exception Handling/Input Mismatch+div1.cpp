// Input Mismatch + division
#include <iostream>

int main()
{
    int no, no2;

    try
    {
        std::cout << "Input No:";
        std::cin >> no;
        if (std::cin.fail())
            throw "Input must be integer.";

        std::cout << "Input No:";
        std::cin >> no2;
        if (std::cin.fail())
            throw "Input must be an integer.";
        if (no2 == 0)
            throw "Division by 0.";

        std::cout << "Division: " << (static_cast<float>(no)) / no2 << std::endl; // if write after catch will cout always even when input mismatch
    }

    // std::cout << "Division: " << static_cast<float>(no1/no2) << std::endl; // catch must follow try

    catch (const char *msg)
    {
        std::cout << "Error: " << msg << std::endl;
    }

    return 0;
}
