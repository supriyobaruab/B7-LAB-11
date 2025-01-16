#include <iostream>
using namespace std;

class Person
{
private:
    double initialAmount;
    double bonus;

public:
    Person() : initialAmount(0.0), bonus(0.0) {}
    Person(double initialAmount, double bonus) : initialAmount(initialAmount), bonus(bonus) {}

    void setInitialAmount(double amount)
    {
        initialAmount = amount;
    }

    double getInitialAmount() const
    {
        return initialAmount;
    }

    double getBonus() const
    {
        return bonus;
    }

    void setBonus(double b)
    {
        bonus = b;
    }

    double getYearEndBalance() const
    {
        return initialAmount + bonus;
    }

    void display() const
    {
        cout << "Initial Amount: " << initialAmount << endl;
        cout << "Bonus: " << bonus << endl;
        cout << "Year-end Balance: " << getYearEndBalance() << endl;
    }
};

int main()
{
    Person person1;
    person1.setInitialAmount(5000);
    person1.setBonus(500);

    Person person2(10000, 1000);

    cout << "Person 1 Info:" << endl;
    person1.display();

    cout << "Person 2 Info:" << endl;
    person2.display();

    return 0;
}