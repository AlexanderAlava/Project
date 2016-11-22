#ifndef TEACHER_H
#define TEACHER_H
#include<string>
#include"Person.h"

class Teacher : public Person
{
  private:
    bool lecturer;
    bool adjunct;
    bool professor;
    std::string name, teacherID, teacherType, age;

  public:
    Teacher(std::string names, std::string IDs, std::string old, std::string type);
    std::string getType(); //Needs arguments
    virtual void print(); //Might create a parent virtual function for use here
    bool isLecturer();
    bool isAdjunct();
    bool isProfessor();
    void setTeacherID();
    int getTeacherID();
    ~Teacher();
};

#endif
