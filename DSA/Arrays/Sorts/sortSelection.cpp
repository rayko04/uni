#include <iostream>
#include <vector>

int main()
{
    std::vector<int> vec{100, -23, 333, 44, 56};

    for (std::size_t i{0}; i < vec.size() - 1; i++)
    {
        std::size_t min{i};
        for (std::size_t j{i + 1}; j < vec.size(); j++)
        {
            if (vec[j] < vec[min])
                min = j;
        }
        std::swap(vec[min], vec[i]);
    }

    for (auto value : vec)
    {
        std::cout << value << " ";
    }

    return 0;
}
