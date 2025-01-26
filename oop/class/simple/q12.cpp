#include <iostream>

constexpr int SIZE = 5;
class Report
{
    private:

       int adno;
       std::string name;
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

        Report() : adno(0), name("ray"), avg(0.0f)
        {
           for(int i = 0; i < SIZE; i++)
           {
                marks[i] = 0.0f;
           }
        }
        void ReadInfo()
        {
            std::cout << "Input AD NO: ";
            std:: cin >> adno;

            std::cout << "Input name: ";
            std:: cin >> name;

            for(int i = 0; i < SIZE; i++)
            {
                std::cout << "Input marks of subject " << i+1 << ": " << '\n';
                std::cin >> marks[i];
            }

            GetAvg();
        }

        void DisplayInfo() const
        {
            std::cout << "ADNO: " << adno << std::endl;
            std::cout << "name: " << name << std::endl;
            std::cout << "Avg: " << avg << std::endl;
        }

        void change()
        {
            adno++;
    
        }
        ~Report() {}

};

int main()
{
    Report r1;
    r1.ReadInfo();
    r1.DisplayInfo();
    r1.change();
     r1.DisplayInfo();
    return 0;
}
