#include <iostream>

class Batsman
{
    private:
        int bcode;
        std::string bname;
        int innings, notouts, runs;
        float batavg;

        float calcAvg() const;     //return is must (?)

    public:
        Batsman() : bcode(0), bname(""), innings(0), notouts(0), runs(0), batavg(0.0f) {} // dont use formula will give infinity error

        Batsman(int code, std::string name, int i, int nO, int r) : bcode(code), bname(name), innings(i), notouts(nO), runs(r)
        {
            batavg = calcAvg();
        }

        void readData();
        void displayData() const;

        ~Batsman() {}
};

int main()
{
    Batsman b1(0001, "Aslam", 56, 34, 509);
    Batsman b2;

    b2.readData();
    std::cout << std::endl;

    b1.displayData();
    b2.displayData();

    return 0;
}

float Batsman::calcAvg() const
{
    float avg = float(runs) / (innings - notouts);

    return avg;
}

void Batsman::readData()
{
    std::cout << "Input bcode: ";
    std::cin >> bcode;

    std::cout << "Input bname: ";
    std::cin >> bname;

    std::cout << "Input innings: ";
    std::cin >> innings;

    std::cout << "Input notouts: ";
    std::cin >> notouts;

    std::cout << "Input runs: ";
    std::cin >> runs;

    batavg = calcAvg();
}

void Batsman::displayData() const
{
    std::cout << "\nCode: "    << bcode;
    std::cout << "\nname: "    << bname;
    std::cout << "\ninnings: " << innings;
    std::cout << "\nNotouts: " << notouts;
    std::cout << "\nRuns: "    << runs;
    std::cout << "\nAvg: "     << batavg << std::endl;
}
