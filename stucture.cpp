#include <iostream>
#include <string>

using namespace std;

// Define a structure
struct Student {
    string name;
    int age;
    float marks;
};

int main() {
    // Declare a variable of type struct Student
    Student student1;

    // Assign values to the members of the structure
    cout << "Enter student name: ";
    getline(cin, student1.name);

    cout << "Enter student age: ";
    cin >> student1.age;

    cout << "Enter student marks: ";
    cin >> student1.marks;

    // Display the information
    cout << "\nStudent Details:\n";
    cout << "Name: " << student1.name << endl;
    cout << "Age: " << student1.age << endl;
    cout << "Marks: " << student1.marks << endl;

    return 0;
}
