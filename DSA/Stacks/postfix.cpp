#include <iostream>
#include <stack>

int charToInt(char ch)
{
    return ch - '0';
}

bool prcd(char top, char ch)
{
    if((top == '*' || top == '/' || top == '%') && (ch == '+' || ch == '-'))
        return true;
    if((top == '+' || top == '-') && (ch == '+' || ch == '-'))
        return true;

    return false;
}

std::string infixToPost(const std::string& s)
{
    std::stack<char> st{};
    std::string post{};
//    std::size_t i{0};

    for(char ch: s)
    {
        if(std::isdigit(ch))
            post.push_back(ch);
        else
        {
            while(!st.empty() && prcd(st.top(), ch))
            {
                post.push_back(st.top());
                st.pop();
            }
            st.push(ch);
        }
    }

    while(!st.empty())
    {
        post.push_back(st.top());
        st.pop();
    }

    std::cout << post << '\n';
    return post;
}

void evaluate(const std::string& s)
{
    std::stack<int> st{};
    
    for(char ch: s)
    {
        if(std::isdigit(ch))
            st.push(charToInt(ch));
        else
        {
            int oprnd2{st.top()};
            st.pop();
            int oprnd1{st.top()};
            st.pop();

            switch (ch)
            {
                case '+': st.push(oprnd1+oprnd2); break;
                case '-': st.push(oprnd1-oprnd2); break;
                case '*': st.push(oprnd1*oprnd2); break;
                case '/': st.push(oprnd1/oprnd2); break;
                case '%': st.push(oprnd1%oprnd2); break;

                default: return;
            }
        }
    }

    std::cout << st.top();

}


int main()
{
    std::string s{"2+3*5"};
    std::string post {infixToPost(s)};
    evaluate(post);

    return 0;
}
