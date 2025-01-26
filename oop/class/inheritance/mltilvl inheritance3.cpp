// only base data MEMBERS commented out 

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

class derive1 : private base
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

class dderive : public derive1
{
    private:
        void prifun1()
        {
          //  pridata = 45;
          //pridisp();
          profun();
          pubfun();
          //prifun();   private
          cout << " pri dderive" << '\n';
        }
    protected:
        void profun1()
        {
            //prodata = 15;
            profun();
            pubfun();
            cout << "pro dderive" << '\n';
        }
    public:
        void pubfun1()
        {
           // pubdata = 415;
            profun();
            pubfun();
            cout << "pub dderive" << '\n';
        }
};

class dderive2 : protected derive1
{
    private:
        void prifun2()
        {
          //  pridata = 45;
          //pridisp();
          profun();
          pubfun();
          //prifun();   private
          cout << " pri dderive2" << '\n';
        }
    protected:
        void profun2()
        {
            //prodata = 15;
            profun();
            pubfun();
            cout << "pro dderive2" << '\n';
        }
    public:
        void pubfun2()
        {
            //pubdata = 415;
            profun();
            pubfun();
            cout << "pub dderive2" << '\n';
        }
};
class dderive3 : private derive1
{
    private:
        void prifun3()
        {
          //  pridata = 45;
          //pridisp();
          profun();
          pubfun();
          //prifun();   private
          cout << " pri dderive3" << '\n';
        }
    protected:
        void profun3()
        {
           // prodata = 15;
            profun();
            pubfun();
            cout << "pro dderive3" << '\n';
        }
    public:
        void pubfun3()
        {
            //pubdata = 415;
            profun();
            pubfun();
            cout << "pub dderive3" << '\n';
        }
};

int main()
{
    dderive d;
    d.pubfun();
    //d.pubdisp();    // cant as private inheritance
    d.pubfun1();
    cout << endl;

    dderive2 d2;
    //d2.pubfun();     //cant as protec inheritance
    //d2.pubdisp();    //cant as protec inheritance
    d2.pubfun2();    
    cout << endl;

    dderive3 d3;
    //d3.pubfun();     //cant as priv inheritance
    //d3.pubdisp();    //cant as priv inheritance
    d3.pubfun3();
    cout << endl;

    return 0;
}
