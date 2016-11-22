#ifndef UNDERGRAD_H
#define UNDERGRAD_H
#include<string>
#include"Student.h"

class Undergrad : public Student
{
  private:
    std::string name, studentID, classStanding, level;

  public:
    Undergrad(string names, string IDs, string standing);
    void setStanding(); //Will need arguments
    std::string getStanding();
    virtual void print();
    void enroll(int CourseID);
    ~Undergrad();

};

#endif
