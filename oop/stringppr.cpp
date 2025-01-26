#include <iostream>
#include <cstring>
using namespace std;

constexpr int SIZE = 100;
class String
{
private:
    char str[SIZE];

public:
    String()
    {
        strcpy(str, "");
    }
    String(const char *c)
    {
        strcpy(str, c);
    }

    friend istream &operator>>(istream &, String &);
    friend ostream &operator<<(ostream &, String);
    friend String operator+(String, String);
};

istream &operator>>(istream &in, String &s)
{
    cout << "Input str: ";
    in.getline(s.str, SIZE);
    if (s.str[0] == '\0')
        throw std::runtime_error("NULL INPUT");
    // in.ignore();
    cout << endl;

    return in;
}

ostream &operator<<(ostream &out, String s)
{
    out << "Str: " << s.str << endl;
    out << endl;

    return out;
}

String operator+(String ss1, String ss2)
{
    String temp;
    strcpy(temp.str, ss1.str);
    strcat(temp.str, ss2.str);

    return temp;
}

int main()
{
    String s1("Ryan"), s2, s3;

    try
    {
        cin >> s2;

        s3 = "hoho" + s2;
        cout << s3;
    }
    catch (std::runtime_error &e)
    {
        cout << "Error " << e.what() << endl;
    }

    return 0;
}
