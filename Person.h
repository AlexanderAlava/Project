#ifndef PERSON_H
#define PERSON_H
#include<string>

class Person
{
  protected:
    int universityID, age;
    std::string name;
    std::string gender;

  public:
    Person();
    virtual void print();
    ~Person();

};

#endif
