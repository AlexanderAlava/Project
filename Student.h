#ifndef STUDENT_H
#define STUDENT_H
#include"Person.h"

class Student : public Person
{
  protected:

  string courseEnrolled, classStanding, level;

  public:
    Student();
    void setCourse(std::string); //Will need arguments
    std::string getCourse(); //Will need TYPE changed
    virtual void print();
    ~Student();

};

#endif
