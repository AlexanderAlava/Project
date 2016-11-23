#ifndef TEACHER_H
#define TEACHER_H
#include<string>
#include"Person.h"

using namespace std;

class Teacher : public Person
{
  private:
    bool lecturer;
    bool adjunct;
    bool professor;
    std::string name, teacherID, teacherType, age;

  public:
    Teacher(string names, string IDs, string old, string type, string maleFemale);
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
