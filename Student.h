#ifndef STUDENT_H
#define STUDENT_H
#include"Person.h"

class Student : public Person
{
  private:


  public:
    Student();
    void setCourse(); //Will need arguments
    void getCourse(); //Will need TYPE changed
    virtual void print();
    ~Student();

};

#endif
