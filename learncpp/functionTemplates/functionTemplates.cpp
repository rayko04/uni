#include <iostream>

template <typename T>
T getMax(T a, T b)
{
    return (a < b) ? b : a;
}
template <typename T>
T get(T, double) // 1 non template argument
{                // no need to write identifiers as no use
    return 5;
}

int main()
{
    double a = getMax<double>(2.5, 3.1);
    // double a = getMax<>(2.5, 3.1);        //all 3 can be used when argument type and
    // double a = getMax(2.5, 3.1);          //actual type is same (template argument deduction)
    std::cout << a << '\n';

    int b = get(2.5, 5);

    return 0;
}
