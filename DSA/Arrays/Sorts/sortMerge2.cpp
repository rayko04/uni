#include <iostream>
#include <vector>

void merge(int arr[], std::size_t l, std::size_t mid, std::size_t h)
{
    std::vector<int> vec(h-l+1);
    std::size_t i{l}, j{mid+1}, k{0};

    while(i <= mid && j <= h)
    {
        if(arr[i] <= arr[j])
            vec[k++] = arr[i++];
        else
            vec[k++] = arr[j++];
    }

    while(i <= mid)
    {
        vec[k++] = arr[i++];
    }
    while(j <= h)
    {
        vec[k++] = arr[j++];
    }

    for(std::size_t s{0}; s < k; s++)
    {
        arr[l+s] = vec[s];
    }
}

void mergeSort(int arr[], std::size_t l, std::size_t h)
{
    if(l < h)
    {
        std::size_t mid{(l+h)/2};

        mergeSort(arr, l, mid);
        mergeSort(arr, mid+1, h);
        merge(arr, l, mid, h);
    }
}

int main()
{
    constexpr int size{5};
    int arr[size] {45, 1, 35, 12, 23};

    mergeSort(arr, 0, size-1);

    for(auto val: arr)
    {
        std::cout << val << ' ';
    }

        return 0;
}
