#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

void radixSort(std::vector<int>& vec)
{
    constexpr int binSize{10};
    std::list<int> bin[binSize];

    int max{*std::max_element(vec.begin(), vec.end())};
    
    for(int exp{1}; max / exp > 0; exp *= 10)
    {
        for(int val: vec)
        {
            auto index{(val / exp) % 10};
            bin[index].push_back(val);
        }
        
        std::size_t i{0};
        for(std::size_t k{0}; k < binSize; k++)
        {
            while(!bin[k].empty())
            {
                vec[i++] = bin[k].front();
                bin[k].pop_front();
            }
        }

    }
    
}


int main() {
    std::vector<int> arr = {170, 45, 75, 90, 802, 24, 2, 66};

    std::cout << "Original array: ";
    for (int num : arr) std::cout << num << " ";

    radixSort(arr);

    std::cout << "\nSorted array: ";
    for (int num : arr) std::cout << num << " ";

    return 0;
}
