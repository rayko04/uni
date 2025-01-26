#include<iostream>
using namespace std;

///Pass by reference
void show(int& n)   /// formal Parameter
{
    n = 500;
    cout<<"No in show() is "<<n<<endl;
}
int main()
{
    int no = 100;
    show(no);     /// Actual Parameter
    cout<<"No in main() is "<<no<<endl;
    return 0;
}