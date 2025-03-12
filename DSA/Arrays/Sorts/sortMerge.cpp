#include <iostream>
#include <vector>

void merge(std::vector<int> &vec, auto l, auto mid, auto h)
{
    std::vector<int> vec3(h - l + 1); // high-low+1

    std::size_t i{l}, j{mid + 1}, k{0};

    while (i <= mid && j <= h)
    {
        if (vec[i] <= vec[j])
            vec3[k++] = vec[i++];
        else
            vec3[k++] = vec[j++];
    }

    while (i <= mid)
    {
        vec3[k++] = vec[i++];
    }
    while (j <= h)
    {
        vec3[k++] = vec[j++];
    }

    for (std::size_t index{0}; index < vec3.size(); index++)
    {
        vec[l + index] = vec3[index]; // low+index
    }
}

void mergeSort(std::vector<int> &vec, std::size_t l, std::size_t h)
{
    if (l < h)
    {
        std::size_t mid{(l + h) / 2};
        mergeSort(vec, l, mid);
        mergeSort(vec, mid + 1, h);
        merge(vec, l, mid, h);
    }
}

int main()
{
    std::vector<int> vec{100, 23, 43, 333, 57, 6453, 87, 3};

    mergeSort(vec, 0, vec.size() - 1); // index
    for (auto val : vec)
    {
        std::cout << val << " ";
    }

    return 0;
}
