/*
   Question 6 Write a program that declare a class Student with five data members to 
   store five subject mark of student. Class also includes three member function for 
   input marks, Sum() to calculate and return the sum of five subject and Avg() 
   to calculate and return the average marks of five subject. 
   Each subject has a maximum of 100 marks. Use this class in your program.

*/

#include <iostream>

namespace constants
{
    constexpr int SIZE = 5;
}

class Student
{
    private:

        float marks[constants::SIZE];
        std::string name;

    public:
         Student() : name("")
            {
                for(int i = 0; i < constants::SIZE; i++)
                {
                    marks[i] = 0;
                }
            }
        Student(float arr[]) 
        {
            for(int i = 0; i < constants::SIZE; i++)
            {
                marks[i] = arr[i];
                std::cout << marks[i] << std::endl;
            }

        }

        void getInput()
        {
            for(int i = 0; i < constants::SIZE; i++)
            {
                std::cout << "Input Numbers of subject " << i+1 << ": " << '\n';
                std::cin >> marks[i];
            }
            std::cout << "Enter name: ";
            std::cin >> name;
            std::cout << '\n';
        }

        float sumMarks()
        {
            float sum = 0;
            for(int i = 0; i < constants::SIZE; i++)
            {
                sum += marks[i];
            }
            
            return sum;
        }

        float avgMarks(float sum)
        {
            float avg = sum/(constants::SIZE);

            return avg;
        }

        void show(Student s)
        {
            std::cout << s.name << " got 1st position!" << std::endl;
        }

};

int main()
{
    float ar[constants::SIZE] = {54.4f, 55.0f, 78.6f, 98.0f, 54.0f};

    Student s1(ar), s2;
    s1.getInput();
    s2.getInput();

    float sum1 = s1.sumMarks();
    float sum2 = s2.sumMarks();

    float avg1 = s1.avgMarks(sum1);
    float avg2 = s2.avgMarks(sum2);

    (avg1 > avg2) ? s1.show(s1) : s2.show(s2);

    return 0;
}

