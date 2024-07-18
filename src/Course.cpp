#include "Course.h"

Course::Course(const std::string& course_name, int id_of_course,
               const std::string& description, int credit_hours,
               const std::string& professor, double fee)
    : course_name{course_name},
      id_of_course{id_of_course},
      description{description},
      credit_hours{credit_hours},
      professor{professor},
      fee{fee} {
}

std::string Course::getCourseName() const {
    return course_name;
}

int Course::getIdOfCourse() const {
    return id_of_course;
}

std::string Course::getDescription() const {
    return description;
}

int Course::getCreditHours() const {
    return credit_hours;
}

std::string Course::getProfessor() const {
    return professor;
}

double Course::getFee() const {
    return fee;
}

void Course::setCourseName(const std::string& course_name) {
    this->course_name = course_name;
}

void Course::setDescription(const std::string& description) {
    this->description = description;
}

void Course::setCreditHours(int credit_hours) {
    this->credit_hours = credit_hours;
}

void Course::setProfessor(const std::string& professor) {
    this->professor = professor;
}

void Course::setFee(double fee) {
    this->fee = fee;
}