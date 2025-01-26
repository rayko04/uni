#include <iostream>

class Foo
{
private:
    int m_x {2};

public:
    Foo() = default;
    Foo(int a) : m_x {a} {}

   int foo() {return m_x;}
};

class Goo
{
private:
    int m_x {};

public:
    Goo() : m_x {2} {}
    Goo(int a) : m_x {a} {}

    int goo() {return m_x;}
};

class Soo
{
private:
    int m_x {2};

public:
    Soo() : m_x {} {}
    Soo(int a) : m_x {a} {}

    int soo() {return m_x;}
};

class Doo
{
private:
    int m_x {2};

public:
    Doo() : m_x {2} {}
    Doo(int a) : m_x {a} {}

    int doo() {return m_x;}
};

class Loo
{
private:
    int m_x {2};

public:
    Loo() {}
    Loo(int a) : m_x {a} {}

    int loo() {return m_x;}
};


int main()
{
    Foo f {};
    std::cout << f.foo();
    Goo g {};
    std::cout << g.goo();
    Soo s {};
    std::cout << s.soo();
    Doo d {};
    std::cout << d.doo();
    Loo l {};
    std::cout << l.loo();

    return 0;
}
