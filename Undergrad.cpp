#include<iostream>
#include<stdlib.h>
#include"Undergrad.h"

using namespace std;

Undergrad::Undergrad(string names, string IDs, string standing, string maleFemale, string dob)
{
  //cout << "Undergrad object created!\n";
  name = names;
  universityID = IDs;
  classStanding = standing;
  age = dob;
  level = "BSc";

  if(standing == "F")
  {
    classStanding = "Freshman";
  }
  else if(standing == "So")
  {
    classStanding = "Sophomore";
  }
  else if(standing == "J")
  {
    classStanding = "Junior";
  }
  else if(standing == "Se")
  {
    classStanding = "Senior";
  }
  else
  {
    classStanding = "Unknown";
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

void Undergrad::print()
{
  cout << "\n";
  cout << "The student name is: " << name << endl;
  cout << "The student gender is: " << gender << endl;
  cout << "The student age is: " << age << endl;
  cout << "The student ID is: " << universityID << endl;
  cout << "The student class standing is: " << classStanding << endl;
  cout << "The student level is: " << level << endl;
  cout << "\n";
}

string Undergrad::getLevel()
{
  return level;
}

Undergrad::~Undergrad()
{}
