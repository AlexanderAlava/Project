#ifndef UNDERGRAD_H
#define UNDERGRAD_H
#include<string>
#include"Student.h"
//#include"Course.h" //Can't have #include of Course.h header if Course.h already #includes Undergrad.h

class Undergrad : public Student
{
  friend class Course;
  private:


  public:
    Undergrad(string names, string IDs, string standing, string maleFemale, string dob);
    virtual void print();
    virtual string getLevel();
    ~Undergrad();

};

#endif
