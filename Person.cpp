#include<iostream>
#include<stdlib.h>
#include"Person.h"

Person::Person()
{
  // Empty body constructor //
}

void Person::print()
{
  // Empty body member function //
}

// Defining function needed for PersonVec call to getLevel to work in Main //
string Person::getLevel()
{
  // Assigning a dummy value to be returned //
  string temp = "Nothing";
  return temp;
}

 // Defining function needed for PersonVec input in Course class to work //
bool Person::isTeacherAssistant()
{
  // Assigning a dummy value to be returned //
  bool temp = false;
  return temp;
}

// Defining function needed for PersonVec input in Course class to work //
bool Person::isLecturer()
{
  // Assigning a dummy value to be returned //
  bool temp = false;
  return temp;
}

// Defining function that returns the name of the person //
string Person::getName()
{
  // Returning the name of the person //
  return name;
}

// Defining function that returns the universityID of the person //
string Person::getUniversityID()
{
  // Returning the ID of the person //
  return universityID;
}

Person::~Person()
{
  // Empty body destructor //
}
