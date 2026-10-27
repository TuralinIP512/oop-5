#ifndef PROFESSOR_H
#define PROFESSOR_H

#include <string>

class Professor {
    private:
    std::string name_;


    public:
    explicit Professor(const std::string& name);

    const std::string& getName() const;
};

#endif