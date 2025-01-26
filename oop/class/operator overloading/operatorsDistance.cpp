#include <iostream>
using namespace std;
class Distance
{
    private:
        int feets;
        float inches;
    public:

        Distance() : feets(0), inches(0.0f) {}
        Distance(int f, float i) : feets(f), inches(i) {}

        void getDist();
        void setDist(int, float);
        void showData();

        Distance operator+ (const Distance&) const;
        Distance operator- (const Distance&) const;
        Distance operator* (const Distance&) const;
        Distance operator/ (const Distance&) const;
        Distance operator+= (const Distance&);
        bool operator< (const Distance&) const;
        bool operator> (const Distance&) const;

        ~Distance() {}
};

int main()
{
    Distance d1(1, 3.1f), d2, d3, d4(4, 1.1f), d5(6, 5.1f), d6(1, 1.1f);
    d2.setDist(3, 7.4f);

    std::cout << std::endl;
    d1.showData();
    d2.showData();

    std::cout << std::endl;

    d3 = d1 + d2 * d4 / d5 - d6;

    d3 = d1 += d2;
    d3 = d1  * d4 += d2;

    d3.showData();
    d1.showData();

    if(d1 > d2)
        std::cout << "Distance-1 is largest"<< std::endl;
    else if(d1 < d2)
        std::cout << "Distance-1 is largest"<< std::endl;
    else
        std::cout <<"Both are equals"<< std::endl;
 

    return 0;
}

void Distance::getDist()
{
    std::cout << "Input Feets: ";
    std::cin >> feets;
    std::cout << "Input Inches: ";
    std::cin >> inches;
}

void Distance::setDist(int feet, float inch)
{
    feets = feet;
    inches = inch;
}

void Distance::showData()
{
    while(inches >= 12.0f)
    {
        inches -= 12.0f;
        feets ++;
    }

    std::cout << "Feets: " << feets << std::endl;
    std::cout << "Inches: " << inches << std::endl;
}

Distance Distance::operator+ (const Distance &dd) const
{
    Distance temp;
    temp.feets = feets + dd.feets;
    temp.inches = inches + dd.inches;

    return temp;
}

Distance Distance::operator- (const Distance &dd) const
{
    Distance temp;
    temp.feets = feets - dd.feets;
    temp.inches = inches - dd.inches;

    return temp;
}

Distance Distance::operator* (const Distance &dd) const
{
    Distance temp;
    temp.feets = feets * dd.feets;
    temp.inches = inches * dd.inches;

    return temp;
}

Distance Distance::operator/ (const Distance &dd) const
{
    Distance temp;
    temp.feets = feets / dd.feets;
    temp.inches = inches / dd.inches;

    return temp;
}

Distance Distance::operator+= (const Distance &dd)
{
    feets += dd.feets;
    inches += dd.inches;

    return Distance (feets, inches);
}

bool Distance::operator< (const Distance &dd) const
{
   
   float tfeets1 = feets + inches/12.0f;
   float tfeets2 = dd.feets + dd.inches/12.0f;

    return (tfeets1 < tfeets2)? true: false;
}

bool Distance::operator> (const Distance &dd) const
{
   
   float tfeets1 = feets + inches/12.0f;
   float tfeets2 = dd.feets + dd.inches/12.0f;

    return (tfeets1 > tfeets2)? true: false;
}
