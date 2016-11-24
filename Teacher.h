#ifndef TEACHER_H
#define TEACHER_H
#include<string>
#include"Person.h"

class Teacher : public Person
{
  //Friend the ENTIRE Course class and all it's members
  friend class Course;

  private:
    bool lecturer;
    bool adjunct;
    bool professor;
    string teacherType;

  public:
    Teacher(string names, string IDs, string old, string type, string maleFemale);
    std::string getType(); //Needs arguments
    virtual void print(); //Might create a parent virtual function for use here
    //void print(); //testing
    bool isLecturer();
    bool isAdjunct();
    bool isProfessor();
    void setTeacherID();
    int getTeacherID();
    ~Teacher();

};

#endif
