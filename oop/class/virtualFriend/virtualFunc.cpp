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
    Person *ptr = new Student;
    ptr->getData();
    ptr->showData();

    delete ptr;

    return 0;
}
