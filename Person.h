#ifndef PERSON_H
#define PERSON_H
#include<string>

using namespace std;

class Person
{
  // Declaring the Course class to be a friend of this class //
  friend class Course;

  protected:

    // Declaring the variables need for this class and all its child classes //
    string universityID;
    string age;
    string name;
    string gender;

  public:

    // Declaring the constructor with no parameters //
    Person();

    // Declaring member functions //
    virtual bool isTeacherAssistant();
    virtual bool isLecturer();
    virtual string getName();
    virtual string getUniversityID();
    virtual string getLevel();
    virtual void print();

    // Declaring the destructor //
    ~Person();
};

#endif
