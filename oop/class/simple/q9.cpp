#include <iostream>

class Test
{
    private:
        int testCode;
        std::string description;
        int noCandidate;
        int centreReq;

        int calCentre() const;

    public:
        Test() : testCode(0), description(""), noCandidate(0)
        {
            centreReq = calCentre();
        }
        Test(int c, std::string d, int n) : testCode(c), description(d), noCandidate(n)
        {
            centreReq = calCentre();
        }
        void schedule();
        void dispTest() const;
        ~Test() {}
};

int main()
{
    Test T1(1, "T1", 50);
    Test T2;

    T2.schedule();
    std::cout << std::endl;
    T1.dispTest();
    std::cout << std::endl;
    T2.dispTest();

    return 0;
}

int Test::calCentre() const
{
    int temp = noCandidate/100+1;

    return temp;
}
void Test::schedule()
{
    std::cout << "Enter TestCode: ";
    std::cin >> testCode;
    std::cout << "Enter Description: ";
    std::cin >> description;
    std::cout << "Enter NOCandidate: ";
    std::cin >> noCandidate;

    centreReq = calCentre();
}
void Test::dispTest() const
{
    std::cout << "\nCode: " << testCode;
    std::cout << "\nDescription: " << description;
    std::cout << "\nNo CAndidates: " << noCandidate;
    std::cout << "\nCentres: " << centreReq << std::endl;
}
