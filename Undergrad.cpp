#include<iostream>
#include<stdlib.h>
#include"Undergrad.h"

using namespace std;

Undergrad::Undergrad(string names, string IDs, string standing, string maleFemale, string dob)
{
  // Initializing the name of the undergrad student from the specified parameter //
  name = names;

  // Initializing the ID of the undergrad student from the specified parameter if valid //
  if (IDs[0] == '-')
  {
    universityID = "N/A";
  }
  else
  {
    universityID = IDs;
  }

  // Initializing the age of the undergrad student from the specified parameter if valid //
  if (age[0] == '-')
  {
    age = "N/A";
  }
  else
  {
    age = dob;
  }

  // Initializing the level of the student to the only possible option //
  level = "BSc";

  // Checking the class standing of the student and overwriting the initial value for a whole word //
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

  // Checking the gender of the student and assigning a whole word to the variable in use //
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

// Defining the print function for undergrad which will output all the information of this student //
void Undergrad::print()
{
  // Printing the requested information of the undergrad student in a specific format //
  cout << "\n";
  cout << "The student name is: " << name << endl;
  cout << "The student gender is: " << gender << endl;
  cout << "The student age is: " << age << endl;
  cout << "The student ID is: " << universityID << endl;
  cout << "The student class standing is: " << classStanding << endl;
  cout << "The student level is: " << level << endl;
  cout << "\n";
}

// Declaring the getLevel function that returns the current level of the student //
string Undergrad::getLevel()
{
  // Returning the level of the student //
  return level;
}

Undergrad::~Undergrad()
{
  // Empty body destructor //
}
