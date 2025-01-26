#include <iostream>
#include <fstream>

int main()
{
    std::ofstream out("ryan.txt", std::ios::out);
    //	out.open("ryan.txt", std::ios::out);
    if (!out)
    {
        std::cout << "File not opened" << std::endl;
        exit(1);
    }

    char name[50];
    for (int i = 0; i < 5; i++)
    {
        std::cout << "input name: ";
        std::cin.getline(name, 50);

        out << "name: " << name << std::endl;
    }

    out.close();

    return 0;
}
