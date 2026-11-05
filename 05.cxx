#include <iostream>
using namespace std;

int main() {
    float temperature;

    cout << "Enter patient's temperature in Celsius: ";
    cin >> temperature;

    if (temperature >= 39.0) {
        cout << "High Fever Alert: Seek Medical Assessment" << endl;
    }

    return 0;
}
