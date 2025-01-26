#include <iostream>
#include <fstream>
using namespace std;

class Shape
{
protected:
    double length;
    double width;

public:
    virtual void getData()
    {
        cout << "Input Length: ";
        cin >> length;

        cout << "Input width: ";
        cin >> width;
    }
    virtual void showArea() = 0;
    virtual void writeData(ofstream &out) = 0;
    virtual ~Shape() {}
};

class Triangle : public Shape
{
private:
    double area;

public:
    void showArea()
    {
        getData();
        area = (0.5) * length * width;
        cout << "Area: " << area << endl;
    }
    void writeData(ofstream &out)
    {
        out.write((char *)this, sizeof(Triangle));
    }
};

class Rectangle : public Shape
{
private:
    double area;

public:
    void showArea()
    {
        getData();
        area = length * width;
        cout << "Area: " << area << endl;
    }
    void writeData(ofstream &out)
    {
        out.write((char *)this, sizeof(Rectangle));
    }
};

int main()
{
    ofstream out("file.bin", std::ios::out | std::ios::binary);
    if (!out)
    {
        cout << "file not formed";
        exit(1);
    }

    Shape *ptr[5];

    char choice;
    for (int i = 0; i < 5; i++)
    {
        cout << "REctangle or TRiangle (R/T): ";
        cin >> choice;

        if (choice == 'R')
        {
            ptr[i] = new Rectangle;
        }
        else if (choice == 'T')
        {
            ptr[i] = new Triangle;
        }
        else
        {
            cout << "wrong input" << endl;
            i--;
            continue;
        }
        ptr[i]->showArea();
        ptr[i]->writeData(out);
    }
    for (int i = 0; i < 5; i++)
    {
        delete ptr[i];
    }
}
