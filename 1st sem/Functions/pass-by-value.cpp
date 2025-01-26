#include<iostream>
using namespace std;

///Pass by copy
void show(int no)   /// formal Parameter
{
    no = 500;
    cout<<"No in show() is "<<no<<endl;
}
int main()
{
    int no = 100;
    show(no);     /// Actual Parameter
    cout<<"No in main() is "<<no<<endl;
    return 0;
}