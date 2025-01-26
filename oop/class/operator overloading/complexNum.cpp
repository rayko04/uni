
#include <iostream>
using namespace std;

class Complex
{
    private:
        int real;
        int imag;

    public:
        Complex() : real(0), imag(0) {}
        Complex(int r, int i) : real(r), imag(i) {}

        void getData();
        void ShowData();
        Complex addComp(Complex cc);

    ~Complex() {}
};

int main()
{
    Complex c1, c2(6, 8), c3;

    c1.getData();

    c3 = c2.addComp(c1);
    c1.ShowData();
    c2.ShowData();
    c3.ShowData();

    return 0;
}

 void Complex::getData()
    {
        cout << "INput Real part: ";
        cin >> real;
        cout << "Input Imag part: ";
        cin >> imag;
    }

void Complex::ShowData()
    {
        cout << "Complex Num: " << real << "+ i" << imag << endl;
    }

Complex Complex::addComp(Complex cc)
    {
        Complex temp;
        temp.real = real + cc.real;
        temp.imag = imag + cc.imag;

        return temp;
    }
