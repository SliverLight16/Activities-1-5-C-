#include <iostream>
using namespace std;

int main() {
    int annualMice;
    int yearlyLitter = 5;
    int litterSize = 3;

    cout << "One female may give birth to ";
    annualMice = yearlyLitter * litterSize;
    cout << annualMice << " to ";

    litterSize = 14;
    yearlyLitter = 10;
    annualMice = litterSize * yearlyLitter;

    cout << annualMice << " mice per year.";
    }