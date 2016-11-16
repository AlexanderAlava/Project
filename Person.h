#ifndef PERSON_H
#define PERSON_H
#include<string>

class Person
{
  private:
    int universityID, birthDate;
    std::string name;
    std::string gender;

  public:
    Person();
    virtual void print();
    ~Person();

};

#endif
