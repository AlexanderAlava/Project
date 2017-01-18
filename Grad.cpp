#include<iostream>
#include<stdlib.h>
#include"Grad.h"

Grad::Grad(string names, string IDs, string standing, string levels, string maleFemale, string dob)
{
  // Initializing the name of the grad student from the specified parameter //
  name = names;

  // Initializing the ID of the grad student from the specified parameter if valid //
  if (IDs[0] == '-')
  {
    universityID = "N/A";
  }
  else
  {
    universityID = IDs;
  }

  // Initializing the age of the grad student from the specified parameter if valid //
  if (age[0] == '-')
  {
    age = "N/A";
  }
  else
  {
    age = dob;
  }

  // Checking the class standing of the grad student and assigning the respective string //
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

  // Checking the level of the grad student and assigning the respective string //
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

  // Checking the gender of the grad student and assigning the respective string //
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
}

// Defining the isTeacherAssistant function that will be used as a flag //
bool Grad::isTeacherAssistant()
{
  // Returning true or false //
  return isTA;
}

// Defining the isPhD function that will be used as a flag //
bool Grad::isPhD()
{
  // Returning true or false //
  return isDoctoral;
}

// Defining the print function for the grad student class //
void Grad::print()
{
  // Printing all the information required for the grad student //
  cout << "\n";
  cout << "The student name is: " << name << endl;
  cout << "The student gender is: " << gender << endl;
  cout << "The student age is: " << age << endl;
  cout << "The student ID is: " << universityID << endl;
  cout << "The position of the student is: " << classStanding << endl;
  cout << "The student is pursuing a degree of level: " << level << endl;
  cout << "\n";
}

// Defining the getLevel function to be used for accessing a private variable //
string Grad::getLevel()
{
  // Returning the level of the graduate student //
  return level;
}

Grad::~Grad()
{
  // Empty body destructor //
}
