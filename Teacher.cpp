#include<iostream>
#include<stdlib.h>
#include"Teacher.h"

using namespace std;

Teacher::Teacher(string names, string IDs, string old, string type, string maleFemale)
{
  cout << "Teacher object created!\n";
  name = names;
  teacherID = IDs;
  age = old;
  teacherType = type;

  if(teacherType == "L")
  {
    lecturer = true;
    adjunct = false;
    professor = false;
  }
  else if(teacherType == "A")
  {
    lecturer = false;
    adjunct = true;
    professor = false;
  }
  else
  {
    lecturer = false;
    adjunct = false;
    professor = true;
  }

  if (maleFemale == "M")
  {
    gender = "Male";
  }
  else if (maleFemale == "F")
  {
    gender = "Female";
  }
  else
  {
    gender = "Unknown";
  }

  cout << "name = " << name << "\nteacherID = " << teacherID << "\nage = " << age << "\nteacherType = " << getType() << "\ngender = " << gender << endl << endl;


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
  return lecturer;
}

bool Teacher::isAdjunct()
{
  return adjunct;
}

bool Teacher::isProfessor()
{
  return professor;
}

void Teacher::setTeacherID()
{

}

int Teacher::getTeacherID()
{
  return 0;
}

/*void print()
{
  cout << "\nPrinting a Teacher object!\n" << endl;

  cout <<
}*/

Teacher::~Teacher()
{
  // Empty body for destructor //
}
