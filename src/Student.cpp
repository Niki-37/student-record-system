#include "Student.h"

Student::Student(const std::string& name, int id, const std::string& DOB,
                 int year_of_study, double GPA, const ContactInfo& contact_info,
                 const std::vector<Course>& courses)
    : id(id),
      name(name),
      DOB(DOB),
      year_of_study(year_of_study),
      GPA(GPA),
      contact_info(contact_info),
      courses(courses) {}