#include <iostream>
#include <vector>
bool ascending(int x, int y)
{
    return x > y;
}

bool decending(int x, int y)
{
    return x < y;
}

void bibbleSort(std::vector<int>& vec, bool(*funPtr)(int, int) = &ascending)
{
    for (std::size_t i{0}; i < vec.size() - 1; i++)
    {
        for (std::size_t j{0}; j < vec.size() - 1 - i; j++)
        {
            if (funPtr(vec[j+1], vec[j]))
                std::swap(vec[j], vec[j + 1]);
        }
    }
}



int main()
{
    std::vector<int> vec{100, -23, 333, 44, 56};

    bibbleSort(vec, &ascending);

    for (auto value : vec)
    {
        std::cout << value << " ";
    }

    bibbleSort(vec, &decending);

    for (auto value : vec)
    {
        std::cout << value << " ";
    }
    return 0;
}
