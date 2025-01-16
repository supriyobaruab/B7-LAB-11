#include <iostream>
#include <string>
using namespace std;

class Scholar
{
private:
    int scID;
    string name;
    double semesterGrade;

public:
    Scholar() : scID(0), name(""), semesterGrade(0.0) {}
    Scholar(int id, string n, double grade) : scID(id), name(n), semesterGrade(grade) {}

    void setInfo(int id, string n, double grade)
    {
        scID = id;
        name = n;
        semesterGrade = grade;
    }

    void displayInfo() const
    {
        cout << "Scholar ID: " << scID << endl;
        cout << "Name: " << name << endl;
        cout << "Semester Grade: " << semesterGrade << endl;
    }

    double SGPA() const
    {
        double discount = 0.0;
        if (semesterGrade >= 9)
        {
            discount = 0.1;
        }
        else if (semesterGrade >= 8)
        {
            discount = 0.05;
        }
        return semesterGrade - (semesterGrade * discount);
    }

    double CGPA(double secondSemesterGrade) const
    {
        double averageGrade = (semesterGrade + secondSemesterGrade) / 2;
        return averageGrade;
    }
};

int main()
{
    Scholar sc1, sc2;

    sc1.setInfo(101, "John Doe", 8.5);
    sc2.setInfo(102, "Jane Smith", 9.2);

    cout << "Scholar 1 Info:" << endl;
    sc1.displayInfo();
    cout << "SGPA: " << sc1.SGPA() << endl;

    cout << "Scholar 2 Info:" << endl;
    sc2.displayInfo();
    cout << "SGPA: " << sc2.SGPA() << endl;

    double sc1SecondSemesterGrade = 8.7;
    double sc2SecondSemesterGrade = 9.0;

    cout << "Scholar 1 CGPA after 1 year: " << sc1.CGPA(sc1SecondSemesterGrade) << endl;
    cout << "Scholar 2 CGPA after 1 year: " << sc2.CGPA(sc2SecondSemesterGrade) << endl;

    return 0;
}