#include <iostream>

int main()
{
    int a, b = 10;
    double aa, bb;

    int &ref = a; // lvalue ref variable(ref) to int(a)
                  // ref is now an alias for a
    a = 4;
    ref = 3; // variable value can be changed from either

    std::cout << a << '\n';
    std::cout << ref << '\n';

    ref = b; // this means assignment of value of b to a(being referenced by ref)
             // lvalue ref cant be reassigned

    const int c = 4;
    // int& ref1;  //error must initialize
    // int& ref1 = 2; //error 2 is rvalue
    // int& ref2 = c // error ref should be to modifiable lvalue
    // int& ref1 = aa; // error ref to int cant bind double

    int var{};
    int &ref3{var};  // an lvalue reference bound to var
    int &ref4{ref3}; // an lvalue reference bound to var
    // ref to ref is not supported in cpp
    // ref is not an object in cpp and doesnt occupy memory

    // dangling references can occur
    return 0;
}
