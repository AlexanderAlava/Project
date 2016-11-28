#ifndef COURSE_H
#define COURSE_H
#include<string>
#include"Grad.h"
#include"Teacher.h"
#define MAX 200

using namespace std;

class Course
{

  protected:

    // Declaring the variables need for this class //
    string studentNames[MAX];
    string assistantNames[MAX];
    string studentIDs[MAX];
    string studentGrades[MAX];
    string courseName;
    string courseID;
    string teacherName;
    string level;

  public:

    // Declaring the constructor with three different parameters //
    Course(string ID, string name, string underGrad);

    // Declaring member functions //
    bool isGraduate();
    bool isTeacher();
    bool isTA();
    char Grades();
    string getCourseID();
    string getCourseName();
    string getTeacher();
    string & getNamesStudentsEnrolled(int index);
    string & getIDStudentsEnrolled(int index);
    string& getGrades(int index);
    void setTA(Person &ta);
    void setStudents(Person &person);
    void setTeacher(Person &teacher);
    void printTeachersAssigned();
    void printStudentsCourse();

    // Declaring the destructor //
    ~Course();
};

#endif
