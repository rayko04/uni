/// Member Functions Defined Outside the Class
/// object as argument
#include<iostream>
using namespace std;

class Distance
{
    private:
        int feets;
        float inches;
    public:
        /// no argument constructor
        Distance() : feets(0), inches(0.0f) {}
        /// Two arguments constructor
        Distance(int f, float inc) : feets(f), inches(inc) {}

        void setdist(int, float);
        void getdist();
        void Showdist();

        Distance adddist(Distance dd)
        {
            Distance temp;
            temp.feets = feets + dd.feets;
            temp.inches = inches + dd.inches;
            while(temp.inches >= 12.0f)
            {
                temp.inches -= 12.0f;
                temp.feets++;
            }
            ///temp.Showdist();
            return temp;
        }

        /// destructor
        ~Distance() {}
};

int main()
{
    Distance d1(1,3.1f), d2, d3;
    d2.setdist(7,29.4f);    /// 7, 9.4
    cout<<endl;
    d1.Showdist();
    d2.Showdist();

    cout<<endl;
   d3 = d1.adddist(d2);
   d3.Showdist();

    return 0;
}


void Distance::getdist()
{
    cout<<"Enter feets ";
    cin>>feets;
    cout<<"Enter Include ";
    cin>>inches;
}
void Distance::Showdist()
{
    cout<<"Distance "<<feets<<'\''<<inches<<'\"'<<endl;
}
void Distance::setdist(int fts, float inch)
{
    feets = fts;
    inches = inch;
}
