//Question #01:

#include <iostream>
#include <string>
using namespace std;

struct Student {
    string firstName;
    string lastName;
    int rollNumber;
    float marks;

    void displayStudentInfo() {
        cout << "Full Name: " << firstName << " " << lastName << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Student s1;
    s1.firstName = "Ghazanfar ";
    s1.lastName = "Rasheed";
    s1.rollNumber = 14;
    s1.marks = 95.5;

    s1.displayStudentInfo();
    return 0;
}

// Question#02:


/*#include <iostream>
#include <string>
using namespace std;

struct Student {
    string firstName;
    string lastName;
    int rollNumber;
    float marks;

    void displayStudentInfo() {
        cout << "Full Name: " << firstName << " " << lastName << endl;
        //cout << "roll Number: " << rollNumber << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    Student students[n];

    for (int i = 0; i < n; i++) {
        cout << "Enter details for student " << i + 1 << ":" << endl;
        cout << "First Name: ";
        cin >> students[i].firstName;
        cout << "Last Name: ";
        cin >> students[i].lastName;
        cout << "Roll Number: ";
        cin >> students[i].rollNumber;
        cout << "Marks: ";
        cin >> students[i].marks;
    }

    for (int i = 0; i < n; i++) {
        students[i].displayStudentInfo();
    }

    return 0;
}*/

// Question#03:

/*#include <iostream>
#include <string>
using namespace std;

struct Student {
    string firstName;
    string lastName;
    int rollNumber;
    float marks;

    void displayStudentInfo() {
        cout << "Full Name: " << firstName << " " << lastName << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Student *s1 = new Student();
    s1->firstName = "Ghazanfar";
    s1->lastName = "Rasheed";
    s1->rollNumber = 14;
    s1->marks = 95.5;

    s1->displayStudentInfo();

    delete s1;
    return 0;
}*/

// Question#04:

/*#include <iostream>
#include <string>
using namespace std;

struct Student {
    string firstName;
    string lastName;
    int rollNumber;
    float marks;

    void displayStudentInfo() {
        cout << "Full Name: " << this->firstName << " " << this->lastName << endl;
        cout << "Marks: " << this->marks << endl;
    }
};

int main() {
    Student s1;
    s1.firstName = "Ghazanfar";
    s1.lastName = "Rasheed";
    s1.rollNumber = 14;
    s1.marks = 95.5;

    s1.displayStudentInfo();
    return 0;
}*/

