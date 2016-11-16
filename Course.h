#ifndef COURSE_H
#define COURSE_H

class Course
{
  private:
    int departmentID, courseID registeredStudents;

  public:
    Course();
    Boolean isGraduate();
    Boolean isUndergraduate();
    Boolean isTeacher();
    Boolean isTA();
    char Grades(); //Needs argument? Possibly Student to pull grade for?
    void setCourseID(int);
    int getCourseID();
    ~Course();

};

#endif
