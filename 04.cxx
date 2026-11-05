#include <iostream>
using namespace std;

int main() {
    int overdueDays;

    cout << "Enter the number of overdue days: ";
    cin >> overdueDays;

    if (overdueDays > 0) {
        cout << "Late Return: Fine Applicable" << endl;
    }

    return 0;
}
