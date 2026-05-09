#ifndef BIKE_H
#define BIKE_H

#include "Vehicle.h"

class Bike : public Vehicle {
private:
    int engineCC;

public:
    Bike(string b, string m, int y, string f, double p, int cc)
        : Vehicle(b, m, y, f, p), engineCC(cc) {}

    void displayDetails() const override {
        cout << "Bike: " << brand << " " << model
             << " | " << year
             << " | Rs " << price
             << " | " << engineCC << "cc" << endl;
    }

    bool matches(const string& key) const override {
        return brand.find(key) != string::npos || model.find(key) != string::npos;
    }

    friend void showBike(const Bike&);
};

inline void showBike(const Bike& b) {
    cout << "Bike Info: " << b.brand << " (" << b.engineCC << "cc)\n";
}

#endif