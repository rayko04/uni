#include <iostream>
#include <cassert>

template <int no>
int constexpr factorial()
{
    static_assert(no >= 0, "no should be greater than 0");

    int prod = 1;
    for (int i = 1; i <= no; i++)
    {
        prod *= i;
    }
    return prod;
}
int main()
{
    static_assert(factorial<0>() == 1);
    static_assert(factorial<3>() == 6);
    static_assert(factorial<5>() == 120);

    factorial<-3>(); // should fail to compile

    return 0;
}
