#ifndef STUDENT_H
#define STUDENT_H
#include"Person.h"

class Student : public Person
{
  protected:

  // Declaring extra variables to be used by each object instatiated //
  string classStanding, level;
  string courseEnrolled[100];

  public:

    // Declaring the constructor //
    Student();

    // Declaring member functions //
    string getCourse();
    void setCourse(string course);
    void printCoursesEnrolled();
    virtual void print();

    // Declaring the destructor //
    ~Student();
};

#endif
