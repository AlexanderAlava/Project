#ifndef UNDERGRAD_H
#define UNDERGRAD_H
#include<string>
#include"Student.h"


class Undergrad : public Student
{
  private:
    int studentID;
    std::string classStanding;

  public:
    Undergrad();
    void setStanding(); //Will need arguments
    std::string getStanding();
    virtual void print();
    ~Undergrad();

};

#endif
