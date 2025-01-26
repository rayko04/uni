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
        int& singleAccess(int);
        ~Array() {}
};

int main()
{
    Array a1;
    for(int i = 0; i < Constants::size; i++)
    {
        int value;
        std::cout << "Input value: ";
        std::cin >> value;

        a1.singleAccess(i) = value;
    }

    for(int i = 0; i < Constants::size; i++)
    {
        int x = a1.singleAccess(i);
        std::cout << x << std::endl;
    }

    return 0;
}

Array::Array()
{
    for(int i = 0; i < Constants::size; i++)
    {
        arr[i] = 0;
    }
}

int& Array::singleAccess(int ind)
{
    if(ind < 0 || ind >= Constants::size)
    {
        std::cout << "Invalid index!";
        exit(1);
    }

    return arr[ind];
}
