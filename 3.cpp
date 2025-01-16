#include <iostream>
using namespace std;
class Trapezoid
{
private:
    float a, b, h;

public:
    Trapezoid() : a(0), b(0), h(0) {}
    Trapezoid(float side1, float side2, float height)
    {
        a = side1;
        b = side2;
        h = height;
    }
    void setinfo1(float side1, float side2)
    {
        a = side1;
        b = side2;
    }
    void setinfo2(float height)
    {
        h = height;
    }
    float getinfo1()
    {
        return a;
    }
    float getinfo2()
    {
        return b;
    }
    float getArea()
    {
        float area = 0.5 * (a + b) * h;
        return area;
    }
    void display()
    {
        cout << "Area of Trapezoid :" << getArea();
    }
};
int main()
{
    Trapezoid t1;
    t1.setinfo1(5, 7);
    t1.setinfo2(4);
    t1.display();
    Trapezoid t2(5, 7, 4);
    t2.setinfo1(5, 7);
    t2.setinfo2(4);
    t2.display();
    return 0;
}