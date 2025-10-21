#include <iostream>
using namespace std;

int main() {
    double mass, velocity, kineticEnergy;

    // Input mass and velocity
    cout << "Input the object's mass (kg): ";
    cin >> mass;
    cout << "Input the object's velocity (m/s): ";
    cin >> velocity;

    // Calculate kinetic energy: KE = 1/2 * m * v^2
    kineticEnergy = 0.5 * mass * velocity * velocity;

    // Display result
    cout << "The kinetic energy (Joules): " << kineticEnergy << endl;

    return 0;
}