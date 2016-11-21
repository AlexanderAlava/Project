#ifndef UNDERGRAD_H
#define UNDERGRAD_H
#include<string>
#include"Student.h"


class Undergrad : public Student
{
  private:
    int studentID;
    std::string name, classStanding;

  public:
    Undergrad(string a, string b, string c);
    void setStanding(); //Will need arguments
    std::string getStanding();
    virtual void print();
    void enroll(int CourseID);
    ~Undergrad();

};

#endif
