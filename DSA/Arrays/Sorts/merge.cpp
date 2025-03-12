#include <iostream>
#include <vector>

std::vector<int> merge(const std::vector<int> &vec, const std::vector<int> &vec2)
{
    std::vector<int> vec3(vec.size() + vec2.size());

    std::size_t i{0}, j{0}, k{0};

    while (i < vec.size() && j < vec2.size())
    {
        if (vec[i] <= vec2[j])
            vec3[k++] = vec[i++];
        else
            vec3[k++] = vec2[j++];
    }

    while (i < vec.size())
    {
        vec3[k++] = vec[i++];
    }
    while (j < vec2.size())
    {
        vec3[k++] = vec2[j++];
    }

    return vec3;
}

int main()
{
    std::vector<int> vec{1, 23, 31, 33, 57};
    std::vector<int> vec2{33, 66, 784, 1111, 2202};

    std::vector<int> vec3{merge(vec, vec2)};

    for (auto val : vec3)
    {
        std::cout << val << " ";
    }

    return 0;
}
