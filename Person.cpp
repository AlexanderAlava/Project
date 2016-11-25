#include<iostream>
#include<stdlib.h>
#include"Person.h"

Person::Person()
{
  name = "nobody";
  gender = "N/A";
}

void Person::print()
{
  cout << "Maybe not needed in this class." << endl;
}

string Person::getLevel()
{
  string temp = "Nothing";
  return temp;
}

bool Person::isTeacherAssistant()
{
  bool temp = false;
  return temp;
}

bool Person::isLecturer()
{
  bool temp = false;
  return temp;
}

string Person::getName()
{
  return name;
}

string Person::getUniversityID()
{
  return universityID;
}

Person::~Person()
{
  // Empty body destructor //
}
