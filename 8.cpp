#include <iostream>
using namespace std;

class Distance // class
{
private: // access modifier
    int feet;
    float inches; // member data

public:
    void setDist(int ft, float in) // set Distance to args
    {
        feet = ft;
        inches = in;
    }

    void getDist() // get length from user
    {
        cout << "\nEnter feet: ";
        cin >> feet;
        cout << "Enter inches: ";
        cin >> inches;
    }

    void showDist() // display distance
    {
        cout << feet << "ft " << inches << " inch";
    }
}; // end of class

int main()
{
    Distance dist1, dist2; // define two lengths

    dist1.setDist(11, 6.25); // set dist1
    dist2.getDist();         // get dist2 from user

    // display lengths
    cout << "dist1 = ";
    dist1.showDist();
    cout << endl;

    cout << "dist2 = ";
    dist2.showDist();
    cout << endl;

    return 0;
}
