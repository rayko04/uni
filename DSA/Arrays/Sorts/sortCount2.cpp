#include <iostream>
#include <vector>
#include <algorithm>

void countingSort(std::vector<int>& vec)        //O(n+k) n size, k max value
{
    if(vec.empty())
        return;

    int maxElement {*std::max_element(vec.begin(), vec.end())};

    std::vector<int> count(static_cast<std::size_t>(maxElement + 1), 0);
    std::vector<int> output(vec.size());

    for(int val: vec)       //create count of each element
    {
        count[static_cast<std::size_t>(val)]++;
    }

    for(std::size_t i{1}; i <= static_cast<std::size_t>(maxElement); i++)      //convert count to positions
    {
        count[i] += count[i-1];
    }

    for(std::size_t i{vec.size()}; i > 0; i--)
    {
        auto j{i-1};                //start from size -1 to 0. this saves i reaching -1 in loop

        auto index{static_cast<std::size_t>(vec[j])};           //since vec[j] is int, using it will give warning
        auto index2{static_cast<std::size_t>(count[index])};    //same here

        output[index2 - 1] = vec[j];
        count[index]--;
    }

    vec = output;

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
