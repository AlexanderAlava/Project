#ifndef COURSE_H
#define COURSE_H
#include<string>

using namespace std;

class Course
{
  private:
    int departmentID, registeredStudents; // Do we need departmentID in here?
    string courseName; // Why not using namespace?
    string courseID;

  public:
    Course(string ID, string name);
    bool isGraduate(); //Pass a Grad/Under object or just studentID to verify?
    bool isTeacher();
    bool isTA();
    char Grades(); //Needs argument? Possibly Student to pull grade for?
    string getCourseID();
    ~Course();

};

#endif
