#include <iostream>

struct Employ
{
    int id {};
    int salary {2};
};

int main()
{
    Employ e4; //default values id value, salary 2
    Employ e3 {}; //id gets value initialized, salary default to 2

    //Aggregation initialization

    //Employ e1 (2, 6);  //doesnt work with std::array
    //Employ e1 = {2, 6};
    Employ e1 {2, 6};

    //designated initialization

    Employ e2 {.id {1}, .salary {5}};   //data members must be in order

    //Assignment

    e1 = {e1.id, 7}; //leaving out e1.id would value(zero) initialize it(or default if avail)
    //e1 = {.id {e1.id}, .salary {7}};
    std::cout << e1.id << e1.salary;

    return 0;
}
