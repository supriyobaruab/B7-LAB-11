#include <iostream>
using namespace std;
class Calculation
{
private:
    int count = 0;
    int num[6];
    int total = 0;

public:
    void percentage(int n)
    {
        int per = (n * 100) / 600;
        if (per % 2 == 0)
        {
            cout << "Even number" << endl;
        }
        else
        {
            cout << "Odd number" << endl;
        }
        for (int i = 2; i < 100; i++)
        {
            if (per % i == 0)
            {
                count = 1;
                break;
            }
        }
        cout << "Percentage " << per << endl;
        if (count == 1)
        {
            cout << "Per is not a prime ";
        }
        else
        {
            cout << "Per is a prime ";
        }
    }
    void getValue()
    {
        for (int i = 0; i < 6; i++)
        {
            cout << "Enter the mark :";
            cin >> num[i];
            if (num[i] < 0 || num[i] > 100)
            {
                cout << "Invalid value " << endl;
                cout << "Enter the mark again :";
                cin >> num[i];
            }
            total += num[i];
        }
        percentage(total);
    }
};
int main()
{
    Calculation cal;
    cal.getValue();
    return 0;
}