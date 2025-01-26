#include <iostream>

constexpr std::string_view getQuantityPhrase(int no)
{
    if(no < 0)
        return "negative";
    else if(no == 0)
        return "no";
    else if(no == 1)
        return "a single";
    else if(no == 2)
        return "couple of";
    else if(no == 3)
        return "a few";
    else
        return "many";
}

constexpr std::string_view getApplesPluralized(int no)
{
    return (no = 1)? "apple": "apples" ;
}

int main()
{
    constexpr int maryApples = 3;
    std::cout << "Mary has " << getQuantityPhrase(maryApples) << ' ' << getApplesPluralized(maryApples) << ".\n";

    std::cout << "How many apples do you have? ";
    int numApples{};
    std::cin >> numApples;

    std::cout << "You have " << getQuantityPhrase(numApples) << ' ' << getApplesPluralized(numApples) << ".\n";

    return 0;
}
