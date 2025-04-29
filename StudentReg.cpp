#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Student {
private:
    int rollNo;
    string name;
    float marks;

public:
    void input() {
        cout << "Enter roll number: ";
        cin >> rollNo;
        cin.ignore(); // To ignore the newline character
        cout << "Enter name: ";
        getline(cin, name);
        cout << "Enter marks: ";
        cin >> marks;
    }

    void display() const {
        cout << "Roll No: " << rollNo << ", Name: " << name << ", Marks: " << marks << endl;
    }

    int getRollNo() const {
        return rollNo;
    }
};

void addStudent(vector<Student>& students) {
    Student s;
    s.input();
    students.push_back(s);
}

void displayAll(const vector<Student>& students) {
    if (students.empty()) {
        cout << "No records found.\n";
        return;
    }
    for (const auto& student : students) {
        student.display();
    }
}

void searchStudent(const vector<Student>& students, int rollNo) {
    for (const auto& student : students) {
        if (student.getRollNo() == rollNo) {
            cout << "Student found:\n";
            student.display();
            return;
        }
    }
    cout << "Student not found.\n";
}

int main() {
    vector<Student> students;
    int choice, rollNo;

    do {
        cout << "\n1. Add Student\n2. Display All\n3. Search Student\n4. Exit\nEnter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addStudent(students);
                break;
            case 2:
                displayAll(students);
                break;
            case 3:
                cout << "Enter roll number to search: ";
                cin >> rollNo;
                searchStudent(students, rollNo);
                break;
            case 4:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice.\n";
        }
    } while (choice != 4);

    return 0;
}
