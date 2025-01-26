#include <cassert>
#include <cmath>
#include <iostream>
/*
double getSqrt(double d)
{
    assert(d >= 0.0 && "d must be non negative");    //creates an exception if condition false

    if(d >= 0)
        return std::sqrt(d);
    return 0.0;
}

int main()
{
    std::cout << getSqrt(5.0) << std::endl;
    std::cout << getSqrt(-5.0) << std::endl;

    return 0;
}
*/

template <double N_d> // non type template(use: parameters are constexpr) , can use auto
double getSqrt()
{
    static_assert(N_d >= 0.0, "d must be non negative"); // creates compile time error if false, expression must be copile time const

    if constexpr (N_d >= 0)
        return std::sqrt(N_d);

    return 0.0;
}

int main()
{
    std::cout << getSqrt<5.0>() << std::endl; // literals are compile time const(constexpr)
    std::cout << getSqrt<-5.0>() << std::endl;

    return 0;
}
