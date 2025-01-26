#include <iostream>
#include <stack>

bool prcd(char top, char ch)
{
    if((top == '*' || top == '/' || top == '%') && (ch == '+' || ch == '-'))
        return true;
    if((top == '+' || top == '-') && (ch == '+' || ch == '-'))
        return true;
    if((top == '*' || top == '/' || top == '%') && (ch == '*' || ch == '/' || ch == '%'))
        return true;

    return false;
}

std::string infixToPost(const std::string& str)
{
    std::stack<char> st{};
    std::string post{};

    for(char ch: str)
    {
        if(isdigit(ch))
            post.push_back(ch);
        else if(ch == '(' || ch == '[')
            st.push(ch);
        else if(ch == ')' || ch == ']')
        {
            while(!st.empty() && ((ch == ')' && st.top() != '(') || (ch == ']' && st.top() != '[')))
            {
                post.push_back(st.top());
                st.pop();
            }
            st.pop();
        }
        else
        {
            while(!st.empty() && prcd(st.top(), ch) && (st.top() != '(' || st.top() != '['))
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

int charToInt(char ch)
{
    return ch - '0';
}

void evaluate(const std::string& str)
{
    std::stack<int> st{};
     
    for(char ch: str)
    {
        if(isdigit(ch))
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

    std::cout << '\n' << st.top();
}

int main()
{
    auto post{infixToPost("[(2+3)*4]/4")};
    evaluate(post);

    return 0;
}
