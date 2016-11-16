#ifndef COURSE_H
#define COURSE_H

class Course
{
  private:
    int departmentID, courseID, registeredStudents;

  public:
    Course();
    bool isGraduate();
    bool isUndergraduate();
    bool isTeacher();
    bool isTA();
    char Grades(); //Needs argument? Possibly Student to pull grade for?
    void setCourseID(int);
    int getCourseID();
    ~Course();

};

#endif
