#include<iostream>
#include<stdlib.h>
#include"Teacher.h"

using namespace std;

Teacher::Teacher()
{
  // Prompting for and reading in user input for teacherID //
  cout << "\nPlease enter the ID of this teacher: ";
  cin >> teacherID;

  cout << "Please enter teachers name: ";
  cin >> name;

  cout << "Please enter teachers age: ";
  cin >> age;

  // Initializing all bool variables to false //
  lecturer = false;
  adjunct = false;
  professor = false;
}

string Teacher::getType()
{
  if (isAdjunct())
  {
    teacherType = "Adjunct";
  }
  else if (isLecturer())
  {
    teacherType = "Lecturer";
  }
  else if (isProfessor())
  {
    teacherType = "Professor";
  }
  else
  {
    teacherType = "Unknown";
  }

  return teacherType;
}

void Teacher::print()
{
  cout << "This is a teacher." << endl;
}

bool Teacher::isLecturer()
{
  // Setting the other options as false and this one as true //
  adjunct = false;
  professor = false;
  lecturer = true;

  return lecturer;
}

bool Teacher::isAdjunct()
{
   // Setting the other options as false and this one as true //
  adjunct = true;
  professor = false;
  lecturer = false;

  return adjunct;
}

bool Teacher::isProfessor()
{
   // Setting the other options as false and this one as true //
  adjunct = false;
  professor = true;
  lecturer = false;

  return professor;
}

void Teacher::setTeacherID(int ID)
{
  teacherID = ID;
}

int Teacher::getTeacherID()
{
  return teacherID;
}

Teacher::~Teacher()
{
  // Empty body for destructor //
}
