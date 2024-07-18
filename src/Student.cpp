#include "Student.h"

Student::Student(const std::string& name, int id_of_student,
                 const std::string& DOB, int year_of_study, double GPA,
                 const ContactInfo& contact_info,
                 const std::vector<Course>& courses)
    : id_of_student{id_of_student},
      name{name},
      DOB{DOB},
      year_of_study{year_of_study},
      GPA{GPA},
      contact_info{contact_info},
      courses{courses} {
}

int Student::getIdOfStudent() const {
    return id_of_student;
}

std::string Student::getName() const {
    return name;
}

std::string Student::getDOB() const {
    return DOB;
}

int Student::getYearOfStudy() const {
    return year_of_study;
}

double Student::getGPA() const {
    return GPA;
}

ContactInfo Student::getContactInfo() const {
    return contact_info;
}

std::vector<Course> Student::getCourses() const {
    return courses;
}

void Student::setName(const std::string& name) {
    this->name = name;
}

void Student::setDOB(const std::string& DOB) {
    this->DOB = DOB;
}

void Student::setYearOfStudy(int year_of_study) {
    this->year_of_study = year_of_study;
}

void Student::setGPA(double GPA) {
    this->GPA = GPA;
}

void Student::setContactInfo(const ContactInfo& contact_info) {
    this->contact_info = contact_info;
}

void Student::setCourses(const std::vector<Course>& courses) {
    this->courses = courses;
}