#ifndef GRAD_H
#define GRAD_H
#include<string>
#include"Student.h"

class Grad : public Student
{
  private:
    bool isTA, isDoctoral;
    std::string name, studentID, graduateType;

  public:
    Grad(string names, string IDs, string standing);
    bool isTeacherAssistant();
    bool isMasters();
    virtual void print();
    ~Grad();

};

#endif
