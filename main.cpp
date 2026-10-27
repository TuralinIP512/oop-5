#include "Course.h"
#include "Professor.h"
#include <iostream>


int main() {
    Course one("Algebra");
    one.addTopic("equations");
    one.addTopic("operations");
    one.addTopic("functions");

    std::cout << one.getName() << "\n";
    for (const auto& topic : one.getTopics()) {
        std::cout << topic << "\n";
    }
    std::cout << "\n";
    return 0;
}