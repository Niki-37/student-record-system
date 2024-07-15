#pragma once
#include <string>
#include <vector>

#include "Student.h"

bool addStudent(const Student& student);
bool deleteStudent(int id_of_student);
bool deleteStudent(const std::string& name);
std::vector<Student> getAllStudents();
Student findStudent(int id_of_student);
Student findStudent(const std::string& name);
bool updateStudent(int id_of_student, const Student& student);
bool updateStudent(const std::string& name, const Student& student);