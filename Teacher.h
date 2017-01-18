#ifndef TEACHER_H
#define TEACHER_H
#include<string>
#include"Person.h"

class Teacher : public Person
{
  // Declaring the Course class to be a friend of this class //
  friend class Course;

  private:

    // Declaring extra variables to be used by each object instatiated //
    bool lecturer;
    bool adjunct;
    bool professor;
    string teacherType;
    string coursesName[100];
    string coursesIDs[100];

  public:

    // Declaring the constructor with five different parameters //
    Teacher(string names, string IDs, string old, string type, string maleFemale);

    // Declaring member functions //
    bool isLecturer();
    bool isAdjunct();
    bool isProfessor();
    string getType();
    string getTeacherID();
    string getTeacherName();
    virtual string getLevel();
    virtual void print();
    void setTeacherCourse(string courseName, string courseID);
    void printTeacherCourses();

    // Declaring the destructor //
    ~Teacher();
};

#endif
