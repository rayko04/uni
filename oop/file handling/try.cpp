#include <iostream>
#include <fstream>
#include <stdexcept>

bool redo()
{

    char choice;
    std::cout << "Continue? Y/N: ";
    std::cin >> choice;

    if (choice == 'y' || choice == 'Y')
        return true;

    else if (choice == 'n' || choice == 'N')
        return false;

    else
        throw std::runtime_error("Invalid Input");
}
int main()
{
    std::ofstream file;
    file.open("C:\\Users\\Public\\Documents\\ryan.txt", std::ios::out);
    if (file.fail())
    {
        std::cout << "File not Found!";
        std::exit(1);
    }

    char name[50];
    int id;
    float salary;

    try
    {
        do
        {
            std::cout << "Enter name: ";
            std::cin.ignore('\n');
            std::cin.getline(name, 50);
            std::cout << "Enter id: ";
            std::cin >> id;
            std::cout << "Enter salary: ";
            std::cin.ignore();
            std::cin >> salary;

            std::cout << name;
            file << id << '\t' << name << '\t' << salary << std::endl;

        } while (redo());
    }
    catch (std::runtime_error &e)
    {
        std::cout << "ERROR...." << e.what() << std::endl;
    }
    file.close();

    return 0;
}
