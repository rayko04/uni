#include <iostream>
#include <stack>

bool isValid(const std::string &s)
{
    std::stack<char> st{};

    for (char ch : s)
    {
        if (ch == '(' || ch == '{' || ch == '[')
            st.push(ch);

        else
        {
            if (st.empty())
                return false;

            if ((st.top() == '(' && ch == ')') ||
                (st.top() == '{' && ch == '}') ||
                (st.top() == '[' && ch == ']'))
                st.pop();

            else
                return false;
        }
    }

    return st.empty();
}

int main()
{
    std::string s{"({[]})"};

    if (isValid(s))
        std::cout << "valid";
    else
        std::cout << "not valid";

    return 0;
}
