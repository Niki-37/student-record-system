#pragma once

#include <string>
#include <vector>

#include "ContactInfo.h"
#include "Course.h"

class Student {
 public:
  std::string name;
  int id;
  std::string DOB;
  int year_of_study;
  double GPA;
  ContactInfo contact_info;
  std::vector<Course> courses;

  Student(const std::string& name, int id, const std::string& DOB,
          int year_of_study, double GPA, const ContactInfo& contact_info,
          const std::vector<Course>& courses = {});
};