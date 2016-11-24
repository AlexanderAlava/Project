#ifndef PERSON_H
#define PERSON_H
#include<string>

using namespace std;

class Person
{
  friend class Course;
  protected:
    string universityID;
    string age;
    string name;
    string gender;

  public:
    Person();
    virtual string getLevel(); //Needed for PersonVec call to getLevel to work in Main
    virtual void print();
    virtual bool isTeacherAssistant(); //Needed for PersonVec input in Course Class to work
    virtual bool isLecturer(); //Needed for PersonVec input in Course Class to work
    ~Person();

};

#endif
