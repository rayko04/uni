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
        int& operator[](int);
        Array operator+ (const Array& aa) const;
        Array operator- (const Array& aa) const;
        Array operator* (const Array& aa) const;
        Array& operator+= (const Array& aa);
        ~Array() {}
};

int main()
{
    Array a1, a2, a3, a4, a5;
    for(int i = 0; i < Constants::size; i++)
    {
       /* int value;
        std::cout << "Input value: ";
        std::cin >> value;

        a1[i] = value; */
        a1[i] = i*2;
        a2[i] = i*3;
        a4[i] = i*5;
        a5[i] = i*10;
    }

    a3 = a1 + a2 * a4 += a5;
    for(int i = 0; i < Constants::size; i++)
    {
        int x = a3[i];
        std::cout << "Value at index " << i << ": " << x << std::endl;
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
int& Array::operator[](int ind)
{
    if(ind < 0 || ind >= Constants::size)
    {
        std::cout << "Invalid index!";
        exit(1);
    }

    return arr[ind];
}
Array Array::operator+ (const Array& aa) const
{
    Array temp;
    for(int i = 0; i < Constants::size; i++)
    {
        temp.arr[i] = arr[i] + aa.arr[i];
    }

    return temp;
}
Array Array::operator- (const Array& aa) const
{
    Array temp;
    for(int i = 0; i < Constants::size; i++)
    {
        temp.arr[i] = arr[i] - aa.arr[i];
    }

    return temp;
}
Array Array::operator* (const Array& aa) const
{       
    Array temp;
    for(int i = 0; i < Constants::size; i++)
    {
        temp.arr[i] = arr[i] * aa.arr[i];
    }

    return temp;
}
Array& Array::operator+= (const Array& aa)
{
    for(int i = 0; i < Constants::size; i++)
    {
        arr[i] += aa.arr[i];
    }

    return *this;
}
