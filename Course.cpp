#include<iostream>
#include<stdlib.h>
#include"Course.h"

using namespace std;

static int countTA = 0;
static int countStudent = 0;
Course::Course(string ID, string name, string underGrad)
{
  //cout << "\nCourse object created!\n";
  courseID = ID;
  //cout << "courseID = " << courseID << endl;
  courseName = name;
  //cout << "courseName = " << courseName << endl;

  if (underGrad == "U")
  {
    level = "Undergraduate";
  }
  else if (underGrad == "G")
  {
    level = "Graduate";
  }
  //cout << "level = " << level << endl;

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
  return courseID;
}

void Course::setTeacher(Person &teacher)
{
  teacherName = teacher.name;
}

void Course::setTA(Person &ta)
{
  assistantNames[countTA] = ta.name;
  countTA++;
}

void Course::setStudents(Person &person)
{
  //cout << "Inside setStudents function of Course Class" << endl;
  studentNames[countStudent] = person.name;
  studentIDs[countStudent] = person.universityID;
  countStudent++;
}

void Course::display()
{
  int i = 0;

  cout << "Teacher for " << courseName << " is: " << teacherName << endl << endl;

  cout << "Students enrolled in " << courseName << " are: " << endl;
  while(i < countStudent)
  {
    cout << studentNames[i] << endl;
    i++;
  }

  i = 0;
  cout << "\nTA's enrolled in " << courseName << " are: " << endl;
  while(i < countTA)
  {
    cout << assistantNames[i] << endl;
    i++;
  }

}

Course::~Course()
{
  // Empty body destructor //
}
