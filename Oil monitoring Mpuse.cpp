#include <iostream>
using namespace std;

int main() {
    // Declare variables to store temperature readings
    int temperature_reading_1, temperature_reading_2, temperature_reading_3;

    // Request the user to input the first temperature reading
    cout << "Enter temperature reading 1: " << endl; // Prompt the user to enter the first temperature value
    cin >> temperature_reading_1; // Store the first temperature reading entered by the user into the variable 'temperature_reading_1'

    // Request the user to input the second temperature reading
    cout << "Enter temperature reading 2: " << endl; // Prompt the user to enter the second temperature value
    cin >> temperature_reading_2; // Store the second temperature reading entered by the user into the variable 'temperature_reading_2'

    // Checking the difference between the first and second readings to provide feedback about fryer heat
    if (temperature_reading_2 - temperature_reading_1 > 50) { // If the difference between the second and first readings is greater than 50 degrees
        cout << "Reduce fryer heat before taking the third reading." << endl; // Suggest reducing the fryer heat if the temperature difference is too large
    }
    else if (temperature_reading_1 - temperature_reading_2 < 10) { // If the difference between the first and second readings is less than 10 degrees
        cout << "Increase fryer heat before taking the third reading." << endl; // Suggest increasing the fryer heat if the temperatures are too close together
    }

    // Request the user to input the third temperature reading
    cout << "Enter temperature reading 3: " << endl; // Prompt the user to enter the third temperature value
    cin >> temperature_reading_3; // Store the third temperature reading entered by the user into the variable 'temperature_reading_3'

    // Checking if the oil is ready for frying based on the third temperature reading
    if (temperature_reading_3 < 60) { // If the third temperature reading is below 60 degrees
        cout << "Oil is not ready for frying." << endl; // Inform the user that the oil is not hot enough for frying
    }

    return 0; // Return 0 to indicate successful program execution
}
