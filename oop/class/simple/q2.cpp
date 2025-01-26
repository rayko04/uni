/*  Question 2 Create a class named Distance that has feets (as int) and inches (as float). 
    The class has Getdist (int, float) to get the specified value in object, Showdist () to 
    display distance object in feets’ inches” format. Write main () 
    function to create two distance objects. Get the value in two objects and display all objects.
*/

#include <iostream>
using namespace std;

class Distance
{
    private:
        int feets;
        float inches;

    public:
        void Getdist(int feet, float inch)
        {
            feets = feet;
            inches = inch;
        }
        void Showdist()
        {
            if(inches > 12)     //no need if here
            {
                while(inches > 12)
                {
                    inches -= 12;
                    feets++;
                }
            }
            cout << "Distance is " << feets << "' " << inches << '"' << endl;
        }
};

int main()
{
    Distance ob1, ob2;

    ob1.Getdist(120, 100);
    ob2.Getdist(60, 4);

    cout << "object 1: ";
    ob1.Showdist();

    cout << "\nobject 2: ";
    ob2.Showdist();

    return 0;
}
