#ifndef GRAD_H
#define GRAD_H
#include<string>
#include"Student.h"

class Grad : public Student
{
  private:
    int studentID;
    bool isTA, isDoctoral;
    std::string name, graduateType;

  public:
    Grad(string a, string b, string c);
    bool isTeacherAssistant();
    bool isMasters();
    virtual void print();
    ~Grad();

};

#endif
