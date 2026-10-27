#ifndef COURSE_H
#define COURSE_H

#include <string>
#include <vector>

class Course {
    private:
    std::string name_;
    std::vector<std::string> topics_;

    public:
    Course(const std::string& name);

    void addTopic(const std::string& topic);

    const std::string& getName() const;

    const std::vector<std::string>& getTopics() const;

    ~Course() = default;
};

#endif
