#include <iostream>
using namespace std;

class Folks
{
private:
    int fID;
    float monthlyMoney;

public:
    void setData(int a, float b)
    {
        fID = a;
        monthlyMoney = b;
    }
    void showData()
    {
        cout << "The id of the staff :" << fID;
        cout << endl
             << "Monthly Wages of the staff :" << monthlyMoney;
    }
    float yearlyMoneyWithBonus()
    {
        float bonus = monthlyMoney * 0.1;
        float yearly = (monthlyMoney * 12) + (bonus * 2);

        return yearly;
    }
};
int main()
{
    Folks s1;
    s1.setData(101, 5000.0f);
    s1.showData();
    cout << endl
         << s1.yearlyMoneyWithBonus();
    return 0;
}