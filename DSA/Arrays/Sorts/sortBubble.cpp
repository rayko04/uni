#include <iostream>
#include <vector>

int main()
{
    std::vector<int> vec{100, -23, 333, 44, 56};

    for (std::size_t i{0}; i < vec.size() - 1; i++)
    {
        for (std::size_t j{0}; j < vec.size() - 1 - i; j++)
        {
            if (vec[j] > vec[j + 1])
                std::swap(vec[j], vec[j + 1]);
        }
    }

    for (auto value : vec)
    {
        std::cout << value << " ";
    }

    return 0;
}
