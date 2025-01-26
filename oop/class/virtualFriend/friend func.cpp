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

    Distance(const Distance &d) // cant pass by copy here
    {
        feets = d.feets;
        inches = d.inches;
        cout << "i am copy constructor" << endl;
    }

    Distance(float tfeets)      //converter
    {
        feets = tfeets;
        inches = (tfeets - feets) * 12;
        cout << "i am 1 argument constructor" << endl;
    }

    void getDist();
    void setDist(int, float);
    void showData();

    friend Distance operator+(Distance, Distance);
    ~Distance() {}
};

int main()
{
    Distance d1(1, 1.1f), d2(2, 2.2f), d3;
    //d3 = d1 + d2;
    d3 = d1 + 5.91f;
    //d3 = d1 + 5.91;
    //d3 = 5.91 + 2.56;   //add then to float then user defined 1 arg converter

    d3.showData();

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
    while (inches >= 12.0f)
    {
        inches -= 12.0f;
        feets++;
    }

    std::cout << "Feets: " << feets << std::endl;
    std::cout << "Inches: " << inches << std::endl;
}

Distance operator+(Distance dd1, Distance dd2)
{
    Distance temp;
    temp.feets = dd1.feets + dd2.feets;
    temp.inches = dd1.inches + dd2.inches;

    return temp;
}
