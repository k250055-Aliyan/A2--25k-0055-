#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"

class Car : public Vehicle {
private:
    int doors;
    string transmission;

public:
    Car(string b, string m, int y, string f, double p, int d, string t)
        : Vehicle(b, m, y, f, p), doors(d), transmission(t) {}

    void displayDetails() const override {
        cout << "Car: " << brand << " " << model
             << " | " << year
             << " | Rs " << price
             << " | " << doors << " doors"
             << " | " << transmission << endl;
    }

    bool matches(const string& key) const override {
        return brand.find(key) != string::npos || model.find(key) != string::npos;
    }

    Car operator+(const Car& c) {
        return Car(brand, model, year, fuelType, price + c.price, doors, transmission);
    }

    friend void compareCars(const Car&, const Car&);
};

inline void compareCars(const Car& a, const Car& b) {
    cout << "Car Comparison:\n";
    cout << (a.price > b.price ? a.brand : b.brand) << " is more expensive\n";
}

#endif