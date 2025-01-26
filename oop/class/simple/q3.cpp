/*
    Question 3 Create a class named TIME that has hours, minutes and seconds data members as integer. 
    The class has settime (int, int, int) to set the specified value in object, showtime () to display 
    time object in hh:mm:ss format. Write main () function to create two time objects.
    Set the value in two objects and display all time objects.

*/

#include <iostream>
using namespace std;

class Time
{
    private:
        int hours;
        int minutes;
        int seconds;

    public:
        void settime(int h, int m, int s)
        {
            hours = h;
            minutes = m;
            seconds = s;
        }   
        void showtime()
        {
            if(seconds >= 60)   // no need if
            {
                while(seconds >= 60)
                {
                    seconds = seconds - 60;
                    minutes++;
                }
            }

            if(minutes >= 60)   // no need if
            {
                while(minutes >= 60)
                {
                    minutes = minutes - 60;
                    hours++;
                }
            }

            cout << "Time: " << hours << ':' << minutes << ':' << seconds << endl;
        }
};

int main()
{
    Time obj1, obj2;

    obj1.settime(24, 30, 60);
    obj2.settime(32, 156, 90);

    obj1.showtime();
    obj2.showtime();

    return 0;
}
