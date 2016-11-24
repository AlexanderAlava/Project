#include<iostream>
#include<stdlib.h>
#include"Teacher.h"

Teacher::Teacher(string names, string IDs, string old, string type, string maleFemale)
{
  //cout << "Teacher object created!\n";
  name = names;
  universityID = IDs;
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

  //cout << "name = " << name << "\nteacherID = " << universityID << "\ndate of birth = " << age << "\nteacherType = " << getType() << "\ngender = " << gender << endl << endl;


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

void Teacher::print()
{
  cout << "\n";
  cout << "The teacher name is: " << name << endl;
  cout << "The teacher date of birth is: " << age << endl;
  cout << "The teacher gender is: " << gender << endl;
  cout << "The teacher ID is: " << universityID << endl;
  cout << "The teacher type is: " << getType() << endl;
  cout << "\n";
}

string Teacher::getLevel()
{
  return teacherType;
}

Teacher::~Teacher()
{
  // Empty body for destructor //
}
