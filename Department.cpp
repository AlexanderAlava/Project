#include<iostream>
#include<stdlib.h>
#include"Department.h"

using namespace std;

int static countStudentsEnrolled = 0;
int static countTeachersEnrolled = 0;
int static countCoursesEnrolled = 0;

Department::Department(string ID, string name)
{
  //cout << "\nDepartment object created!\n";

  departmentID = ID;
  //cout << "departmentID = " << departmentID << endl;

  departmentName = name;
  //cout << "departmentName = " << departmentName << endl;

}

void Department::setCourseToDepartment(string name, string id, string teacher, string idTeach, string & students, string & ids)
{
  int j = 0;

  coursesInDep[countCoursesEnrolled] = name;
  countCoursesEnrolled++;
  coursesInDep[countCoursesEnrolled] = id;
  countCoursesEnrolled++;

  teachersInDep[countTeachersEnrolled] = teacher;
  countTeachersEnrolled++;
  teachersInDep[countTeachersEnrolled] = idTeach;
  countTeachersEnrolled++;

  for (int i = countStudentsEnrolled; j < students.size(); j++)
  {
    studentsInDep[i] = students[j];
    countStudentsEnrolled++;
    i++;
    j++;
    studentsInDep[i] = students[j];
    countStudentsEnrolled++;
    i++;
  }

}

string Department::getDepartmentID()
{
  return departmentID;
}

void Department::printAllTeachers()
{
  cout << "\n\nALL TEACHERS!\n\n";
}

void Department::printAllStudents()
{
  cout << "\n\nALL STUDENTS!\n\n";
}

void Department::printAllCourses()
{
  cout << "\n\nALL COURSES!\n\n";
}

Department::~Department()
{
  // Empty body constructor //
}
