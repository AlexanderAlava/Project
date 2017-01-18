#ifndef GRAD_H
#define GRAD_H
#include<string>
#include"Student.h"

class Grad : public Student
{
  // Declaring the Course class to be a friend of this class //
  friend class Course;

  private:

    // Declaring extra variables to be used by each object instatiated //
    bool isTA, isDoctoral;

  public:

    // Declaring the constructor with six different parameters //
    Grad(string names, string IDs, string standing, string levels, string maleFemale, string dob);

    // Declaring member functions //
    bool isTeacherAssistant();
    bool isPhD();
    virtual string getLevel();
    virtual void print();

    // Declaring the destructor //
    ~Grad();
};

#endif
