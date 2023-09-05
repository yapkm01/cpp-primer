#include <iostream>
using namespace std;

// Use pass-by-value: when:

// The function does not alter the supplied argument (and overhead is not an issue; otherwise a const reference might be better)
// Arguments will be r-values (values that cannot be used on the left hand side of an assignment)

// speed in km/h, distance in km
// returns time in minutes
double minutesToDestination(double speed, double distance) {
    return distance > 0 ? (distance / speed) * 60 : 0;
}

int main() {
    double speed = 100;
    double distance = 25;

    cout << "You will arrive at your destination in "
         << minutesToDestination(speed, distance)
         << " minute(s)." << endl;

    return 0;
}
