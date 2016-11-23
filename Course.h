#ifndef COURSE_H
#define COURSE_H
#include<string>
#define MAX 100

using namespace std;

class Course
{
  private:
    string studentNames[MAX];
    string assistantNames[MAX];
    string studentIDs[MAX];
    string courseName; // Why not using namespace?
    string courseID;
    string teacherName;

  public:
    Course(string ID, string name);
    bool isGraduate(); //Pass a Grad/Under object or just studentID to verify?
    bool isTeacher();
    bool isTA();
    char Grades(); //Needs argument? Possibly Student to pull grade for?
    string getCourseID();
    void setTeacher(Teacher &teacher);
    void setTA(Grad &ta);
    void setStudents(Undergrad &student);
    ~Course();

};

#endif
