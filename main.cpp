#include "Course.h"
#include "Professor.h"
#include <iostream>


int main() {
    Professor Rub("Rublev");
    Course one("Algebra", &Rub);
    one.addTopic("equations");
    one.addTopic("operations");
    one.addTopic("functions");

    std::cout << "Course: " + one.getName() << "\n";
    std::cout << "Professor: " + one.getProfessor()->getName() << "\n";
    for (const auto& topic : one.getTopics()) {
        std::cout << topic << "\n";
    }
    std::cout << "\n";
    return 0;
}

// g++ -Wall main.cpp Course.cpp Professor.cpp -o lab5