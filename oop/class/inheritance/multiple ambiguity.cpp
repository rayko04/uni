#include <iostream>

class A
{
    public:
        void showData()
        {std::cout << "A"<< std::endl;}
};

class B : public A {};

class C : public A {};

class D : public B, public C {};

int main()
{
    D d1;
    d1.B::showData();

    return 0;
}
