#ifndef UNDERGRAD_H
#define UNDERGRAD_H
#include<string>
#include"Student.h"

class Undergrad : public Student
{
  // Declaring the Course class to be a friend of this class //
  friend class Course;

  private:

    // Declaring an extra variable needed in this class //
    string level;


  public:

    // Declaring the constructor with five different parameters //
    Undergrad(string names, string IDs, string standing, string maleFemale, string dob);

    // Declaring member functions //
    virtual string getLevel();
    virtual void print();

    // Declaring the destructor //
    ~Undergrad();
};

#endif
