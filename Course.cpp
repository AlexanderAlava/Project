#include<iostream>
#include<stdlib.h>
#include"Course.h"

using namespace std;

Course::Course()
{
  cout << "What is the Course Name?" << endl;
  cout << "Course Name: ";
  cin >> courseName;
  cout << "Course Name set to: " << courseName << endl;

  cout << "What is the Course ID?" << endl;
  cout << "Course ID: ";
  cin >> courseID;
  cout << "Course ID set to: " << courseID << endl;
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

void Course::setCourseID(int)
{}

int Course::getCourseID()
{
  return courseID = 0;
}

Course::~Course()
{}
