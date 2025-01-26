#include <iostream>
#include <fstream>

int main()
{
    std::ofstream out("ryan.txt", std::ios::out);
    if (!out)
    {
        std::cout << "File not found" << std::endl;
        exit(1);
    }

    std::ifstream in("ryan.txt", std::ios::in);
    if (!in)
    {
        std::cout << "File not found" << std::endl;
        exit(1);
    }

    char line[10000];
    int count = 0;
    while (!in.eof())
    {
        in.getline(line, 10000);
        if (line[0] == 'T' || line[0] == 'i')
        {
            count++;
            std::cout << line << std::endl;
        }
    }
    std::cout << count;

    out.close();
    in.close();
    return 0;
}
