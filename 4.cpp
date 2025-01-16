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
    // Default constructor
    Scholar() : scID(0), name(""), semesterGrade(0.0) {}

    // Parameterized constructor
    Scholar(int id, string n, double grade) : scID(id), name(n), semesterGrade(grade) {}

    // Setter method to set scholar information
    void setInfo(int id, string n, double grade)
    {
        scID = id;
        name = n;
        semesterGrade = grade;
    }

    // Method to display scholar information
    void displayInfo() const
    {
        cout << "Scholar ID: " << scID << endl;
        cout << "Name: " << name << endl;
        cout << "Semester Grade: " << semesterGrade << endl;
    }

    // Method to calculate SGPA with discounts
    double SGPA() const
    {
        double discount = 0.0;

        if (semesterGrade >= 9)
        {
            discount = 0.1; // 10% discount for grades 9 and above
        }
        else if (semesterGrade >= 8)
        {
            discount = 0.05; // 5% discount for grades 8 and above
        }

        return semesterGrade - (semesterGrade * discount);
    }

    // Method to calculate CGPA after 1 year (2 semesters)
    double CGPA(double secondSemesterGrade) const
    {
        double averageGrade = (semesterGrade + secondSemesterGrade) / 2;
        return averageGrade;
    }
};

int main()
{
    // Creating objects using the default constructor
    Scholar sc1, sc2;

    // Setting details for sc1
    sc1.setInfo(101, "John Doe", 8.5);
    // Setting details for sc2
    sc2.setInfo(102, "Jane Smith", 9.2);

    // Displaying information for sc1
    cout << "Scholar 1 Info:" << endl;
    sc1.displayInfo();
    cout << "SGPA: " << sc1.SGPA() << endl;

    // Displaying information for sc2
    cout << "Scholar 2 Info:" << endl;
    sc2.displayInfo();
    cout << "SGPA: " << sc2.SGPA() << endl;

    // Assuming the second semester grades for the CGPA calculation
    double sc1SecondSemesterGrade = 8.7;
    double sc2SecondSemesterGrade = 9.0;

    // Calculating and displaying CGPA after 1 year (2 semesters)
    cout << "Scholar 1 CGPA after 1 year: " << sc1.CGPA(sc1SecondSemesterGrade) << endl;
    cout << "Scholar 2 CGPA after 1 year: " << sc2.CGPA(sc2SecondSemesterGrade) << endl;

    return 0;
}