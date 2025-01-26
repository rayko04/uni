#include <iostream>
using namespace std;

class MyClass
{
    private:
        int value;

    public:
        void getValue()
        {
            cout << "Input Value: ";
            cin >> value;
        }
        void showValue()
        {
            cout << "The value is: " << value << '\n';
        }
};

int main()
{
    MyClass obj1, obj2;

    obj1.getValue();
    obj2.getValue();
    cout << endl;

    obj2.showValue();

    return 0;
}



