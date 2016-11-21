#ifndef STUDENT_H
#define STUDENT_H
#include"Person.h"

using namespace std;

class Student : public Person
{
  protected:

  std::string courseEnrolled;

  public:
    Student();
    void setCourse(std::string); //Will need arguments
    std::string getCourse(); //Will need TYPE changed
    virtual void print();
    ~Student();

};

#endif
