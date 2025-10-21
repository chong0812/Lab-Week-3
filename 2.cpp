#include <iostream>
using namespace std;

int main() {
    // Define constants
    const int SEC_TO_HOUR = 3600;
    const int SEC_TO_MINUTE = 60;

    int totalSeconds, hours, minutes, seconds;

    // Input total seconds
    cout << "Input the total time in seconds: ";
    cin >> totalSeconds;

    // Calculate hours, minutes, seconds
    hours = totalSeconds / SEC_TO_HOUR;
    totalSeconds %= SEC_TO_HOUR;
    minutes = totalSeconds / SEC_TO_MINUTE;
    seconds = totalSeconds % SEC_TO_MINUTE;

    // Display result
    cout << totalSeconds << " seconds are equal to "
        << hours << " hours, "
        << minutes << " minutes and "
        << seconds << " seconds." << endl;

    return 0;
}