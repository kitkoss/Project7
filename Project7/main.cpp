#include <iostream>
using namespace std;

int main() {
    int weight, distance, fuelConsumption, tankCapacity;

    cout << "Ves gruza (KG): ";
    cin >> weight;

    cout << "Rastoyanie do punkta (KM): ";
    cin >> distance;

    if (weight <= 400) {
        fuelConsumption = 2;
    }
    else if (weight <= 900) {
        fuelConsumption = 5;
    }
    else if (weight <= 1400) {
        fuelConsumption = 8;
    }
    else if (weight <= 1900) {
        fuelConsumption = 10;
    }
    else {
        cout << "Pereves gruzovik ne poedet\n";
        return 0;
    }

    tankCapacity = 1000; 

    int fuelNeeded = distance * fuelConsumption;

    if (fuelNeeded > tankCapacity) {
        cout << "Net hvatit topliva\n";
    }
    else {
        cout << "Nado zapravka " << fuelNeeded << " Litre Topliva\n";
    }

    return 0;
}
