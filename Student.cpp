#include<iostream>
#include<stdlib.h>
#include"Student.h"

static int courseCount = 0;

Student::Student()
{}

void Student::setCourse(string course)
{
  // Check if course already exists? //

  courseEnrolled[courseCount] = course;
  courseCount++;

  // Adding this student's name to the course object //
}

/* NEEDED???
string Student::getCourse()
{
  return courseEnrolled;
}*/

void Student::printCoursesEnrolled()
{
  for (int i = 0; i < 10; i++)
  {
    cout << courseEnrolled[i] << endl;
  }
}

void Student::print()
{
  cout << "Probably not needed here either." << endl;
}

Student::~Student()
{}
