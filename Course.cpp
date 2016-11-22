#include<iostream>
#include<stdlib.h>
#include"Course.h"

using namespace std;

Course::Course(string ID, string name)
{
  cout << "\nCourse object created!\n";
  courseID = ID;
  cout << "courseID = " << courseID << endl;
  courseName = name;
  cout << "courseName = " << courseName << endl;
}

bool Course::isGraduate()
{
  bool temp = true;
  return temp;
}

bool Course::isTeacher()
{
  bool temp = true;
  return temp;
}

bool Course::isTA()
{
  bool temp = true;
  return temp;
}

char Course::Grades()
{
  char temp = true;
  return temp;
}

string Course::getCourseID()
{
  return courseID = "NULL";
}

Course::~Course()
{
  // Empty body destructor //
}
