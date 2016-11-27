#ifndef TEACHER_H
#define TEACHER_H
#include<string>
#include"Person.h"

using namespace std;

class Teacher : public Person
{
  //Friend the ENTIRE Course class and all it's members
  friend class Course;

  private:
    bool lecturer;
    bool adjunct;
    bool professor;
    string teacherType;
    string coursesName[100];
    string coursesIDs[100];

  public:
    Teacher(string names, string IDs, string old, string type, string maleFemale);
    std::string getType();
    virtual void print();
    bool isLecturer();
    bool isAdjunct();
    bool isProfessor();
    void setTeacherID();
    string getTeacherID();
    string getTeacherName();
    virtual string getLevel(); //Possibly reduntant due to GetType in this class already. But needed since Person has this function
    void setTeacherCourse(string courseName, string courseID);
    void printTeacherCourses();
    ~Teacher();

};

#endif
