#ifndef STUDENT_H
#define STUDENT_H
#include"Person.h"

class Student : public Person
{
  protected:

  std::std::string courseEnrolled;

  public:
    Student();
    void setCourse(); //Will need arguments
    void getCourse(); //Will need TYPE changed
    virtual void print();
    ~Student();

};

#endif
