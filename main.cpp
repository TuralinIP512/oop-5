#include "Course.h"
#include "Professor.h"
#include "Student.h"
#include <iostream>


int main() {
    Professor Rub("Rublev");
    Professor Stein("Stein");
    Course one("Algebra", &Rub);
    Course two("History", &Stein);
    Student a("Komarov");

    one.addTopic("equations");
    one.addTopic("operations");
    one.addTopic("functions");

    a.enroll(&one);
    a.enroll(&two);
    a.enroll(&two); // попытка добавить повторно

    std::cout << "Course: " + one.getName() << "\n";
    std::cout << "Professor: " + one.getProfessor()->getName() << "\n\n";
    for (const auto& topic : one.getTopics()) {
        std::cout << topic << "\n";
    }

    std::cout << "\nStudent: " + a.getName() << "\n";
    std::cout << "  enrolled on: ";
    for (const auto& course : a.getCourse()) {
        std::cout << course->getName() << " ";
    }

    std::cout << "\n\n";
    return 0;
}

// g++ -Wall main.cpp Course.cpp Professor.cpp Student.cpp -o lab5