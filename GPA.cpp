
#include <iostream>
using namespace std;
/* Haggla Mensah Agyei*/

int main() {
    int numCourses, credits, totalCredits = 0;
    float grade, totalGradePoints = 0, GPA , cGPA ;
    string name;
    
    cout << "Enter the number of courses: ";
    cin >> numCourses;
    
    for (int i = 1; i <= numCourses; i++) {
        cout << "Enter the name of course "<< i << ": ";
        cin>> name;
        cout << "Enter the credits: " ;
        cin >> credits;
        totalCredits += credits;
        
        cout << "Enter the gradepoint: " ;
        cin >> grade;
        totalGradePoints += grade * credits;
    }
    
    GPA = totalGradePoints / totalCredits;
    cout <<endl;
    cout << "Your Total GradePoint for this semester is: " << totalGradePoints << endl;
    cout << endl;
    cout << "Your Credits for this semester is: " << totalCredits << endl;
    cout <<endl;
    cout << "Your GPA for this semester is: " << GPA << endl;
    
    // Calculate CGPA
    float prevCgpa, prevTotalCredits, prevTotalGradePoints;
    int numPrevCourses;
    
    cout << "Enter your previous Total Credit: ";
    cin >> prevTotalCredits;
    cout << "Enter the Total GradePoint for previous course: " ;
    cin >>prevTotalGradePoints;
    
    cGPA = (prevTotalGradePoints + totalGradePoints) / (prevTotalCredits + totalCredits);
    
    cout << "Your cGPA is: " << cGPA << endl;
    
    return 0;
}
