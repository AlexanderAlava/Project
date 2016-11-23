#include<iostream>
#include<stdlib.h>
#include"Course.h"

using namespace std;

static int countTA = 0;
static int countStudent = 0;
Course::Course(string ID, string name, string underGrad)
{
  cout << "\nCourse object created!\n";
  courseID = ID;
  cout << "courseID = " << courseID << endl;
  courseName = name;
  cout << "courseName = " << courseName << endl;

  if (underGrad == "U")
  {
    level = "Undergraduate";
  }
  else if (underGrad == "G")
  {
    level = "Graduate";
  }
  cout << "level = " << level << endl;

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

void Course::setTeacher(Teacher &teacher)
{
  teacherName = teacher.name;
}

void Course::setTA(Grad &ta)
{
  assistantNames[countTA] = ta.name;
  countTA++;
}

/*void Course::setStudents(Undergrad &student)
{
  studentNames[countStudent] = student.name;
  countStudent++;
}

void Course::display(Teacher &t)
{
  cout << "Displayed from Teacher class: " << t.name << endl;
}
*/
Course::~Course()
{
  // Empty body destructor //
}
