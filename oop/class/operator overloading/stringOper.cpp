#include <iostream>
#include <string>

class String
{
    private:
        std::string str;
    public:
        String() : str("") {}
        String(std::string s) : str(s) {}

        void getStr();
        void showStr() const;
        String operator+ (const String&) const;
        String operator+= (const String &);
        bool operator< (const String &) const;
        bool operator> (const String &) const;
   /*     void findLength() const
        {
            int len = str.length();
            std::cout << len << std::endl;
        } */

        ~String() {}
};
int main()
{
    String s1, s2("Ali"), s3;
    s1.getStr();
    s1.showStr();
    s2.showStr();

    s3 = s1 + s2;
    s3.showStr();

    s2 += s1;
    s2.showStr();

/*    s1.findLength();
    s2.findLength();
  */  
    if(s2 < s1)
        std::cout << "s1" << std::endl;
    else if(s2 > s1)
        std::cout << "s2" <<std::endl;
    else
        std::cout << "equal" << std::endl;


    return 0;
}
void String::getStr()
{
    std::cout << "Input String: ";
    std::cin >> str;
    /* str = "a"; */
}
void String::showStr() const
{
    std::cout << "String: " << str << std::endl;
}
String String::operator+ (const String &ss) const
{
    String temp;
    temp.str = str + ss.str;
    return temp;
}
String String::operator+= (const String &ss)
{
    str += ss.str;
    return String (str);
}
bool String::operator> (const String &ss) const
{
    if(str > ss.str)
        return true;
    else
        return false;
}
bool String::operator< (const String &ss) const
{
    if(str < ss.str)
        return true;
    else
        return false;
}
