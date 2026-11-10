#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double distance, fuelPer100km, pricePerLiter;
    int hours, minutes;
    double totalTimeHours, averageSpeed, fuelUsed, fuelCost;

    cout << "Enter distance (km): ";
    cin >> distance;

    cout << "Enter hours: ";
    cin >> hours;

    cout << "Enter minutes: ";
    cin >> minutes;

    cout << "Enter fuel use (liters per 100 km): ";
    cin >> fuelPer100km;

    cout << "Enter price per liter (birr): ";
    cin >> pricePerLiter;

    totalTimeHours = hours + (minutes / 60.0);
    averageSpeed = distance / totalTimeHours;
    fuelUsed = (distance / 100.0) * fuelPer100km;
    fuelCost = fuelUsed * pricePerLiter;

    cout << fixed << setprecision(2);
    cout << "Average speed (km/h): " << averageSpeed << endl;
    cout << "Fuel used (liters): " << fuelUsed << endl;
    cout << "Fuel cost (birr): " << fuelCost << endl;

    return 0;
}
