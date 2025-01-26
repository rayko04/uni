#include <iostream>

class Race
{
    private:
        int id;
        static int total;
    public:
        Race()
        {
            total++;
            id = total;
        }
        void showData()
        {
            std::cout << "Id: " << id << '\n';
        }
        static void showTotal()
        {
            std::cout << "Total: " << total << '\n';
        }
};

int Race::total = 0;   //forward declare + initialize    not another static

int main()
{
    Race::showTotal();
    Race r1, r2, r3;
    r1.showData();
    r1.showTotal();
    r2.showTotal();
    r2.showData();
    r3.showData();
    Race::showTotal();
   
    return 0;
}
