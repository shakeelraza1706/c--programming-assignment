#include <iostream>
using namespace std;

int main() {
    int hours, studentID;

    cout << "Enter number of hours parked: ";
    cin >> hours;
    cout << "Do you have a valid student ID? (1 for yes, 0 for no): ";
    cin >> studentID;

    if (studentID == 1 && hours >= 2) {
        cout << "Student Parking Discount Applicable" << endl;
    }

    return 0;
}
