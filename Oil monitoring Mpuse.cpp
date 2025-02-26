#include <iostream>
using namespace std;
//0206111246081

int main() {
    // Declare variables for temperature readings
    int temperature_reading_1, temperature_reading_2, temperature_reading_3;

    // Request the user to input the first temperature reading
    cout << "Enter temperature reading 1: " << endl; // Prompt user for the first temperature reading
    cin >> temperature_reading_1; // Read the user's input and store it in temperature_reading_1

    // Request the user to input the second temperature reading
    cout << "Enter temperature reading 2: " << endl; // Prompt user for the second temperature reading
    cin >> temperature_reading_2; // Read the user's input and store it in temperature_reading_2

    // Checking the difference between the first and second readings
    if (temperature_reading_2 - temperature_reading_1 > 50) { // If the difference is greater than 50, give a warning
        cout << "Reduce fryer heat before taking the third reading." << endl;
    }
    else if (temperature_reading_1 - temperature_reading_2 < 10) { // If the temperature difference is small, suggest increasing heat
        cout << "Increase fryer heat before taking the third reading." << endl;
    }

    // Request the user to input the third temperature reading
    cout << "Enter temperature reading 3: " << endl;
    cin >> temperature_reading_3; // Read the user's input for the third temperature
}
