#include <iostream>

class Error : public std::runtime_error
{
public:
    Error(std::string str) : std::runtime_error(str) {} // or const char*
};

class Distance
{
private:
    int feets;
    float inches;

public:
    Distance() : feets(0), inches(0.0f) {}
    Distance(int f, float i) : feets(f), inches(i) {}
    Distance(const Distance &d)
    {
        feets = d.feets;
        inches = d.inches;
        std::cout << "Copy constructor" << std::endl;
    }
    Distance(const float tfeets)
    {
        feets = tfeets;
        inches = (tfeets - feets) * 12;
        std::cout << "1 arg converter" << std::endl;
    }

    friend Distance operator+(const Distance, const Distance);
    friend std::istream &operator>>(std::istream &, Distance &);
    friend std::ostream &operator<<(std::ostream &, Distance);

    void showData()
    {
        std::cout << "feets: " << feets << std::endl;
        std::cout << "inches: " << inches << std::endl;
    }
};

Distance operator+(const Distance dd1, const Distance dd2)
{
    Distance temp;
    temp.feets = dd1.feets + dd2.feets;
    temp.inches = dd1.inches + dd2.inches;

    return temp;
}

std::istream &operator>>(std::istream &in, Distance &dd) // overloaded for these parameters now
{

    std::cout << "Input feets: ";
    in >> dd.feets;
    if (in.fail())
        throw Error("Input mismatch!");
    // throw std::runtime_error("Input mismatch!");

    std::cout << "Input Inches: ";
    in >> dd.inches;
    if (in.fail())
        throw Error("Input mismatch!");
    // throw std::runtime_error("Input mismatch!");

    return in;
}

std::ostream &operator<<(std::ostream &out, Distance dd) // overloaded for these parameters now
{
    out << "feets: " << dd.feets << std::endl;
    out << "inches: " << dd.inches << std::endl;

    return out;
}

int main()
{
    Distance d1(1, 2.1f), d2(2, 2.1f), d3, d4;
    /*
   // d3 = d1 + d2;
   // d3 = d1 + 5.1;
    d3 = 5.1 + d1;  //why copy constr first
    //d3 = 5.1 + 2.2f;
    d3.showData();
    */

    try
    {
        std::cin >> d3 >> d4;
        std::cout << d3 << d4 << std::endl;
    }
    // catch(std::runtime_error &e)
    catch (Error &e)
    {
        std::cout << "Error: " << e.what() << std::endl;
    }

    return 0;
}
