
// Task 01:
#include <iostream>
using namespace std;

// Base class
class Product {
protected:
    string name;
    double price;

public:
    // Constructor
    Product(string n, double p) {
        name = n;
        price = p;
        cout << "Product Constructor Called" << endl;
    }

    void displayProduct() {
        cout << "Product Name: " << name << endl;
        cout << "Price: " << price << endl;
    }
};

// Derived class
class Electronics : public Product {
private:
    int warrantyYears;

public:
    // Constructor chaining
    Electronics(string n, double p, int w) : Product(n, p) {
        warrantyYears = w;
        cout << "Electronics Constructor Called" << endl;
    }

    void displayElectronics() {
        displayProduct();
        cout << "Warranty Years: " << warrantyYears << endl;
    }
};

int main() {
    string name;
    double price;
    int warranty;

    // Runtime input
    cout << "Enter Product Name: ";
    getline(cin, name);

    cout << "Enter Price: ";
    cin >> price;

    cout << "Enter Warranty Years: ";
    cin >> warranty;

    // Object creation
    Electronics e(name, price, warranty);

    cout << "\n--- Product Details ---" << endl;
    e.displayElectronics();

    return 0;
}


// Task 02:
/*#include <iostream>
using namespace std;

// Base class
class Vehicle {
protected:
    string brand;

public:
    Vehicle(string b) {
        brand = b;
        cout << "Vehicle Constructor Called" << endl;
        cout << "Brand: " << brand << endl;
    }
};

// Derived class (Level 1)
class Car : public Vehicle {
protected:
    int seats;

public:
    Car(string b, int s) : Vehicle(b) {
        seats = s;
        cout << "Car Constructor Called" << endl;
        cout << "Seats: " << seats << endl;
    }
};

// Derived class (Level 2)
class ElectricCar : public Car {
private:
    int batteryCapacity;

public:
    ElectricCar(string b, int s, int bc) : Car(b, s) {
        batteryCapacity = bc;
        cout << "ElectricCar Constructor Called" << endl;
        cout << "Battery Capacity: " << batteryCapacity << " kWh" << endl;
    }
};

int main() {
    string brand;
    int seats, battery;

    // Runtime input
    cout << "Enter Car Brand: ";
    getline(cin, brand);

    cout << "Enter Number of Seats: ";
    cin >> seats;

    cout << "Enter Battery Capacity (kWh): ";
    cin >> battery;

    // Object creation
    ElectricCar ec(brand, seats, battery);

    return 0;
}*/
