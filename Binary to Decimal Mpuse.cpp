#include <iostream>
#include <math.h>
#include <string>

using namespace std;

// Convert binary to decimal
int binaryToDecimal(string binary) {
    int decimal = 0;
    int power = 0;

    // Loop through the binary string from the last character
    for (int i = binary.length() - 1; i >= 0; i--) {
        if (binary[i] == '1') {
            decimal += pow(2, power); // Add the corresponding power of 2
        }
        power++; // Increment the power
    }
    return decimal;
}

// Convert decimal to binary
string decimalToBinary(int decimal) {
    if (decimal == 0) {
        return "0"; // Handle the case when decimal is 0
    }
    string binary = "";
    while (decimal > 0) {
        binary = to_string(decimal % 2) + binary;
        decimal /= 2;
    }
    return binary;
}

int main() {
    string binaryInput = "1101";
    int decimalOutput = binaryToDecimal(binaryInput);
    cout << "Binary " << binaryInput << " to decimal is: " << decimalOutput << endl;

    int decimalInput = 13;
    string binaryOutput = decimalToBinary(decimalInput);
    cout << "Decimal " << decimalInput << " to binary is: " << binaryOutput << endl;

    return 0;
}