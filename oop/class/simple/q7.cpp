#include <iostream>
#include <string.h>

class Student
{
    private:
        int admno;
        char sname[20];
        float eng, math, sci;
        float total;

        constexpr float ctotal() const;
    public:
        Student() : admno(0), eng(0.0f), math(0.0f), sci(0.0f)
        {
            strcpy(sname, "");

            total = ctotal();
        }
        Student(int ano, float e, float m, float s, const char* name) : admno(ano), eng(e), math(m), sci(s) //*pointer or use std::string sname
        {
            strcpy(sname, name);
            total = ctotal();
        }

        void getData();
        void showData() const;
        ~Student() {}
};

int main()
{
    const Student s1(1, 54, 67, 87, "Aslam");
    Student s2;
    s2.getData();

    std::cout << std::endl;
    s1.showData();
    std::cout << std::endl;
    s2.showData();

    return 0;
}

constexpr float Student::ctotal() const
{
    int tot = eng + math + sci;
    return tot;
}

void Student::getData()
{
    std::cout << "Input admission no: ";
    std::cin >> admno;
    std::cin.ignore();

    std::cout << "Input name: ";
    std::cin.getline(sname, 20);

    std::cout << "Input english no: ";
    std::cin >> eng;
    std::cout << "Input math no: ";
    std::cin >> math;
    std::cout << "Input science no: ";
    std::cin >> sci;

    total = ctotal();
}

void Student::showData() const
{
    std::cout << "\nAdmission no: "  << admno;
    std::cout << "\nName: "          << sname;
    std::cout << "\nEnglish marks: " << eng;
    std::cout << "\nMath marks: "    << math;
    std::cout << "\nScience marks: " << sci;
    std::cout << "\nTotal: "         << total << std::endl;
}
