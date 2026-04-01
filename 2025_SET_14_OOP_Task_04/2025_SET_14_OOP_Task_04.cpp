// Task #01

#include <iostream>
using namespace std;

class Employee {
private:
    int id;
    string name;
    float salary;

public:
    // Default Constructor
    Employee() {
        id = 0;
        name = "Not Assigned";
        salary = 0.0;
    }

    // Display Function
    void displayDetails() {
        cout << "\n--- Employee Details ---\n";
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    Employee emp;  // Default constructor called automatically
    emp.displayDetails();

    return 0;
}

// Task # 02
/*#include <iostream>
using namespace std;

class BankAccount {
private:
    string accountNumber;
    string accountHolder;
    double balance;

public:
    // Parameterized Constructor
    BankAccount(string accNo, string holder, double bal) {
        accountNumber = accNo;
        accountHolder = holder;
        balance = bal;
    }

    void showAccountDetails() {
        cout << "\n--- Account Details ---\n";
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    string accNo, holder;
    double balance;

    cout << "Enter Account Number: ";
    cin >> accNo;

    cin.ignore();

    cout << "Enter Account Holder Name: ";
    getline(cin, holder);

    cout << "Enter Balance: ";
    cin >> balance;

    BankAccount acc(accNo, holder, balance);

    acc.showAccountDetails();

    return 0;
}*/

// Task # 03

/*#include <iostream>
using namespace std;

class Rectangle {
private:
    float length;
    float width;

public:
    // Default Constructor
    Rectangle() {
        length = 1.0;
        width = 1.0;
    }

    // Parameterized Constructor (Rectangle)
    Rectangle(float l, float w) {
        if (l > 0 && w > 0) {
            length = l;
            width = w;
        } else {
            cout << "Invalid values! Setting default values.\n";
            length = 1.0;
            width = 1.0;
        }
    }

    // Square Constructor
    Rectangle(float side) {
        if (side > 0) {
            length = side;
            width = side;
        } else {
            cout << "Invalid side! Setting default value.\n";
            length = 1.0;
            width = 1.0;
        }
    }

    float area() {
        return length * width;
    }

    void display() {
        cout << "Length: " << length
             << ", Width: " << width
             << ", Area: " << area() << endl;
    }
};

int main() {
    float l, w, side;

    // Default object
    Rectangle r1;

    // User input for rectangle
    cout << "Enter length and width for Rectangle: ";
    cin >> l >> w;
    Rectangle r2(l, w);

    // User input for square
    cout << "Enter side for Square: ";
    cin >> side;
    Rectangle r3(side);

    cout << "\n--- Rectangle 1 (Default) ---\n";
    r1.display();

    cout << "\n--- Rectangle 2 (User Input) ---\n";
    r2.display();

    cout << "\n--- Rectangle 3 (Square) ---\n";
    r3.display();

    return 0;
}*/
