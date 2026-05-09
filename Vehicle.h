#ifndef VEHICLE_H
#define VEHICLE_H

#include "Interfaces.h"
#include <iostream>
using namespace std;

class Vehicle : public Printable, public Searchable {
protected:
    string brand, model, fuelType;
    int year;
    double price;

public:
    Vehicle(string b, string m, int y, string f, double p)
        : brand(b), model(m), year(y), fuelType(f), price(p) {}

    virtual void displayDetails() const = 0;

    void print() const override {
        displayDetails();
    }

    double getPrice() const { return price; }

    virtual ~Vehicle() {}
};

#endif