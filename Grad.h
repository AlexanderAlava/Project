#ifndef GRAD_H
#define GRAD_H
#include<string>
#include"Student.h"

using namespace std;

class Grad : public Student
{
  friend class Course;

  private:
    bool isTA, isDoctoral;

  public:
    Grad(string names, string IDs, string standing, string levels, string maleFemale, string dob);
    bool isTeacherAssistant();
    bool isPhD();
    virtual void print();
    ~Grad();

};

#endif
