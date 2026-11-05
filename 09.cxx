#include <iostream>
using namespace std;

int main() {
    double balance;

    cout << "Enter current bank balance (Rs.): ";
    cin >> balance;

    if (balance < 5000) {
        cout << "Minimum Balance Alert" << endl;
    }

    return 0;
}
