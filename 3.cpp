#include <iostream>
#include <cmath>  // For pow function
using namespace std;

int main() {
    double loanAmount, annualRate, monthlyRate, monthlyPayment;
    int years, months;

    // Input loan information
    cout << "Input loan amount (RM): ";
    cin >> loanAmount;
    cout << "Input annual interest rate (%): ";
    cin >> annualRate;
    cout << "Input number of years: ";
    cin >> years;

    // Convert to monthly rate and total months
    monthlyRate = annualRate / 100 / 12;
    months = years * 12;

    // Calculate monthly payment using formula:
    // M = [P * r * (1+r)^n] / [(1+r)^n - 1]
    monthlyPayment = (loanAmount * monthlyRate * pow(1 + monthlyRate, months)) /
        (pow(1 + monthlyRate, months) - 1);

    // Display result
    cout << "Monthly payment for this loan is (RM): " << monthlyPayment << endl;

    return 0;
}