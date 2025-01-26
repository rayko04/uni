#include <iostream>

template <typename T>
struct Pair
{
    T no1;
    T no2;
};

template <typename T>
constexpr T max(Pair<T> P)
{
    return((P.no1 < P.no2) ? P.no2 : P.no1);
}

int main()
{
    Pair<double> P{1.2, 2.1};
    std::cout << max<double>(P);

    return 0;
}
