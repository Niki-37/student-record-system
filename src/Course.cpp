#include "Course.h"

Course::Course(const std::string& name, int id, const std::string& description,
               int credit_hours, const std::string& professor, double fee)
    : name(name),
      id(id),
      description(description),
      credit_hours(credit_hours),
      professor(professor),
      fee(fee) {}