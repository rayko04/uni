/*
Lvalue references can only bind to modifiable lvalues.
Lvalue references to const can bind to modifiable lvalues, non-modifiable lvalues, and rvalues.
This makes them a much more flexible type of reference
*/

#include <iostream>

int g_x{5};
int main()
{
    // Lvalue reference to const
    const int x{5};    // x is a non-modifiable lvalue
    const int &ref{x}; // okay: ref is a an lvalue reference to a const value

    std::cout << ref << '\n'; // okay: we can access the const object
    ref = 6;                  // error: we can not modify an object through a const reference

    // Initializing an lvalue reference to const with a modifiable lvalue
    int y{5};           // y is a modifiable lvalue
    const int &ref1{y}; // okay: we can bind a const reference to a modifiable lvalue

    std::cout << ref1 << '\n'; // okay: we can access the object through our const reference
    ref1 = 7;                  // error: we can not modify an object through a const reference

    y = 6; // okay: x is a modifiable lvalue, we can still modify it through the original identifier
    // Favor lvalue references to const over lvalue references to non-const unless you need to modify the object being referenced

    // Initializing an lvalue reference to const with an rvalue
    const int &ref3{5}; // okay: 5 is an rvalue
    // here r value is stored in a temp object lifetime of which will be same as the ref variable(ref2)
    std::cout << ref3 << '\n'; // prints 5

    // Initializing an lvalue reference to const with a value of a different type(implicitly convertable types only)
    //  case 1
    const double &r1{5};     // temporary double initialized with value 5, r1 binds to temporary
    std::cout << r1 << '\n'; // prints 5

    // case 2
    char c{'a'};
    const int &r2{c};        // temporary int initialized with value 'a', r2 binds to temporary
    std::cout << r2 << '\n'; // prints 97 (since r2 is a reference to int)

    // Constexpr lvalue references
    [[maybe_unused]] constexpr int &ref4{g_x}; // ok, can bind to global

    static int s_x{6};
    [[maybe_unused]] constexpr int &ref5{s_x}; // ok, can bind to static local

    int z{6};
    [[maybe_unused]] constexpr int &ref6{x}; // compile error: can't bind to non-static object

    // defining a constexpr reference to a const variable
    static const int s_x2{6};                         // a const int
    [[maybe_unused]] constexpr const int &ref7{s_x2}; // needs both constexpr and const

    return 0;
}
