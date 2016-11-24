#include<iostream>
#include<stdlib.h>
#include"Undergrad.h"

using namespace std;

Undergrad::Undergrad(string names, string IDs, string standing, string maleFemale)
{
  cout << "Undergrad object created!\n";
  name = names;
  studentID = IDs;
  classStanding = standing;
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

  cout << "name = " << name << "\nstudentID = " << studentID << "\nclassStanding = " << classStanding << "\nlevel = " << level << "\ngender = " << gender << endl << endl;
}

string Undergrad::getStanding()
{
  return classStanding;
}

void Undergrad::print()
{
  cout << "\n";
  cout << "The student name is: " << name << endl;
  //cout << "The student gender is: " << gender << endl;
  //cout << "The student date of birth is: " << age << endl;
  cout << "The student ID is: " << studentID << endl;
  cout << "The student class standing is: " << classStanding << endl;
  cout << "The student level is: " << level << endl;
  cout << "\n";
}

/*void Undergrad::enroll(Course &course, string CID)
{
  if(course.courseID == CID)
  {
    cout << "courseID == CID";
  }
}
*/

Undergrad::~Undergrad()
{}
