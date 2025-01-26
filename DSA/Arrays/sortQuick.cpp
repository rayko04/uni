#include <iostream>
#include <vector>
#include <limits>

std::size_t Partition(std::vector<int> &vec, std::size_t l, std::size_t h)
{
    auto pivot{vec[l]};
    std::size_t i{l}, j{h};

    while (i < j)
    {
        do
        {
            i++;
        } while (vec[i] <= pivot);

        do
        {
            j--;
        } while (vec[j] > pivot);

        if (i < j)
            std::swap(vec[i], vec[j]);
    }
    std::swap(vec[l], vec[j]);

    return j;
}

void quickSort(std::vector<int> &vec, std::size_t l, std::size_t h)
{
    if (l < h)
    {
        auto pivot{Partition(vec, l, h)};
        quickSort(vec, l, pivot);
        quickSort(vec, pivot + 1, h);
    }
}

int main()
{
    std::vector<int> vec{100, 23, 43, 333, 57, 6453, 87, 3};

    quickSort(vec, 0, vec.size()); // not vec.size-1 because h is exclusive and infinite
    for (auto val : vec)
    {
        std::cout << val << " ";
    }

    return 0;
}
