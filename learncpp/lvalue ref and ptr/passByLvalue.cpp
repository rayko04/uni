#include <iostream>

void addOne(int &y) // pass by lvalue
{
    y++;
}

void noAdd(const int &y) // pass by const lvalue
{
}

int main()
{
    int x = 5;
    const int z = 1;

    // addOne(5); cant as lvalue ref to non const cant bind to literals(rvalue/const)
    noAdd(5);

    addOne(x);
    noAdd(x);

    // addOne(z); cant as lvalue to non const
    noAdd(z);

    std::cout << x << '\n';

    return 0;
}
