#include <iostream>
using namespace std;

int main() {
    float speed, speedLimit;

    cout << "Enter vehicle's speed: ";
    cin >> speed;
    cout << "Enter the speed limit: ";
    cin >> speedLimit;

    if (speed > speedLimit) {
        cout << "Speed Limit Violated" << endl;
    }

    return 0;
}
