#include <iostream>

template <typename T, typename F, typename G>
class Triad 
{
private:
    T mNo1 {};
    F mNo2 {};
    G mNo3 {};
public:
    Triad(const T& n1, const F& n2, const G& n3) : mNo1 {n1}, mNo2 {n2}, mNo3 {n3} {}

    const T first() const {return mNo1;}
    const F second() const {return mNo2;}
    const G third() const {return mNo3;}

    void print() const;

};

template <typename T, typename F, typename G>
void Triad<T, F, G>::print() const
{
    std::cout << '(' << first() << ", " << second() << ", " << third() << std::endl;
} 

int main()
{
	Triad<int, int, int> t1{ 1, 2, 3 };
	t1.print();
	std::cout << '\n';
	std::cout << t1.first() << '\n';

	using namespace std::literals::string_literals;
	const Triad t2{ 1, 2.3, "Hello"s };
	t2.print();
	std::cout << '\n';

	return 0;
}
