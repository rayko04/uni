#include <iostream>

constexpr int SIZE{100};

template <typename T>
class Stack
{
private:
    T m_arr[SIZE]{};
    std::size_t m_top{0}; // alr at first 'index'

public:
    bool isFull()
    {
        return m_top == SIZE;
    }

    bool isEmpty()
    {
        return m_top == 0;
    }
    void push(T val)
    {
        if (isFull())
        {
            std::cout << "STACK IS FULL!\n";
            return;
        }

        m_arr[m_top++] = val; // stores at 0 and increments to 1
    }

    T pop()
    {
        if (isEmpty())
        {
            std::cout << "stack is empty"; // decrements to 0 then return
        }
        return m_arr[--m_top];
    }

    void show()
    {
        for (std::size_t i{0}; i < m_top; i++)
        {
            std::cout << m_arr[i] << '\n';
        }
    }
};

int main()
{
    Stack<int> s;
    s.push(65);
    s.push(12);
    s.push(-12);
    s.push(65);
    s.push(89);
    s.show();
    while (!s.isEmpty())
    {
        std::cout << "the popped value is :" << s.pop() << std::endl;
    }
}
