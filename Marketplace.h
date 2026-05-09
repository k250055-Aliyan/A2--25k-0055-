#ifndef MARKETPLACE_H
#define MARKETPLACE_H

#include "Car.h"
#include "Bike.h"

class Marketplace {
private:
    Vehicle* vehicles[100];
    int count;

public:
    Marketplace() : count(0) {}

    void add(Vehicle* v) {
        vehicles[count++] = v;
    }

    void showAll() {
        for (int i = 0; i < count; i++)
            vehicles[i]->print();
    }

    void search(string key) {
        for (int i = 0; i < count; i++)
            if (vehicles[i]->matches(key))
                vehicles[i]->print();
    }
};

#endif