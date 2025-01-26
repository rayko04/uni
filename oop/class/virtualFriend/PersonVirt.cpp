#include <iostream>

class Person
{
private:
    int id;
    std::string name;

public:
    Person() : id(0), name("") { std::cout << "Person constructor" << std::endl; }

    virtual void getData()
    {
        std::cout << "Enter a id : ";
        std::cin >> id;
        std::cout << "Enter a name : ";
        std::cin >> name;
    }

    virtual void showData()
    {
        std::cout << "id:" << id << std::endl;
        std::cout << "name:" << name << std::endl;
    }

    virtual ~Person() { std::cout << "Person destructor" << std::endl; }
};

class Student : public Person
{
private:
    float marks;

public:
    Student() : marks(0.0f) { std::cout << "Student constructor" << std::endl; }

    void getData()
    {
        Person::getData();
        std::cout << "Input marks: ";
        std::cin >> marks;
    }
    void showData()
    {
        Person::showData();
        std::cout << "marks:" << marks << std::endl;
    }

    ~Student() { std::cout << "Student destructor" << std::endl; }
};

class Teacher : public Person
{
private:
    int pub;

public:
    Teacher() : pub(0) { std::cout << "Teacher constructor" << std::endl; }

    void getData()
    {
        Person::getData();
        std::cout << "Input pub: ";
        std::cin >> pub;
    }
    void showData()
    {
        Person::showData();
        std::cout << "pub:" << pub << std::endl;
    }

    ~Teacher() { std::cout << "Teacher destructor" << std::endl; }
};

int main()
{
    Person *ptr[100];
    int count = 0;
    char choice;

    do
    {
        std::cout << "Enter P for Person" << std::endl;
        std::cout << "Enter S for Student" << std::endl;
        std::cout << "Enter T for Teacher" << std::endl;
        std::cin >> choice;

        if (choice == 'p' || choice == 'P')
        {
            ptr[count] = new Person;
            ptr[count++]->getData();
        }
        else if (choice == 's' || choice == 'S')
        {
            ptr[count] = new Student;
            ptr[count++]->getData();
        }
        else if (choice == 't' || choice == 'T')
        {
            ptr[count] = new Teacher;
            ptr[count++]->getData();
        }
        else
            std::cout << "Invalid option!" << std::endl;

        std::cout << "Continue? (y)";
        std::cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    std::cout << std::endl;

    for (int i = 0; i < count; i++) // <count
    {
        ptr[i]->showData();
        delete ptr[i];
        std::cout << std::endl;
    }

    return 0;
}
