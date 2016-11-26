#include<iostream>
#include<stdlib.h>
#include"Grad.h"

Grad::Grad(string names, string IDs, string standing, string levels, string maleFemale, string dob)
{
  //cout << "Grad object created!\n";
  name = names;
  universityID = IDs;
  age = dob;

  if (standing == "R")
  {
    classStanding = "Research Assistant";
    isTA = false;
  }
  else if (standing == "T")
  {
    classStanding = "Teacher Assistant";
    isTA = true;
  }
  else
  {
    classStanding = "Unknown";
    isTA = false;
  }

  if(levels == "P")
  {
    level = "PhD";
    isDoctoral = true;
  }
  else
  {
    level = "MSc";
    isDoctoral = false;
  }

  if (maleFemale == "Ma")
  {
    gender = "Male";
  }
  else if (maleFemale == "Fe")
  {
    gender = "Female";
  }
  else
  {
    gender = "Unknown";
  }

  //cout << "name = " << name << "\nstudentID = " << universityID << "\nclassStanding = " << classStanding << "\nlevel = " << level << "\ngender = " << gender << endl << endl;

}

bool Grad::isTeacherAssistant()
{
  return isTA;
}

bool Grad::isPhD()
{
  return isDoctoral;
}

void Grad::print()
{
  cout << "\n";
  cout << "The student name is: " << name << endl;
  cout << "The student gender is: " << gender << endl;
  cout << "The student age is: " << age << endl;
  cout << "The student ID is: " << universityID << endl;
  cout << "The position of the student is: " << classStanding << endl;
  cout << "The student is pursuing a degree of level: " << level << endl;
  cout << "\n";
}

string Grad::getLevel()
{
  return level;
}

Grad::~Grad()
{}
