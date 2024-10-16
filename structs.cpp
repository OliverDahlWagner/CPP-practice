#include <iostream>

struct {
    std::string name;
    int age;
} Person;

struct student {
    std::string name;
    double gpa;
    bool enrolled;
};

void printStudentInfo(student student);
void changeStudentName(student &student, std::string name);

int main() {
    //

    student student_1;
    student_1.name = "Steven";
    student_1.gpa = 3.2;
    student_1.enrolled = true;

    student student_2;
    student_1.name = "Bob";
    student_1.gpa = 2.2;
    student_1.enrolled = false;

    std::cout << &student_1 << "\n";
    printStudentInfo(student_1);  // pass by value (a copy of the struct)  //
                                  // add ref of operator & to work with the og
    changeStudentName(student_1, "Jimmy");
    std::cout << student_1.name << "  <-- changed name\n";

    return 0;
}

void printStudentInfo(student student) {  // copy of student
    std::cout << &student << "\n";
    std::cout << student.name << "\n";
    std::cout << student.gpa << "\n";
    std::cout << student.enrolled << "\n";
}

void changeStudentName(student &student, std::string name) {  // OG student
    student.name = name;
}