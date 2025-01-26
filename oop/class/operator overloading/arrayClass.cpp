#include <iostream>

namespace Constants
{
    constexpr int size = 5;
}

class Array
{
    private:
        int arr[Constants::size];

    public:
        Array();
        void getArray(int);
        int showArray(int) const;
        ~Array() {}
};

int main()
{
    Array a1;
    for(int i = 0; i < Constants::size; i++)
    {
        a1.getArray(i);
    }

    for(int i = 0; i < Constants::size; i++)
    {
        std::cout << "Value at index " << i << ": " << a1.showArray(i) << std::endl;
    }
}

Array::Array()
{
    for(int i = 0; i < Constants::size; i++)
    {
        arr[i] = 0;
    }
}
void Array::getArray(int ind)
{
    if(ind < 0 || ind >= Constants::size)
    {
        std::cout << "Invalid index!";
        exit(1);
    }
    std::cout << "Input value at index " << ind << ": ";
    std::cin >> arr[ind];
}
int Array::showArray(int ind) const
{
    if(ind < 0 || ind >= Constants::size)
    {
        std::cout << "Invalid index!";
        exit(1);
    }
    
    return arr[ind];
}
