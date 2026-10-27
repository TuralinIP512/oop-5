#include "Course.h"
#include <string>
#include <vector>
#include <stdexcept>

Course::Course(const std::string& name) {
    if (name.empty()) {
        throw std::invalid_argument("Название курса не может быть пустым");
    }

    name_ = name;
} 

void Course::addTopic(const std::string& topic) {
    if (topic.empty()) {
        throw std::invalid_argument("Название темы не может быть пустым");
    }

    topics_.push_back(topic);
}

const std::string& Course::getName() const { return name_; }

const std::vector<std::string>& Course::getTopics() const { return topics_; }