#ifndef STUDENT_H
#define STUDENT_H
#include"Person.h"

class Student : public Person
{
  protected:

  string classStanding, level;
  string courseEnrolled[10];

  public:
    Student();
    void setCourse(std::string); //Will need arguments
    string getCourse(); //Will need TYPE changed
    virtual void print();
    void printCoursesEnrolled();
    ~Student();

};

#endif
