#include <iostream>
#include <vector>

int main()
{
    std::vector<int> vec{100, 23, 3, 45, 5};

    for (std::size_t i{1}; i < vec.size(); i++)
    {
        std::size_t j{i - 1};
        auto key{vec[i]};

        while (static_cast<int>(j) >= 0 && vec[j] > key)
        {
            vec[j + 1] = vec[j];
            j--;
        }

        vec[j + 1] = key;
    }

    for (auto val : vec)
    {
        std::cout << val << " ";
    }

    return 0;
}
