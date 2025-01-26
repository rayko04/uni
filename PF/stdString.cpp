#include <iostream>

int main()
{
    std::string str;    //std::string is a class actually in <string>
    std::cout << "enter string: ";
    std::getline(std::cin >> std::ws, str);     //cin.getline with char array(c style strings)

    std::cout << str << " with length " << str.length() << '\n';
      // doesnt return null terminator 
    // different style because its member function of class std::string

    using namespace std::string_literals;
    std::cout << " he is " << '\n';  //c style string literal (char array one)
    std::cout << " he is "s << std::endl; //std::string literal

    return 0;
}
