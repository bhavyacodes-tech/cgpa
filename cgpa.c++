#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int numCourses;

    float totalGradePoints = 0, totalCredits = 0;

    cout << "Enter the number of courses: ";
    cin >> numCourses;

    
    string courseNames[numCourses];
    float grades[numCourses];

    float credits[numCourses];

    for (int i = 0; i < numCourses; i++) {
        cout << "\nCourse " << i + 1 << " name: ";
        cin >> ws; 
        getline(cin, courseNames[i]);

        cout << "Enter grade (on 10-point scale) for " << courseNames[i] << ": ";
        cin >> grades[i];

        cout << "Enter credit hours for " << courseNames[i] << ": ";
        cin >> credits[i];

        totalGradePoints += grades[i] * credits[i];

        totalCredits += credits[i];
    }

    float cgpa = totalGradePoints / totalCredits;

    
    cout << "\n------ Course Summary ------\n";
    cout << left << setw(20) << "Course Name" << setw(10) << "Grade" << setw(15) << "Credit Hours" << endl;

    for (int i = 0; i < numCourses; i++) {
        cout << left << setw(20) << courseNames[i] << setw(10) << grades[i] << setw(15) << credits[i] << endl;
    }

    cout << fixed << setprecision(2);

    cout << "\nTotal Credits: " << totalCredits << endl;

    cout << "Total Grade Points: " << totalGradePoints << endl;

    cout << "Final CGPA: " << cgpa << endl;

    return 0;
}
