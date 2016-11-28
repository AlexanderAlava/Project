#include<iostream>
#include<stdlib.h>
#include"Teacher.h"

// Declaring an integer static counter variable //
int static countCourses = 0;

// Defining the constructor for the teacher class with five different parameters //
Teacher::Teacher(string names, string IDs, string old, string type, string maleFemale)
{
  // Initializing the name of the teacher from the specified parameter //
  name = names;

  // Initializing the ID of the teacher from the specified parameter if valid //
  if (IDs[0] == '-')
  {
    universityID = "N/A";
  }
  else
  {
    universityID = IDs;
  }

  // Initializing the age of the teacher from the specified parameter if valid //
  if (age[0] == '-')
  {
    age = "N/A";
  }
  else
  {
    age = old;
  }

  // Initializing the type of the teacher from the specified parameter //
  teacherType = type;

  // Checking the value stored in teacherType in order to set to true or false each flag respectively //
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

  // Checking if the teacher is a male or a female and assigning the respective string //
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
}

// Defining the getType function which will use the other flag function to assign and print a string //
string Teacher::getType()
{
  // Checking which of the flag functions is true and assigning the respective string //
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

// Defining the isLecturer function that will be used as a flag //
bool Teacher::isLecturer()
{
  // Returning true or false //
  return lecturer;
}

// Defining the isAdjunct function that will be used as a flag //
bool Teacher::isAdjunct()
{
  // Returning true or false //
  return adjunct;
}

// Defining the isProfessor function that will be used as a flag //
bool Teacher::isProfessor()
{
  // Returning true or false //
  return professor;
}

// Defining the getTeacherID function which returns the ID of the teacher //
string Teacher::getTeacherID()
{
  // Returning the ID of the teacher //
  return universityID;
}

// Defining the getTeacherName function which returns the name of the teacher //
string Teacher::getTeacherName()
{
  // Returning the name of the teacher //
  return name;
}

// Defining the print function for the teacher class //
void Teacher::print()
{
  // Printing all the information required from a teacher //
  cout << "\n";
  cout << "The teacher name is: " << name << endl;
  cout << "The teacher date of birth is: " << age << endl;
  cout << "The teacher gender is: " << gender << endl;
  cout << "The teacher ID is: " << universityID << endl;
  cout << "The teacher type is: " << getType() << endl;
  cout << "\n";
}

// Defining the set function that assigns a course to a specific teacher //
void Teacher::setTeacherCourse(string courseName, string courseID)
{
  // Storing the name of the course into the array created for the function //
  coursesName[countCourses] = courseName;

  // Storing the ID of the course into the array created for the function //
  coursesIDs[countCourses] = courseID;

  // Incrementing static counter //
  countCourses++;
}

// Defining the print function for all the courses that this teacher teaches //
void Teacher::printTeacherCourses()
{
  // Printing header //
  cout << "\nThis professor teaches the following courses:" << endl;

  // Establishing a for loop that will run through all the courses stored in the array needed //
  for (int i = 0; i < countCourses; i++)
  {
    // Checking if the currex index position of the array is empty //
    if (coursesIDs[i] != "")
    {
      // Printing the required information in a specific format //
      cout << coursesIDs[i] << " - " << coursesName[i] << endl;
    }
  }
}

// Defining the function getLevel that overrides the parent class //
string Teacher::getLevel()
{
  // Returning the type of the teacher //
  return teacherType;
}

Teacher::~Teacher()
{
  // Empty body for destructor //
}
