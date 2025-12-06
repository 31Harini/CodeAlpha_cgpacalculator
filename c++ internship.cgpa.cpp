#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of courses: ";
    cin >> n;

    double grade, credit;
    double totalCredits = 0, totalGradePoints = 0;

    for (int i = 1; i <= n; i++) {
        cout << "\nCourse " << i << " grade: ";
        cin >> grade;
        cout << "Course " << i << " credit hours: ";
        cin >> credit;

        totalCredits += credit;
        totalGradePoints += grade * credit;
    }

    double gpa = totalGradePoints / totalCredits;
    double cgpa = gpa;   // Same unless previous semesters are added

    cout << "\nTotal Credits = " << totalCredits;
    cout << "\nTotal Grade Points = " << totalGradePoints;
    cout << "\nGPA = " << gpa;
    cout << "\nCGPA = " << cgpa;

    return 0;
}


