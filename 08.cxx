#include <iostream>
using namespace std;

int main() {
    float temperature;

    cout << "Enter the room temperature: ";
    cin >> temperature;

    if (temperature > 30.0) {
        cout << "Turn On the Cooling System" << endl;
    }

    return 0;
}
