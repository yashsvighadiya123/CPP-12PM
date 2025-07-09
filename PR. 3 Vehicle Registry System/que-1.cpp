#include <iostream>
using namespace std;

class Vehicle {
protected:
    int id;
    string brand;
public:
    static int total;
    Vehicle(int i = 0, string b = "") : id(i), brand(b) { total++; }
    virtual ~Vehicle() { total--; }
    virtual void show() { cout << "ID: " << id << ", Brand: " << brand << endl; }
    int getId() { return id; }
};
int Vehicle::total = 0;

class Car : public Vehicle {
protected:
    string fuel;
public:
    Car(int i, string b, string f) : Vehicle(i, b), fuel(f) {}
    void show() override {
        Vehicle::show();
        cout << "Fuel: " << fuel << endl;
    }
};

class ElectricCar : public Car {
    int battery;
public:
    ElectricCar(int i, string b, string f, int bat) : Car(i, b, f), battery(bat) {}
    void show() override {
        Car::show();
        cout << "Battery: " << battery << " kWh" << endl;
    }
};
class Flyer {
protected:
    int range;
public:
    Flyer(int r = 0) : range(r) {}
    void showFly() { cout << "Range: " << range << " km" << endl; }
};

class FlyingCar : public Car, public Flyer {
public:
    FlyingCar(int i, string b, string f, int r) : Car(i, b, f), Flyer(r) {}
    void show() {
        Car::show();
        showFly();
    }
    int getId() { return Car::getId(); }
};
class Sedan : public Car {
public:
    Sedan(int i, string b, string f) : Car(i, b, f) {}
};

class SUV : public Car {
public:
    SUV(int i, string b, string f) : Car(i, b, f) {}
};
int main() {
    Vehicle* list[5];
    list[0] = new Sedan(1, "Toyota", "Petrol");
    list[1] = new SUV(2, "Ford", "Diesel");
    list[2] = new ElectricCar(3, "Tesla", "Electric", 100);
    list[3] = new FlyingCar(4, "SkyCar", "Hybrid", 500);

    for (int i = 0; i < 4; i++) {
        cout << "\nVehicle " << i + 1 << ":\n";
        list[i]->show();
    }

    cout << "\nTotal Vehicles: " << Vehicle::total << endl;

    for (int i = 0; i < 4; i++) delete list[i];
}
