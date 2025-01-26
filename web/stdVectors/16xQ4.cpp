#include <iostream>
#include <vector>
#include <limits>
#include <utility>

template <typename T>
std::pair<size_t, size_t> minMaxIndex(const std::vector<T> &arr)
{
    size_t min{0};
    size_t max{0};
    for (size_t i = 0; i < std::size(arr); i++)
    {
        if (arr[i] < arr[min])
            min = i;
        if (arr[i] > arr[max])
            max = i;
    }

    return {min, max};
}

template <typename T>
void print(const std::vector<T> &arr, const std::pair<size_t, size_t> &p)
{
    std::cout << "With array ( ";
    for (size_t i = 0; i < std::size(arr); i++)
    {
        if (i == std::size(arr) - 1)
            std::cout << arr[i] << " ) :\n";
        else
            std::cout << arr[i] << ", ";
    }

    std::cout << "The min element has index " << p.first << " and value " << arr[p.first] << std::endl;
    std::cout << "The max element has index " << p.second << " and value " << arr[p.second] << std::endl;
}

int main()
{
    std::vector<int> v1{};
    std::cout << "Enter number to add (use -1 to stop): ";
    while (true)
    {
        int value;
        std::cin >> value;

        if (value == -1)
            break;

        if (!std::cin)
        {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            continue;
        }

        v1.push_back(value);
    }

    if (v1.size() == 0)
        std::cout << "Array is empty.\n";
    else
    {
        std::pair p1{minMaxIndex(v1)};
        print(v1, p1);
    }

    return 0;
}
