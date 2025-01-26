#include <iostream>
/*
template <typename T, typename G>
auto getMax(T a, G b)   //auto return
{
    return(a < b) ? b : a;
}
*/

auto getMax(auto a, auto b) // abreviated function template
{                           // use only when all parameters diff type
    return (a < b) ? b : a;
}

int main()
{
    double a = getMax(2.5, 3);

    std::cout << a << '\n';

    return 0;
}
