#include <iostream>
#include <fstream>

int main()
{
    std::ifstream in("ryan.txt", std::ios::in);
    if (!in)
    {
        std::cout << "File not found" << std::endl;
    }

    char line[100];
    int count = 0;
    while (!in.eof())
    {
        in.getline(line, 100);
        if (line[0] == 'n' || line[0] == 'N')
        {
            count++;
            std::cout << line << std::endl;
        }
    }
    std::cout << count;

    in.close();
    return 0;
}
