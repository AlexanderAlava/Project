#ifndef COURSE_H
#define COURSE_H
#include<string>

class Course
{
  private:
    int departmentID, courseID, registeredStudents;
    std::string courseName;

  public:
    Course();
    bool isGraduate(); //Pass a Grad/Under object or just studentID to verify?
    bool isTeacher();
    bool isTA();
    char Grades(); //Needs argument? Possibly Student to pull grade for?
    void setCourseID(int ID);
    int getCourseID();
    ~Course();

};

#endif
