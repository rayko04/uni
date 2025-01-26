#include <iostream>
#include <string.h>

constexpr int SIZE = 5;
constexpr int SIZE1 = 20;

class Report
{
    private:

       int adno;
       char name[20];
       float marks[SIZE];
       float avg;

       void GetAvg()
       {
        float sum = 0;
        for(int i = 0; i < SIZE; i++)
        {
            sum += marks[i];
            
        }
            avg = sum / SIZE;          
       }

    public:

        Report() : adno(0), avg(0.0f)
        {
           for(int i = 0; i < SIZE; i++)
           {
                marks[i] = 0.0f;
           }
            strcpy(name, " ");
        
        }
        void ReadInfo()
        {
            std::cout << "Input AD NO: ";
            std:: cin >> adno;
            std::cin.ignore();

            std::cout << "Input name: ";
            std::cin.getline(name, SIZE1);

            for(int i = 0; i < SIZE; i++)
            {
                std::cout << "Input marks of subject " << i+1 << ": " << '\n';
                std::cin >> marks[i];
            }

            GetAvg();
        }

        void DisplayInfo()
        {
            std::cout << "ADNO: " << adno << std::endl;
            std::cout << "name: " << name << std::endl;
            std::cout << "Avg: " << avg << std::endl;
        }

        ~Report() {}

};

int main()
{
    Report r1;
    r1.ReadInfo();
    r1.DisplayInfo();

    return 0;
}

