#include <iostream>
#include <vector>
#include <algorithm>

void countingSort(std::vector<int>& vec)        //O(n+k) n size, k max value
{
    int maxElement{*std::max_element(vec.begin(), vec.end())};  //std::max_element returns an iterator so have to dereference

    std::vector<int> count(static_cast<std::size_t>(maxElement+1), 0);

    for(int val: vec)
    {
        count[static_cast<std::size_t>(val)]++;       //count[vec[i]]++
    }

    std::size_t i{0}, j{0};
    while(i <= static_cast<std::size_t>(maxElement))
    {
        while(count[i] > 0)
        {
            vec[j++] = static_cast<int>(i);   //overwrite
            count[i]--;
        }
        i++;
    }

}

int main() {
    std::vector<int> arr = {4, 2, 2, 8, 3, 3, 1};
    
    std::cout << "Original array: ";
    for (int num : arr) std::cout << num << " ";
    
    countingSort(arr);

    std::cout << "\nSorted array: ";
    for (int num : arr) std::cout << num << " ";
    
    return 0;
}
