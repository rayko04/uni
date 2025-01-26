#include <iostream>

enum Color      //unscoped enumaration
{
    red,        //enumarators constexpr by default
    blue,       //scope of enumarator same as enumarations(global here)
    green,
};

int main()
{
    Color apple = red;
    Color car {blue};
    Color pen(green);

    if(pen == green)
    {
        std::cout << "yes";
    }
    else
        std::cout << "no";

    return 0;
}
