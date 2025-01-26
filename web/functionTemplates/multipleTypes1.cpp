#include <iostream>

template <typename T>
T getMax(T a, T b)
{
    return (a < b) ? b : a;
}

int main()
{
    double a = getMax<double>(2.5, 3.1);
    // a = getMax(2.5, 3);                   //wont compile as Template type should be same
    //(implicit conversion doesnt take place due to temp type deduction)

    a = getMax<double>(2, 3.4); // compiles because 2 is implicitly converted to double
    std::cout << a << '\n';

    return 0;
}
