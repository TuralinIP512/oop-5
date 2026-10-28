#include "Course.h"
#include "Professor.h"
#include <string>
#include <vector>
#include <stdexcept>

Course::Course(const std::string& name, Professor* prof) {
    if (name.empty() || prof == NULL) {
        throw std::invalid_argument("Название курса не может быть пустым");
    }

    name_ = name;
    professor_ = prof;
} 

void Course::addTopic(const std::string& topic) {
    if (topic.empty()) {
        throw std::invalid_argument("Название темы не может быть пустым");
    }

    topics_.push_back(topic);
}

const std::string& Course::getName() const { return name_; }

const std::vector<std::string>& Course::getTopics() const { return topics_; }

const Professor* Course::getProfessor() const { return professor_; }