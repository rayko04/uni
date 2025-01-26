#include <iostream>

class Complex
{
    private:
        int real;
        int imagin;

    public:
        Complex() : real(0), imagin(0) {}
        Complex(int r, int i) : real(r), imagin(i) {}

        void setData(int, int);
        void showData() const;

        Complex operator+ (const Complex&) const;
        Complex operator- (const Complex&) const;
        Complex operator* (const Complex&) const;
        Complex operator/ (const Complex&) const;
        Complex operator+= (const Complex&);

        ~Complex() {}
};
int main()
{
    Complex c1, c2, c3(2, 3), c4(4, 5), c5(6, 1), c6(2, 2);
    c2.setData(1, 1);

    c1.showData();
    std::cout << std::endl;
    c1 += c2 + c3 - c4 * c5 / c6;
    c1.showData();
    
    return 0;
}
void Complex::setData(int rreal, int iimagin) 
{
    real = rreal;
    imagin = iimagin;
}
void Complex::showData() const
{
    std::cout << "Complex: " << real << "+ i" << imagin << std::endl;
}
Complex Complex::operator+ (const Complex &cc) const
{
    Complex temp;
    temp.real = real + cc.real;
    temp.imagin = imagin + cc.imagin;

    return temp;
}
Complex Complex::operator- (const Complex &cc) const
{
    Complex temp;
    temp.real = real - cc.real;
    temp.imagin = imagin - cc.imagin;

    return temp;
}
Complex Complex::operator* (const Complex &cc) const
{
    Complex temp;
    temp.real = real * cc.real;
    temp.imagin = imagin * cc.imagin;

    return temp;
}
Complex Complex::operator/ (const Complex &cc) const
{
    Complex temp;
    temp.real = real / cc.real;
    temp.imagin = imagin / cc.imagin;

    return temp;
}
Complex Complex::operator+= (const Complex &cc)
{
    real += cc.real;
    imagin += cc.imagin;

    return Complex (real, imagin);
}
