#include <iostream>
using namespace std;
class smallobj
{                 // define a class using the keyword class
private:          // access modifiers for member data
    int someData; // member data
public:           // access modifiers for member functions
    void setData(int d)
    { // member function to set data
        someData = d;
    }
    void showData()
    { // member function to display data
        cout << "\nData is " << someData;
    }
};
int main()
{
    smallobj s1, s2;
    s1.setData(10);
    s2.setData(20);
    s1.showData();
    s2.showData();
}
