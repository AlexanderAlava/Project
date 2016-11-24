#include<iostream>
#include<stdlib.h>
#include"Student.h"

Student::Student()
{}

void Student::setCourse(string course)
{
  // Check if course already exists? //

  courseEnrolled = course;

  // Adding this student's name to the course object //
}

string Student::getCourse()
{
  return courseEnrolled;
}

void Student::print()
{
  cout << "Probably not needed here either." << endl;
}

Student::~Student()
{}
