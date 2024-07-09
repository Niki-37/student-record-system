#pragma once
#include <string>

class Course {
 public:
  std::string name;
  int id;
  std::string description;
  int credit_hours;
  std::string professor;
  double fee;

  Course(const std::string& name, int id, const std::string& description,
         int credit_hours, const std::string& professor, double fee);
};