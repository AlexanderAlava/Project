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
  //Setting the student grade
  string grade = "";
  int numericGrade = 0;
  numericGrade = rand() % 100 + 1;
  cout << "numericGrade is: " << numericGrade << endl;
  if(numericGrade <= 59)
  {
    grade = "F";
  }
  else if(numericGrade >= 60 && numericGrade <= 69)
  {
    grade = "D";
  }
  else if(numericGrade >= 70 && numericGrade <= 79)
  {
    grade = "C";
  }
  else if(numericGrade >= 80 && numericGrade <= 89)
  {
    grade = "B";
  }
  else if(numericGrade >= 90 && numericGrade <= 100)
  {
    grade = "A";
  }
  else
  {
    grade = "F";
  }
  cout << "Letter grade was set to: " << grade << endl;
  studentGrades[countStudent] = grade;
  //cout << "studentGrades[" << countStudent << "] = " << studentGrades[countStudent] << endl;
  countStudent++;
}

string& Course::getGrades(int index)
{
  return studentGrades[index];
}

string Course::getCourseName()
{
  return courseName;
}

void Course::printTeachersAssigned()
{
  int i = 0;

  cout << "Teacher for " << courseName << " is: " << teacherName << endl << endl;
  if (countTA == 1)
  {
    cout << "\nTA enrolled in " << courseName << " is: " << endl;
  }
  else
  {
    cout << "\nTA's enrolled in " << courseName << " are: " << endl;
  }

  while(i < countTA)
  {
    cout << assistantNames[i] << endl;
    i++;
  }

}

void Course::printStudentsCourse()
{
  cout << "Students enrolled in " << courseName << " are: " << endl;
  for(int i = 0; i < countStudent; i++)
  {
    if (studentIDs[i] != "")
    {
      cout << studentIDs[i] << " - " << studentNames[i] << endl;
    }
  }
}

string & Course::getNamesStudentsEnrolled(int index)
{
  return studentNames[index];

}
string & Course::getIDStudentsEnrolled(int index)
{
  return studentIDs[index];
}
string Course::getTeacher()
{
  return teacherName;
}

Course::~Course()
{
  // Empty body destructor //
}
