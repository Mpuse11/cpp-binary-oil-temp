#include <iostream>
using namespace std;

int main() {
    // Declare variables for temperature readings
    int temperature_reading_1, temperature_reading_2, temperature_reading_3;

    // Request the user to input the first temperature reading
    cout << "Enter temperature reading 1: " << endl;
    cin >> temperature_reading_1;

    // Request the user to input the second temperature reading
    cout << "Enter temperature reading 2: " << endl;
    cin >> temperature_reading_2;

    // Checking the difference between the first and second readings
    if (temperature_reading_2 - temperature_reading_1 > 50) {
        cout << "Reduce fryer heat before taking the third reading." << endl;
    }
    else if (temperature_reading_1 - temperature_reading_2 < 10) {
        cout << "Increase fryer heat before taking the third reading." << endl;
    }

    // Request the user to input the third temperature reading
    cout << "Enter temperature reading 3: " << endl;
    cin >> temperature_reading_3;

    // Checking if the oil is ready for frying
    if (temperature_reading_3 < 60) {
        cout << "Oil is not ready for frying." << endl;
    }

    return 0;
}