#include <iostream>
#include <fstream>

class Child
{
private:
    std::string name;
    float age;

public:
    void getData()
    {
        std::cout << "Input Name: ";
        std::cin >> name;
        std::cout << "Input Age: ";
        std::cin >> age;
    }
    virtual void showData()
    {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Age: " << age << std::endl;
    }
    virtual void getGender() = 0;
    virtual ~Child() {}
};

class Male : public Child
{
private:
    std::string gender;

public:
    void getGender()
    {
        Child::getData();
        gender = "Male";
        std::cout << std::endl;
    }
    void showData()
    {
        Child::showData();
        std::cout << "Gender: " << gender << std::endl;
        std::cout << std::endl;
    }
};

class Female : public Child
{
private:
    std::string gender;

public:
    void getGender()
    {
        Child::getData();
        gender = "Female";
        std::cout << std::endl;
    }
    void showData()
    {
        Child::showData();
        std::cout << "Gender: " << gender << std::endl;
        std::cout << std::endl;
    }
};

int main()
{
    std::ofstream out("file.bin", std::ios::out | std::ios::binary);
    if (!out)
    {
        std::cout << "File not formed.";
        std::exit(1);
    }

    Child *ptr[1];

    for (int i = 0; i < 1; i++)
    {
        char choice;
        std::cout << "Male or Female (M/F)?";
        std::cin >> choice;

        if (choice == 'M')
        {
            ptr[i] = new Male;
            ptr[i]->getGender();
            out.write((char *)ptr[i], sizeof(Male));
        }
        else if (choice == 'F')
        {
            ptr[i] = new Female;
            ptr[i]->getGender();
            out.write((char *)ptr[i], sizeof(Female));
        }
        else
        {
            std::cout << "invalid input";
            i--;
            continue;
        }
    }

    for (int i = 0; i < 1; i++)
    {
        ptr[i]->showData();
        delete ptr[i];
    }

    /*   out.close();

       std::ifstream in("file.bin", std::ios::in | std::ios::binary);
       if (!in)
       {
           std::cout << "File not formed.";
           std::exit(1);           //wrong
       }

       char line[1000];
       while(!in.eof())
       {
           in.read(line, sizeof(Male));
           std::cout << line << std::endl;
       }

       in.close();
   */
    return 0;
}
