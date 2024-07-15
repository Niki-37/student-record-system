#include "Course.h"

Course::Course(const std::string& course_name, int id_of_course,
               const std::string& description, int credit_hours,
               const std::string& professor, double fee)
    : course_name{course_name},
      id_of_course{id_of_course},
      description{description},
      credit_hours{credit_hours},
      professor{professor},
      fee{fee} {}