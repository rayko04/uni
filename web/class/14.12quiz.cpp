#include <iostream>

class Ball
{
private:
    std::string mColor {"black"};
    float mradius {10.0};

public:

    Ball(float radius = 10.0) : mradius{radius} { print();}
    Ball(std::string_view color, float radius = 10.0) : mColor{color}, mradius{radius} { print();}
/* or
    Ball(radius = 10.0) : mradius{radius} { print();}
    Ball(std::string_view color = "black", float radius = 10.0) : mColor{color}, mradius{radius} { print();}
 */
    void print()
    {
        std::cout << "Ball(" << mColor << ", " << mradius << ")\n";
    }
};

int main()
{
    Ball def{};
    Ball blue{ "blue" };
    Ball twenty{ 20.0 };
    Ball blueTwenty{ "blue", 20.0 };

    return 0;
}
