#ifndef PERSON_H
#define PERSON_H
#include<string>

using namespace std;

class Person
{
  protected:
    int universityID, age;
    string name;
    string gender;

  public:
    Person();
    virtual void print();
    ~Person();

};

#endif
