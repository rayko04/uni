#include <iostream>
using namespace std;

/*
    private: accessable only inside class and by friends
    protected: accessible inside class plus in derived class(pub,pro,pri) and friends of base and derived
*/

class base
{
    private:
        int pridata;
        void pridisp()
        {
            cout << "pri base class" << '\n';
        }
    protected:
        int prodata;
        void prodisp()
        {
            cout << "pro base class" << '\n';
        }
    public:
        int pubdata;
        void pubdisp()
        {
            cout << "pub base class" << '\n';
        }
};

class derive1 : public base
{
    private:
        void prifun()
        {
          //  pridata = 45;
          //pridisp();
          prodisp();
          cout << " pri derive1" << '\n';
        }
    protected:
        void profun()
        {
            prodata = 15;
            prodisp();
            pubdisp();
            cout << "pro derive1" << '\n';
        }
    public:
        void pubfun()
        {
            pubdata = 415;
            prodisp();
            pubdisp();
            cout << "pub derive1" << '\n';
        }
};

class derive2 : protected base
{
    private:
        void prifun2()
        {
          //  pridata = 45;
          //pridisp();
          prodisp();
          cout << " pri derive2" << '\n';
        }
    protected:
        void profun2()
        {
            prodata = 15;
            prodisp();
            pubdisp();
            cout << "pro derive2" << '\n';
        }
    public:
        void pubfun2()
        {
            pubdata = 415;
            prodisp();
            pubdisp();
            cout << "pub derive2" << '\n';
        }
};

class derive3 : private base
{
    private:
        void prifun3()
        {
          //  pridata = 45;
          //pridisp();
          prodisp();
          cout << " pri derive3" << '\n';
        }
    protected:
        void profun3()
        {
            prodata = 15;
            prodisp();
            pubdisp();
            cout << "pro derive3" << '\n';
        }
    public:
        void pubfun3()
        {
            pubdata = 415;
            prodisp();
            pubdisp();  //base members are private members of derived3 here so call works
            cout << "pub derive3" << '\n';
        }
};


int main()
{
    derive1 d;
    d.pubfun();
    d.pubdisp();    // can call base class function using dericed class object as public inheritance

    cout << endl;

    derive2 dd;
    dd.pubfun2();
    //dd.pubdisp(); // cant as protected ineritance: all members of base class become protected for that derived class

    cout << endl;
    
    derive3 ddd;
    ddd.pubfun3();
    //ddd.pubdisp(); cant as private inheritance
    
    return 0;
}
