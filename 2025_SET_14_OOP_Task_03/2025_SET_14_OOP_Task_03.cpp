#include <iostream>
using namespace std;

class Product {
private:
    string name;
    double price;
    int quantity;

public:
    // Setter for name
    void setName(string n) {
        if (n.length() > 0) {
            name = n;
        } else {
            cout << "Invalid Name! Setting default value.\n";
            name = "Unknown";
        }
    }

    // Setter for price
    void setPrice(double p) {
        if (p > 0) {
            price = p;
        } else {
            cout << "Invalid Price! Setting to 0.\n";
            price = 0;
        }
    }

    // Setter for quantity
    void setQuantity(int q) {
        if (q >= 0) {
            quantity = q;
        } else {
            cout << "Invalid Quantity! Setting to 0.\n";
            quantity = 0;
        }
    }

    // Getters
    string getName() {
        return name;
    }

    double getPrice() {
        return price;
    }

    int getQuantity() {
        return quantity;
    }

    // Display function
    void display() {
        cout << "\n----- Product Details -----\n";
        cout << "Name: " << name << endl;
        cout << "Price: " << price << endl;
        cout << "Quantity: " << quantity << endl;
    }
};

int main() {
    Product p;

    string name;
    double price;
    int quantity;

    // Input from user
    cout << "Enter Product Name: ";
    getline(cin, name);

    cout << "Enter Product Price: ";
    cin >> price;

    cout << "Enter Product Quantity: ";
    cin >> quantity;

    // Using setters (Encapsulation)
    p.setName(name);
    p.setPrice(price);
    p.setQuantity(quantity);

    // Display output
    p.display();

    return 0;
}
