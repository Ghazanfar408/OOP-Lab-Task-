// Task 01

#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    int rollNumber;
    float marks;

    void getData()
    {
        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Roll Number: ";
        cin >> rollNumber;

        cout << "Enter Marks: ";
        cin >> marks;
    }

    void displayData()
    {
        cout << "\nStudent Information\n";
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main()
{
    Student s;

    s.getData();
    s.displayData();

    return 0;
}

// Task 02

/*#include <iostream>
using namespace std;

class Rectangle
{
public:
    int length;
    int width;

    void setDimensions();
    int area();
    int perimeter();
};

void Rectangle::setDimensions()
{
    cout << "Enter Length: ";
    cin >> length;

    cout << "Enter Width: ";
    cin >> width;
}

int Rectangle::area()
{
    return length * width;
}

int Rectangle::perimeter()
{
    return 2 * (length + width);
}

int main()
{
    Rectangle r;

    r.setDimensions();

    cout << "Area: " << r.area() << endl;
    cout << "Perimeter: " << r.perimeter() << endl;

    return 0;
}*/

// Task 03

/*#include <iostream>
using namespace std;

class Voter
{
public:
    string name;
    int age;

    bool isEligible();
};

bool Voter::isEligible()
{
    if(age > 18)
        return true;
    else
        return false;
}

int main()
{
    Voter v;

    cout << "Enter Name: ";
    cin >> v.name;

    cout << "Enter Age: ";
    cin >> v.age;

    if(v.isEligible())
        cout << "Eligible for Voting";
    else
        cout << "Not Eligible for Voting";

    return 0;
}*/

// Task 04

/*#include <iostream>
using namespace std;

class Temperature
{
public:
    float celsius;

    float convert()
    {
        return (celsius * 9/5) + 32;
    }

    void display()
    {
        cout << "Temperature in Fahrenheit: " << convert();
    }
};

int main()
{
    Temperature t;

    cout << "Enter Temperature in Celsius: ";
    cin >> t.celsius;

    t.display();

    return 0;
}*/

// Task 05

/*#include <iostream>
using namespace std;

class Calculator
{
public:
    float num1, num2;

    float add()
    {
        return num1 + num2;
    }

    float subtract()
    {
        return num1 - num2;
    }

    float multiply()
    {
        return num1 * num2;
    }

    float divide()
    {
        return num1 / num2;
    }
};

int main()
{
    Calculator c;
    int choice;

    cout << "Enter First Number: ";
    cin >> c.num1;

    cout << "Enter Second Number: ";
    cin >> c.num2;

    cout << "\n1. Add\n2. Subtract\n3. Multiply\n4. Divide\n";
    cout << "Choose Operation: ";
    cin >> choice;

    if(choice == 1)
        cout << "Result: " << c.add();
    else if(choice == 2)
        cout << "Result: " << c.subtract();
    else if(choice == 3)
        cout << "Result: " << c.multiply();
    else if(choice == 4)
        cout << "Result: " << c.divide();
    else
        cout << "Invalid Choice";

    return 0;
}*/
