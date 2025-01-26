#include <iostream>
#include <string>

const std::string& getStr()
{
    static std::string s_str{"hello"};      //static must for return by ref

    return s_str;
}

int main()
{
    std::cout << "text is " << getStr() << '\n';

    return 0;
}
