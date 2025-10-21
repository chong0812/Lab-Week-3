#include <iostream>
using namespace std;

int main() {
    // a) Floating point named price initialized to 9.90
    float price = 9.90;

    // b) Integer named quantity
    int quantity;

    // c) Constant integer named DISC initialized to 10
    const int DISC = 10;

    // d) Floating point named totalprice
    float totalprice;

    // Get quantity from user
    cout << "Enter quantity purchased: ";
    cin >> quantity;

    // Calculate total price with discount
    totalprice = (price * quantity) * (100 - DISC) / 100.00;

    // Display result
    cout << "Total price after discount: RM " << totalprice << endl;

    return 0;
}