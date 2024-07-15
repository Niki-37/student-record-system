#pragma once
#include <string>

#include "Course.h"

bool addCourse(const Course& course);
bool deleteCourse(int id_of_course);
bool deleteCourse(const std::string& course_name);
Course findCourse(int id_of_course);
Course findCourse(const std::string& course_name);
bool updateCourse(int id_of_course, const Course& course);
bool updateCourse(const std::string& course_name, const Course& course);