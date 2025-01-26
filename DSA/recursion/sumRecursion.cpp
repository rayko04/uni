#include <iostream>

int sumf(int arr[], std::size_t size)
{
    if (size == 1)
        return arr[size - 1]; // arr[0]

    return sumf(arr, size - 1) + arr[size - 1];
}

int main()
{
    constexpr std::size_t size{10};
    int arr[size]{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::cout << sumf(arr, size);

    return 0;
}
