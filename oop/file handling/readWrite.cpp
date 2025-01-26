#include <iostream>
#include <fstream>

class fooclass
{
private:
    int foo;
    int goo;

public:
    void getData()
    {
        std::cout << "Input foo: ";
        std::cin >> foo;
        std::cout << "Input goo: ";
        std::cin >> goo;
    }
    void showData()
    {
        std::cout << "foo: " << foo << std::endl;
        std::cout << "goo: " << goo << std::endl;
    }
};

int main()
{
    fooclass f1, f2;
    f1.getData();

    std::ofstream file("ryan.txt", std::ios::out);
    if (!file)
    {
        std::cout << "file not Created";
    }
    file.write((char *)&f1, sizeof(fooclass));
    file.close();

    std::ifstream file1("ryan.txt", std::ios::in); // diff name
    if (!file)
    {
        std::cout << "file not found";
    }
    file1.read((char *)&f2, sizeof(fooclass));
    file.close();

    f2.showData();

    return 0;
}
