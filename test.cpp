#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>

using namespace std;

class Student {
private:
    string name;
    string className;
    int rollNumber;
    unordered_map<string, float> subjects;

public:
    // Default constructor
    Student() {}

    // Parameterized constructor
    Student(const string &name, const string &className, int rollNumber)
        : name(name), className(className), rollNumber(rollNumber) {}

    void addSubject(const string &subject) {
        if (subjects.find(subject) == subjects.end()) {
            subjects[subject] = -1; // -1 indicates ungraded
        }
    }

    void setGrade(const string &subject, float grade) {
        if (subjects.find(subject) != subjects.end()) {
            subjects[subject] = grade;
        } else {
            cout << subject << " is not added for " << name << ". Add the subject first.\n";
        }
    }

    void displayInfo() const {
        cout << "\nName: " << name << "\nClass: " << className << "\nRoll Number: " << rollNumber << "\nSubjects and Grades:\n";
        for (const auto &subject : subjects) {
            cout << "  " << subject.first << ": ";
            if (subject.second == -1)
                cout << "Not graded";
            else
                cout << subject.second;
            cout << endl;
        }
    }
};

class GradingSystem {
private:
    vector<Student> students;
    const vector<string> defaultSubjects = {"Bangla", "English", "Math", "Biology", "Physics", "Chemistry"};

public:
    void setTotalStudents(int numberOfStudents) {
        students.resize(numberOfStudents); // Ensure vector size matches student count
        for (int i = 0; i < numberOfStudents; ++i) {
            addStudent(i);
        }
    }

    void addStudent(int index) {
        string name, className;
        int rollNumber;

        cout << "\nEnter student's name: ";
        cin >> ws; // To consume any leftover newline characters
        getline(cin, name);
        cout << "Enter student's class: ";
        getline(cin, className);
        cout << "Enter student's roll number: ";
        cin >> rollNumber;

        Student student(name, className, rollNumber);

        // Select subjects
        cout << "\nSelect subjects for the student from the following:\n";
        for (size_t i = 0; i < defaultSubjects.size(); ++i) {
            cout << i + 1 << ". " << defaultSubjects[i] << endl;
        }
        cout << "Enter subject numbers separated by spaces (e.g., 1 2 3): ";
        
        int subjectIndex;
        while (cin >> subjectIndex) {
            if (subjectIndex >= 1 && subjectIndex <= defaultSubjects.size()) {
                student.addSubject(defaultSubjects[subjectIndex - 1]);
            } else {
                cout << "Invalid subject number: " << subjectIndex << ". Please try again.\n";
            }
            if (cin.peek() == '\n') break;  // End input on newline
        }
        students[index] = student;
    }

    void enterGrades() {
        if (students.empty()) {
            cout << "No students available. Please add students first.\n";
            return;
        }

        for (auto &student : students) {
            cout << "\nEntering grades for student:\n";
            for (const auto &subject : defaultSubjects) {
                float grade;
                cout << "Enter grade for " << subject << ": ";
                cin >> grade;
                student.setGrade(subject, grade);
            }
        }
    }

    void viewAllStudents() const {
        if (students.empty()) {
            cout << "No students to display.\n";
            return;
        }

        for (const auto &student : students) {
            student.displayInfo();
            cout << "\n------------------------------\n";
        }
    }

    void run() {
        int choice;
        do {
            cout << "\nGrading System Menu:\n";
            cout << "1. Set Total Students\n";
            cout << "2. Enter Grades\n";
            cout << "3. View All Students\n";
            cout << "4. Exit\n";
            cout << "Choose an option: ";
            cin >> choice;

            switch (choice) {
                case 1: {
                    int numberOfStudents;
                    cout << "Enter total number of students: ";
                    cin >> numberOfStudents;
                    setTotalStudents(numberOfStudents);
                    break;
                }
                case 2:
                    enterGrades();
                    break;
                case 3:
                    viewAllStudents();
                    break;
                case 4:
                    cout << "Exiting the grading system.\n";
                    break;
                default:
                    cout << "Invalid choice. Please select a valid option.\n";
            }
        } while (choice != 4);
    }
};

// Initialize and run the grading system
int main() {
    GradingSystem gradingSystem;
    gradingSystem.run();
    return 0;
}
