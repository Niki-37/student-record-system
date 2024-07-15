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
      courses{courses} {}