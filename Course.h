#ifndef COURSE_H
#define COURSE_H
#include<string>
#include"Undergrad.h"
#include"Grad.h"
#include"Teacher.h"
#define MAX 100

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
    void setTeacher(Person &teacher);
    void setTA(Person &ta);
    void setStudents(Person &person);
    void display();
    ~Course();


};

#endif
