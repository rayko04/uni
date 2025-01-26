/*
    Question 4 Create a class Person that has three data members Pid, Pname, PSalary 
    with appropriate data type. Person class also contains the member functions: 
    getdata() function is used to input values, showdata() function is used to display value,
    setdata() function is used to set the values of data members using parameters, getSalary() function
    is used to return the value of person salary. The program should create three objects of the person class 
    and input values for these objects. The program display the details of highest salary holder person.
*/

#include <iostream>

class Person
{
    private:
        int Pid;
        std::string Pname;
        double Psalary;

    public:
        void getdata()
        {
            std::cout << "Input id: ";
            std::cin >> Pid;
            std::cout << "Input name: ";
            std::cin >> Pname;
            std::cout << "Input salary: ";
            std::cin >> Psalary;
            std::cout << std::endl;
        }
        void showdata()
        {
            std::cout << "id: " << Pid << '\n';
            std::cout << "name: " << Pname << '\n';
            std::cout << "salary: " << Psalary << '\n';            
        }
        double returnSalary()
        {
            return Psalary;
        }
};

int main()
{
    Person p1, p2, p3;

    p1.getdata();
    p2.getdata();
    p3.getdata();

    double p1Salary = p1.returnSalary();
    double p2Salary = p2.returnSalary();
    double p3Salary = p3.returnSalary();

    if((p1Salary > p2Salary) && (p1Salary > p3Salary))  //can use ternary operator(conditional) if 2 conditions
        p1.showdata();
    else if((p2Salary > p1Salary) && (p2Salary > p3Salary))
        p2.showdata();
    else
        p3.showdata();

    return 0;
}
