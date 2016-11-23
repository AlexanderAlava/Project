#include<iostream>
#include<stdlib.h>
#include"Grad.h"

using namespace std;

Grad::Grad(string names, string IDs, string standing, string levels, string maleFemale)
{
  cout << "Grad object created!\n";
  name = names;
  studentID = IDs;

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

  cout << "name = " << name << "\nstudentID = " << studentID << "\nclassStanding = " << classStanding << "\nlevel = " << level << "\ngender = " << gender << endl << endl;
  
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
  cout << "The student name is: " << name << endl;
  cout << "The student ID is: " << studentID << endl;
  cout << "The student class standing is: " << classStanding << endl;
  cout << "The student level is: " << level << endl;
}

Grad::~Grad()
{}
