#pragma once

#include <string>
#include <vector>

#include "ContactInfo.h"
#include "Course.h"

class Student {
   private:
    std::string name;
    int id_of_student;
    std::string DOB;
    int year_of_study;
    double GPA;
    ContactInfo contact_info;
    std::vector<Course> courses;

   public:
    Student(const std::string& name, int id_of_student, const std::string& DOB,
            int year_of_study, double GPA, const ContactInfo& contact_info,
            const std::vector<Course>& courses = {});

    std::string getName() const;
    int getIdOfStudent() const;
    std::string getDOB() const;
    int getYearOfStudy() const;
    double getGPA() const;
    ContactInfo getContactInfo() const;
    std::vector<Course> getCourses() const;

    void setName(const std::string& name);
    void setDOB(const std::string& DOB);
    void setYearOfStudy(int year_of_study);
    void setGPA(double GPA);
    void setContactInfo(const ContactInfo& contact_info);
    void setCourses(const std::vector<Course>& courses);
};