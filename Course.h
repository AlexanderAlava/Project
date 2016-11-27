#ifndef COURSE_H
#define COURSE_H
#include<string>
#include"Undergrad.h"
#include"Grad.h"
#include"Teacher.h"
#define MAX 200

using namespace std;

class Course
{
  friend class Undergrad;

  protected:
    string studentNames[MAX];
    string assistantNames[MAX];
    string studentIDs[MAX];
    string courseName;
    string courseID;
    string teacherName;
    string level;

  public:
    Course(string ID, string name, string underGrad);
    bool isGraduate();
    bool isTeacher();
    bool isTA();
    char Grades();
    string getCourseID();
    string getNamesStudentsEnrolled(int index);
    string & getIDStudentsEnrolled(int index);
    void setTeacher(Person &teacher);
    string getTeacher();
    void setTA(Person &ta);
    void setStudents(Person &person);
    string getCourseName();
    void printTeachersAssigned();
    void printStudentsCourse();
    ~Course();


};

#endif
