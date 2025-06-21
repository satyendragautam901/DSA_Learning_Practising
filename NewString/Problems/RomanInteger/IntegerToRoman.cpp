#include <iostream>
using namespace std;

// Function to convert integer to Roman
string IntegerToRoman(int num) {
    // Arrays of values and corresponding Roman symbols
    int values[] =    {1000, 900, 500, 400, 100, 90,  50,  40, 10, 9, 5, 4, 1};
    string symbols[] = {"M", "CM", "D", "CD","C", "XC","L", "XL","X","IX","V","IV","I"};

    string result = ""; // Final Roman string

    for (int i = 0; i < 13; i++) {
        // Repeat while current value can be subtracted
        while (num >= values[i]) {
            result += symbols[i];   // Add symbol to result
            num -= values[i];       // Subtract value from number
        }
    }

    return result;
}

int main() {
    int number = 1248;
    string roman = IntegerToRoman(number);
    cout << "Integer to Roman: " << roman << endl;

    return 0;
}
