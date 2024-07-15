#pragma once
#include <string>

class Course {
   private:
    std::string course_name;
    int id_of_course;
    std::string description;
    int credit_hours;
    std::string professor;
    double fee;

   public:
    Course(const std::string& course_name, int id_of_course,
           const std::string& description, int credit_hours,
           const std::string& professor, double fee);

    // getters
    std::string getCourseName() const;
    int getIdOfCourse() const;
    std::string getDescription() const;
    int getCreditHours() const;
    std::string getProfessor() const;
    double getFee() const;

    // setters
    void setCourseName(const std::string& course_name);
    void setDescription(const std::string& description);
    void setCreditHours(int credit_hours);
    void setProfessor(const std::string& professor);
    void setFee(double fee);
};