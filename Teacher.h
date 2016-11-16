#ifndef TEACHER_H
#define TEACHER_H
#include<string>
#include"Person.h"

class Teacher : public Person
{
  private:
    int teacherID;
    bool lecturer;
    bool adjunct;
    bool professor;
    std::string teacherType;

  public:
    Teacher();
    std::string getType(); //Needs arguments
    virtual void print(); //Might create a parent virtual function for use here
    bool isLecturer();
    bool isAdjunct();
    bool isProfessor();
    void setTeacherID(int ID);
    int getTeacherID();
    ~Teacher();
};

#endif
