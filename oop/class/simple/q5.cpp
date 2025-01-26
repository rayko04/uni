/*
    Question 5 Write a class Employee with three data members Eid type int, Ename type string 
    and Esalary type double. It also contains the following member function: 
        • The get() function is used to input values 
        • The show() function is used to display values 
        • The set() function is used to set the values of data members using parameters 
        • The returnSalary() function is used to return the salary of employee. 
    The program should create two object of the employee class, input the values and 
    display the record of that employee whose monthly salary is greater. 
*/

#include <iostream>

class Employ
{
    private:
        int Eid;
        std::string Ename;
        double Esalary;
    
    public:
        void get()
        {
            std::cout << "Input id: ";
            std::cin >> Eid;
            std::cout << "Input name: ";
            std::cin >> Ename;
            std::cout << "Input salary: ";
            std::cin >> Esalary;
        }
        void show()
        {
            std::cout << "id: " << Eid << '\n';
            std::cout << "name: " << Ename << '\n';
            std::cout << "salary: " << Esalary << '\n';
        }
        void set(int id, std::string name, double salary)
        {
            Eid = id;
            Ename = name;      // cant with c style string but can with std::string
            Esalary = salary;
        }
        double returnsalary()
        {
            return Esalary;
        }
};

int main()
{
    Employ e1, e2;
    e1.get();
    e2.set(2, "spid1", 3000);

    (e1.returnsalary() > e2.returnsalary()) ? e1.show() : e2.show();

    return 0;
}
