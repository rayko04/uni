/// Member Functions Defined Outside the Class
/// Objects as Function Arguments
/// The Default Copy Constructor
/// Returning Objects from Functions

/// const and classes
/// const Member Functions
/// const Member Function Arguments
/// const Objects
#include<iostream>
using namespace std;
class Complex
{
    private:
        int real, img;
    public:
        /// constructors
        Complex(): real(0), img(0) {}
        Complex(int r, int i): real(r), img(i) {}

        /// M.F
        void getcomplex();
        void showcomplex() const;        // A const member func(of a class), cant chang
                                        // any member of class, const obj can only call const MF.
        /// d1.Adddist(d2);
        Complex AddComplex(const Complex& cc) const
        {
            Complex temp;

            temp.real = real + cc.real;
            temp.img = img + cc.img;
            return temp;
        }
        /// Destructor
        ~Complex(){}
};

int main()
{
    const Complex C1(2,9);
    Complex C2;
    C2.getcomplex();

    cout<<endl;
    C1.showcomplex();
    C2.showcomplex();

    Complex C3 = C1.AddComplex(C2);
    C3.showcomplex();

    return 0;
}

void Complex::getcomplex()
{
    cout<<"Enter Real:";
    cin>>real;
    cout<<"Enter Img:";
    cin>>img;
}
void Complex::showcomplex() const
{
    cout<<"Complex : "<<real<<" + i"<<img<<endl;
}
