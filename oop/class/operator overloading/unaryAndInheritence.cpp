#include <iostream>

class Counter
{
    protected:
        int count;
    public:
        Counter() : count(0) {}
        Counter(int c) : count(c) {}

        int getCount()
        {
            return count;
        }
        Counter operator++()
        {
            return Counter (++count);
        }
        Counter operator++(int)
        {
            return Counter (count++);
        }

        ~Counter() {}
};

class Counter2 : public Counter
{
    public:
        Counter2() : Counter() {}
        Counter2(int c) : Counter(c) {}

        int getCount()
        {
            return count;
        }
        Counter operator--()
        {
            return Counter (--count);
        }
        Counter operator--(int)
        {
            return Counter (count--);
        }
        ~Counter2() {}

};
int main()
{
    Counter2 a(5);
    a++;
    std::cout << a.getCount() << '\n';
    ++a;
    --a;
    std::cout << a.getCount() << '\n';

    return 0;
}
