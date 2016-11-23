#ifndef UNDERGRAD_H
#define UNDERGRAD_H
#include<string>
#include"Student.h"
#include"Course.h"

class Undergrad : public Student
{
  friend class Course;

  private:
    std::string name, studentID, classStanding, level;

  public:
    Undergrad(string names, string IDs, string standing, string maleFemale);
    void setStanding(); //Will need arguments
    std::string getStanding();
    virtual void print();
    //void enroll(Course &course, string CID);
    ~Undergrad();

};

#endif
