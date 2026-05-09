#include "Marketplace.h"

int main() {

    Marketplace market;

    Car* c1 = new Car("Toyota","Corolla",2022,"Petrol",4500000,4,"Auto");
    Car* c2 = new Car("Honda","Civic",2021,"Petrol",5200000,4,"Manual");
    Bike* b1 = new Bike("Yamaha","R1",2023,"Petrol",3500000,1000);

    market.add(c1);
    market.add(c2);
    market.add(b1);

    cout << "ALL VEHICLES:\n";
    market.showAll();

    cout << "\nSEARCH RESULT (Honda):\n";
    market.search("Honda");

    cout << "\nOPERATOR OVERLOADING:\n";
    Car c3 = *c1 + *c2;
    c3.displayDetails();

    cout << "\nFRIEND FUNCTION:\n";
    compareCars(*c1, *c2);
    showBike(*b1);

    return 0;
}