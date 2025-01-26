#include <iostream>

int sumDigits(int val)
{
    if(val % 10 == 0)   //if(x<10)
        return val;

    return val%10 + sumDigits(val / 10);
}

int main()
{
    std::cout << sumDigits(93427);
}
